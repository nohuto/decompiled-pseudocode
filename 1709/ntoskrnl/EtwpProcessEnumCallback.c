/*
 * XREFs of EtwpProcessEnumCallback @ 0x14074DE90
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x14074E288 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 *     PsEnumProcessThreads @ 0x1405D6210 (PsEnumProcessThreads.c)
 *     EtwpEnumerateWorkingSet @ 0x14074CE48 (EtwpEnumerateWorkingSet.c)
 *     EtwpIsProcessZombie @ 0x14074CFA0 (EtwpIsProcessZombie.c)
 *     EtwpObjectHandleRundown @ 0x14074D884 (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x14074E154 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpSysModuleRunDown @ 0x14074EC14 (EtwpSysModuleRunDown.c)
 *     EtwpThreadEnumCallback @ 0x14074EE20 (EtwpThreadEnumCallback.c)
 *     EtwpTraceProcessRundown @ 0x14074EF74 (EtwpTraceProcessRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(PEPROCESS Process, __int64 a2)
{
  __int64 v2; // r15
  char v3; // r13
  char v4; // r12
  _DWORD *v6; // rdi
  char v8; // r14
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // rcx
  char v11; // bp
  ULONG v12; // r14d
  ULONG i; // ebp
  __int64 Prcb; // rax
  ULONG v15; // r14d
  ULONG j; // ebp
  __int64 v17; // rax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v19; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = 0;
  v4 = *(_BYTE *)(a2 + 104);
  v6 = *(_DWORD **)a2;
  *(_BYTE *)(a2 + 105) = 0;
  v8 = 0;
  if ( EtwpIsProcessZombie((__int64)Process) )
  {
    if ( v6 && (*v6 & 1) != 0 && !v4 )
      EtwpTraceProcessRundown(v10, v2, 807LL, v9);
    return 0LL;
  }
  v11 = 1;
  if ( Process == PsIdleProcess )
  {
    v8 = 1;
  }
  else
  {
    if ( KeGetCurrentThread()->ApcState.Process == Process )
      goto LABEL_9;
    if ( ExAcquireRundownProtection_0(v10 + 95) )
    {
      KiStackAttachProcess(Process, 0, (__int64)&v19);
      v3 = 1;
      goto LABEL_9;
    }
  }
  v11 = 0;
LABEL_9:
  *(_BYTE *)(a2 + 105) = v11;
  *(_BYTE *)(a2 + 107) = v8;
  if ( v4 )
  {
    if ( v6 )
    {
      if ( (*v6 & 1) != 0 )
        EtwpTraceProcessRundown(Process, v2, 771LL, a2);
      if ( (*v6 & 2) != 0 )
      {
        if ( Process == PsIdleProcess )
        {
          v12 = KeNumberProcessors_0;
          for ( i = 0; i < v12; ++i )
          {
            Prcb = KeGetPrcb(i);
            EtwpThreadEnumCallback(Process, *(_QWORD *)(Prcb + 24), a2);
          }
        }
        else
        {
          PsEnumProcessThreads(
            (__int64)Process,
            (__int64 (__fastcall *)(__int64, _QWORD *, __int64))EtwpThreadEnumCallback,
            a2);
        }
      }
      if ( (*v6 & 0xC004) != 0 )
        EtwpEnumerateAddressSpace((ULONG_PTR)Process, a2, v6);
      if ( (*v6 & 4) != 0 && Process == PsInitialSystemProcess )
      {
        LOBYTE(v9) = v4;
        EtwpSysModuleRunDown(v2, v9);
      }
      if ( (v6[1] & 0x8000000) != 0 )
        EtwpEnumerateWorkingSet((__int64)Process, a2);
    }
  }
  else if ( v6 )
  {
    if ( (v6[1] & 0x8000000) != 0 )
      EtwpEnumerateWorkingSet((__int64)Process, a2);
    if ( (*v6 & 4) != 0 && Process == PsInitialSystemProcess )
      EtwpSysModuleRunDown(v2, 0LL);
    if ( (*v6 & 0xC004) != 0 )
      EtwpEnumerateAddressSpace((ULONG_PTR)Process, a2, v6);
    if ( (v6[4] & 0x40) != 0 && Process != PsIdleProcess )
      EtwpObjectHandleRundown((struct _EX_RUNDOWN_REF *)Process, a2);
    if ( (*v6 & 2) != 0 )
    {
      if ( Process == PsIdleProcess )
      {
        v15 = KeNumberProcessors_0;
        for ( j = 0; j < v15; ++j )
        {
          v17 = KeGetPrcb(j);
          EtwpThreadEnumCallback(Process, *(_QWORD *)(v17 + 24), a2);
        }
      }
      else
      {
        PsEnumProcessThreads(
          (__int64)Process,
          (__int64 (__fastcall *)(__int64, _QWORD *, __int64))EtwpThreadEnumCallback,
          a2);
      }
    }
    if ( (*v6 & 8) != 0 )
      EtwpProcessPerfCtrsRundown(Process, v2);
    if ( (*v6 & 1) != 0 )
      EtwpTraceProcessRundown(Process, v2, 772LL, a2);
  }
  if ( v3 )
  {
    KiUnstackDetachProcess(&v19, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
  return 0LL;
}
