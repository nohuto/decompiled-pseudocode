/*
 * XREFs of ExpSetTimer2 @ 0x140051C60
 * Callers:
 *     NtCancelTimer2 @ 0x14003B624 (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x14003C914 (NtSetIRTimer.c)
 *     NtSetTimer2 @ 0x140051C3C (NtSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerSetParametersAreValid @ 0x140051EBC (ExpTimerSetParametersAreValid.c)
 *     PsIsProcessTimerDelayActive @ 0x140051ED4 (PsIsProcessTimerDelayActive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsInsertVirtualizedTimer @ 0x14012AA9C (PsInsertVirtualizedTimer.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExpCalcDueTimeWithDelay @ 0x14025CF98 (ExpCalcDueTimeWithDelay.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, unsigned __int64 a2, unsigned __int64 a3)
{
  HANDLE v3; // r10
  char v4; // r15
  KPROCESSOR_MODE PreviousMode; // r9
  _KPROCESS *Process; // r14
  __int64 v7; // rbx
  __int128 *v8; // rdi
  NTSTATUS result; // eax
  char v10; // r13
  KSPIN_LOCK *v11; // rsi
  __int64 *v12; // r12
  KIRQL CurrentIrql; // bl
  int v14; // r8d
  KPROCESSOR_MODE v15; // [rsp+30h] [rbp-78h]
  __int128 *v16; // [rsp+38h] [rbp-70h]
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-60h] BYREF
  NTSTATUS v19; // [rsp+4Ch] [rbp-5Ch]
  __int64 v20; // [rsp+50h] [rbp-58h] BYREF
  __int128 v21; // [rsp+58h] [rbp-50h] BYREF

  v3 = Handle;
  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = PreviousMode;
  Process = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v8 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    if ( PreviousMode )
    {
      if ( a2 >= 0x7FFFFFFF0000LL )
        a2 = 0x7FFFFFFF0000LL;
      v7 = *(_QWORD *)a2;
      v20 = *(_QWORD *)a2;
      if ( a3 )
      {
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a3 + 16 > 0x7FFFFFFF0000LL || a3 + 16 < a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v21 = *(_OWORD *)a3;
        v8 = &v21;
        v16 = &v21;
      }
      else
      {
        v8 = 0LL;
      }
    }
    else
    {
      v7 = *(_QWORD *)a2;
      v20 = *(_QWORD *)a2;
      if ( a3 )
      {
        v21 = *(_OWORD *)a3;
        v8 = &v21;
        v16 = &v21;
      }
    }
    v4 = 1;
  }
  if ( v8 && !(unsigned __int8)ExpTimerSetParametersAreValid(v8) )
    return -1073741583;
  result = ObReferenceObjectByHandle(v3, 2u, ExpIRTimerObjectType, PreviousMode, &Object, 0LL);
  v19 = result;
  if ( result >= 0 )
  {
    v10 = 0;
    v11 = (KSPIN_LOCK *)Object;
    v12 = (__int64 *)((char *)Object + 144);
    *((_QWORD *)Object + 18) = v7;
    v11[23] = 0LL;
    if ( v8 )
      v11[23] = *((_QWORD *)v8 + 1);
    CurrentIrql = KeGetCurrentIrql();
    if ( v15 )
    {
      if ( !v4 )
        goto LABEL_35;
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = (KSPIN_LOCK *)Object;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 && (*((_DWORD *)Object + 48) & 2) == 0 )
      {
        CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Process[2].IdealNode[4]);
        KxAcquireSpinLock(v11 + 17);
        v10 = 1;
        if ( !v11[19] )
        {
          LOBYTE(v14) = 1;
          PsInsertVirtualizedTimer((_DWORD)Process, (_DWORD)v11 + 160, v14, 0, (__int64)(v11 + 19));
        }
        if ( (unsigned __int8)PsIsProcessTimerDelayActive(Process, &v18) )
          *v12 = ExpCalcDueTimeWithDelay(&v20, v18);
        _InterlockedIncrement((volatile signed __int32 *)&Process[2].ThreadSeed[19]);
        v11 = (KSPIN_LOCK *)Object;
      }
      v8 = v16;
    }
    if ( v4 )
    {
      KeSetTimer2((__int64)v11, *v12, 0LL, (__int64)v8);
LABEL_25:
      if ( v10 )
      {
        KxReleaseSpinLock(v11 + 17);
        KxReleaseSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[4]);
        __writecr8(CurrentIrql);
      }
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      return v19;
    }
LABEL_35:
    KeCancelTimer2(v11, 0LL);
    goto LABEL_25;
  }
  return result;
}
