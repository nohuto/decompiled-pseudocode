/*
 * XREFs of PspDisassociateUmsThreadFromPrimary @ 0x14071C9D4
 * Callers:
 *     PspUmsUnInitThread @ 0x140718B08 (PspUmsUnInitThread.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x14071CD00 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     RtlInitializeExtendedContext @ 0x1400DAE88 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400DAFAC (RtlGetExtendedContextLength.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeDoesTebMatchThread @ 0x14020EBF8 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x14020EC14 (KeGetCurrentUmsTeb.c)
 *     KeSetCurrentUmsTeb @ 0x14020EC5C (KeSetCurrentUmsTeb.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x1406D8AE8 (KeRemoveUmsThreadCidOwnership.c)
 *     KeUpdateUmsThreadState @ 0x1406D8C7C (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1406D93B0 (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x1406D9F58 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x140718928 (PspFindThreadForTeb.c)
 *     PspSetUmsThreadContext @ 0x14071CF0C (PspSetUmsThreadContext.c)
 */

__int64 __fastcall PspDisassociateUmsThreadFromPrimary(PETHREAD Thread, __int64 Object, int *a3)
{
  int updated; // ebx
  unsigned __int64 CurrentUmsTeb; // rax
  char v8; // r13
  char v9; // r15
  __int64 v10; // rdx
  _DWORD *v11; // r8
  struct _EX_RUNDOWN_REF *ThreadForTeb; // rax
  bool v13; // zf
  int v14; // r12d
  unsigned __int64 v15; // rax
  void *v16; // rsp
  CONTEXT *p_XState; // r12
  PCONTEXT_EX v18; // rbx
  int *v19; // rbx
  __int64 v20; // rcx
  void *v21; // rcx
  int v22; // eax
  _BYTE v24[4]; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  int *p_CycleTime; // [rsp+40h] [rbp+10h] BYREF
  int v28; // [rsp+48h] [rbp+18h]
  int v29; // [rsp+4Ch] [rbp+1Ch]
  int CycleTime; // [rsp+50h] [rbp+20h] BYREF
  int v31; // [rsp+54h] [rbp+24h]
  unsigned int CurrentRunTime; // [rsp+58h] [rbp+28h]
  int v33; // [rsp+5Ch] [rbp+2Ch]
  int v34; // [rsp+60h] [rbp+30h]

  updated = 0;
  CurrentUmsTeb = KeGetCurrentUmsTeb(Thread);
  v8 = 0;
  v9 = 0;
  if ( KeDoesTebMatchThread((__int64)Thread, CurrentUmsTeb) )
    goto LABEL_2;
  if ( Object )
  {
    if ( v10 != *(_QWORD *)(Object + 240) )
    {
LABEL_2:
      *v11 |= 2u;
      goto LABEL_23;
    }
LABEL_10:
    v13 = (Thread->MiscFlags & 0x100) == 0;
    v9 = v8;
    p_CycleTime = (int *)Thread->WaitBlock[3].Object;
    if ( v13 )
    {
      KeSetCurrentUmsTeb(Thread, (unsigned __int64)Thread->Teb);
      v14 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
      RtlGetExtendedContextLength(v14 + 1048603, &ContextLength);
      v15 = ContextLength + 15LL;
      if ( v15 <= ContextLength )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(v24, 0, ContextLength);
      RtlInitializeExtendedContext((PCONTEXT)v24, v14 + 1048603, &ContextEx);
      p_XState = (CONTEXT *)&ContextEx[-39].XState;
      PspGetContextThreadInternal((__int64)Thread, (__int64)&ContextEx[-39].XState, 0, 1, 1);
      ContextEx = **(PCONTEXT_EX **)(Object + 496);
      v18 = ContextEx;
      KeFixUserSwitchContext(Object, (__int64)ContextEx, 0LL, (__int64)p_XState);
      updated = KeRemoveUmsThreadCidOwnership((__int64)v18, 1);
      if ( updated >= 0 )
      {
        *a3 |= 2u;
        updated = PspSetUmsThreadContext(Object, p_XState, a3);
        v9 = v8;
        if ( updated >= 0 )
        {
          v19 = p_CycleTime;
          v20 = *((_QWORD *)p_CycleTime + 2);
          if ( *(_QWORD *)(*(_QWORD *)(Object + 496) + 16LL) != v20 )
          {
            ObReferenceObjectSafe(v20);
            v21 = *(void **)(*(_QWORD *)(Object + 496) + 16LL);
            if ( v21 )
              ObfDereferenceObject(v21);
            *(_QWORD *)(*(_QWORD *)(Object + 496) + 8LL) = *((_QWORD *)v19 + 1);
            *(_QWORD *)(*(_QWORD *)(Object + 496) + 16LL) = *((_QWORD *)v19 + 2);
          }
          updated = KeBuildPrimaryThreadContext((__int64)Thread, 0LL, (__int64)p_XState, 1, 0LL, 0LL);
          v9 = v8;
          if ( updated >= 0 )
          {
            PspSetContextThreadInternal(Thread, p_XState, 0, 1, 1);
            *a3 |= 8u;
            if ( v8 )
              updated = KeUpdateUmsThreadState((__int64)ContextEx, 0, 1);
          }
        }
      }
    }
    else
    {
      *a3 |= 1u;
    }
    goto LABEL_23;
  }
  ThreadForTeb = (struct _EX_RUNDOWN_REF *)PspFindThreadForTeb(v10);
  Object = (__int64)ThreadForTeb;
  if ( !ThreadForTeb )
  {
LABEL_5:
    updated = -1073740004;
    goto LABEL_23;
  }
  v8 = 1;
  if ( ExAcquireRundownProtection_0(ThreadForTeb + 215) )
    goto LABEL_10;
  KeSetCurrentUmsTeb(Thread, (unsigned __int64)Thread->Teb);
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1744), 0x10u) )
    goto LABEL_5;
LABEL_23:
  if ( SBYTE8(PerfGlobalGroupMask[0]) < 0 )
  {
    CycleTime = Thread[1].CycleTime;
    CurrentRunTime = Thread[1].CurrentRunTime;
    if ( Object )
      v31 = *(_DWORD *)(Object + 1600);
    else
      v31 = 0;
    v22 = *a3;
    v29 = 0;
    v33 = v22;
    v34 = updated;
    p_CycleTime = &CycleTime;
    v28 = 20;
    EtwTraceKernelEvent((__int64)&p_CycleTime, 1u, 0x40000080u, 0x1923u, 0x401802u);
  }
  if ( v8 )
  {
    if ( v9 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Object + 1720));
    ObfDereferenceObject((PVOID)Object);
  }
  return (unsigned int)updated;
}
