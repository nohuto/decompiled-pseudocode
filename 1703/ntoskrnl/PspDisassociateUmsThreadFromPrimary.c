/*
 * XREFs of PspDisassociateUmsThreadFromPrimary @ 0x1406E45F4
 * Callers:
 *     PspUmsUnInitThread @ 0x1406E26B4 (PspUmsUnInitThread.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x1406E4910 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeDoesTebMatchThread @ 0x1402081C8 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1402081E4 (KeGetCurrentUmsTeb.c)
 *     KeSetCurrentUmsTeb @ 0x14020822C (KeSetCurrentUmsTeb.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x1406AD6A4 (KeRemoveUmsThreadCidOwnership.c)
 *     KeUpdateUmsThreadState @ 0x1406AD838 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1406ADF70 (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x1406AEB08 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x1406E24F8 (PspFindThreadForTeb.c)
 *     PspSetUmsThreadContext @ 0x1406E4B1C (PspSetUmsThreadContext.c)
 */

__int64 __fastcall PspDisassociateUmsThreadFromPrimary(PETHREAD Thread, __int64 Object, int *a3)
{
  int updated; // ebx
  unsigned __int64 CurrentUmsTeb; // rax
  char v8; // r12
  __int64 v9; // rdx
  _DWORD *v10; // r8
  struct _EX_RUNDOWN_REF *ThreadForTeb; // rax
  _QWORD *v12; // r13
  int v13; // r15d
  unsigned __int64 v14; // rax
  void *v15; // rsp
  CONTEXT *p_XState; // r15
  PCONTEXT_EX v17; // rbx
  __int64 v18; // rcx
  void *v19; // rcx
  int v20; // eax
  _BYTE v22[4]; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  unsigned int CurrentRunTime; // [rsp+40h] [rbp+10h] BYREF
  int v26; // [rsp+44h] [rbp+14h]
  int KernelStack; // [rsp+48h] [rbp+18h]
  int v28; // [rsp+4Ch] [rbp+1Ch]
  int v29; // [rsp+50h] [rbp+20h]
  unsigned int *p_CurrentRunTime; // [rsp+58h] [rbp+28h] BYREF
  int v31; // [rsp+60h] [rbp+30h]
  int v32; // [rsp+64h] [rbp+34h]

  updated = 0;
  CurrentUmsTeb = KeGetCurrentUmsTeb(Thread);
  v22[0] = 0;
  v8 = 0;
  if ( KeDoesTebMatchThread((__int64)Thread, CurrentUmsTeb) )
    goto LABEL_2;
  if ( Object )
  {
    if ( v9 != *(_QWORD *)(Object + 240) )
    {
LABEL_2:
      *v10 |= 2u;
      goto LABEL_24;
    }
    goto LABEL_11;
  }
  ThreadForTeb = (struct _EX_RUNDOWN_REF *)PspFindThreadForTeb(v9);
  Object = (__int64)ThreadForTeb;
  if ( !ThreadForTeb )
  {
LABEL_5:
    updated = -1073740004;
    goto LABEL_24;
  }
  v8 = 1;
  if ( ExAcquireRundownProtection(ThreadForTeb + 214) )
  {
    v22[0] = 1;
LABEL_11:
    v12 = Thread->WaitBlock[3].Object;
    if ( (Thread->MiscFlags & 0x100) != 0 )
    {
      *a3 |= 1u;
    }
    else
    {
      KeSetCurrentUmsTeb(Thread, (unsigned __int64)Thread->Teb);
      v13 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
      RtlGetExtendedContextLength(v13 + 1048603, &ContextLength);
      v14 = ContextLength + 15LL;
      if ( v14 <= ContextLength )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(v22, 0, ContextLength);
      RtlInitializeExtendedContext((PCONTEXT)v22, v13 + 1048603, &ContextEx);
      p_XState = (CONTEXT *)&ContextEx[-39].XState;
      PspGetContextThreadInternal((__int64)Thread, (__int64)&ContextEx[-39].XState, 0, 1, 1);
      ContextEx = **(PCONTEXT_EX **)(Object + 496);
      v17 = ContextEx;
      KeFixUserSwitchContext(Object, (__int64)ContextEx, 0LL, (__int64)p_XState);
      updated = KeRemoveUmsThreadCidOwnership((__int64)v17, 1);
      if ( updated >= 0 )
      {
        *a3 |= 2u;
        updated = PspSetUmsThreadContext(Object, p_XState, a3);
        if ( updated >= 0 )
        {
          v18 = v12[2];
          if ( *(_QWORD *)(*(_QWORD *)(Object + 496) + 16LL) != v18 )
          {
            ObReferenceObjectSafe(v18);
            v19 = *(void **)(*(_QWORD *)(Object + 496) + 16LL);
            if ( v19 )
              ObfDereferenceObject(v19);
            *(_QWORD *)(*(_QWORD *)(Object + 496) + 8LL) = v12[1];
            *(_QWORD *)(*(_QWORD *)(Object + 496) + 16LL) = v12[2];
          }
          updated = KeBuildPrimaryThreadContext((__int64)Thread, 0LL, (__int64)p_XState, 1, 0LL, 0LL);
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
    goto LABEL_24;
  }
  KeSetCurrentUmsTeb(Thread, (unsigned __int64)Thread->Teb);
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1736), 0x10u) )
    goto LABEL_5;
LABEL_24:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    CurrentRunTime = Thread[1].CurrentRunTime;
    KernelStack = (int)Thread[1].KernelStack;
    if ( Object )
      v26 = *(_DWORD *)(Object + 1600);
    else
      v26 = 0;
    v20 = *a3;
    v32 = 0;
    v28 = v20;
    v29 = updated;
    p_CurrentRunTime = &CurrentRunTime;
    v31 = 20;
    EtwTraceKernelEvent((int)&p_CurrentRunTime, 1, 0x40000080u, 6435, 4200450);
  }
  if ( v8 )
  {
    if ( v22[0] )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(Object + 1712));
    ObfDereferenceObject((PVOID)Object);
  }
  return (unsigned int)updated;
}
