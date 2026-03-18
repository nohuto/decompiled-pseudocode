/*
 * XREFs of EtwpProcessEnumCallback @ 0x1404B03C0
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x1404B01BC (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpIsProcessZombie @ 0x1404B0690 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x1404B06C4 (EtwpTraceProcessRundown.c)
 *     PsEnumProcessThreads @ 0x1404B0AF8 (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x1404B0B80 (EtwpThreadEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x1404B0BC8 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateAddressSpace @ 0x1404FA9C0 (EtwpEnumerateAddressSpace.c)
 *     EtwpEnumerateWorkingSet @ 0x140710184 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x1407107A0 (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140710D94 (EtwpProcessPerfCtrsRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned int v2; // r15d
  char v3; // r13
  char v4; // r12
  _DWORD *v6; // rdi
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // bp
  ULONG v13; // r14d
  ULONG j; // ebp
  __int64 v15; // rax
  ULONG v16; // r14d
  ULONG i; // ebp
  __int64 Prcb; // rax
  $5BC46E0569261879018906DEC3127961 v19; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  v3 = 0;
  v4 = *(_BYTE *)(a2 + 96);
  v6 = *(_DWORD **)a2;
  *(_BYTE *)(a2 + 97) = 0;
  v8 = 0;
  if ( !(unsigned int)EtwpIsProcessZombie() )
  {
    v11 = 1;
    if ( (PVOID)v10 == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)v10 )
      {
LABEL_6:
        *(_BYTE *)(a2 + 97) = v11;
        *(_BYTE *)(a2 + 99) = v8;
        if ( v4 )
        {
          if ( v6 )
          {
            if ( (*v6 & 1) != 0 )
              EtwpTraceProcessRundown(BugCheckParameter1, v2, 771LL, a2);
            if ( (*v6 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v16 = KeNumberProcessors_0;
                for ( i = 0; i < v16; ++i )
                {
                  Prcb = KeGetPrcb(i);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(Prcb + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            if ( (*v6 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v6);
            if ( (*v6 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              LOBYTE(v9) = v4;
              EtwpSysModuleRunDown(v2, v9);
            }
            if ( (v6[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
          }
        }
        else if ( v6 )
        {
          if ( (v6[1] & 0x8000000) != 0 )
            EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
          if ( (*v6 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            EtwpSysModuleRunDown(v2, 0LL);
          if ( (*v6 & 0xC004) != 0 )
            EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v6);
          if ( (v6[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != PsIdleProcess )
            EtwpObjectHandleRundown((PEPROCESS)BugCheckParameter1);
          if ( (*v6 & 2) != 0 )
          {
            if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
            {
              v13 = KeNumberProcessors_0;
              for ( j = 0; j < v13; ++j )
              {
                v15 = KeGetPrcb(j);
                EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v15 + 24), a2);
              }
            }
            else
            {
              PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
            }
          }
          if ( (*v6 & 8) != 0 )
            EtwpProcessPerfCtrsRundown(BugCheckParameter1, v2);
          if ( (*v6 & 1) != 0 )
            EtwpTraceProcessRundown(BugCheckParameter1, v2, 772LL, a2);
        }
        if ( v3 )
        {
          KiUnstackDetachProcess(&v19, 0LL);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v10 + 760)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v19);
        v3 = 1;
        goto LABEL_6;
      }
    }
    v11 = 0;
    goto LABEL_6;
  }
  if ( v6 && (*v6 & 1) != 0 && !v4 )
    EtwpTraceProcessRundown(v10, v2, 807LL, a2);
  return 0LL;
}
