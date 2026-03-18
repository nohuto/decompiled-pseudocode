/*
 * XREFs of PsGetThreadProperty @ 0x140107C90
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     PsGetJobProperty @ 0x140107E30 (PsGetJobProperty.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  void *v3; // rbp
  char v4; // r14
  PVOID *p_SparePtr; // rsi
  volatile signed __int32 *v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  PVOID *v10; // rcx
  PVOID *v11; // r15
  unsigned __int64 CurrentSilo; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  v4 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0
    || Thread == KeGetCurrentPrcb()->IdleThread
    || KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(Thread[-1].QueuedScb) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Thread - 48) >> 8)] != PsThreadType
    || Thread == KeGetCurrentThread() && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    return 0LL;
  }
  p_SparePtr = &Thread[1].WaitBlock[1].SparePtr;
  v8 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[104];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&Thread[1].WaitBlockFill11[104]);
  }
  else if ( _interlockedbittestandset64(v8, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Thread[1].WaitBlockFill11[104]);
  }
  v10 = (PVOID *)*p_SparePtr;
  v11 = 0LL;
  if ( *p_SparePtr != p_SparePtr )
  {
    while ( v10[2] != (PVOID)Key )
    {
      v10 = (PVOID *)*v10;
      if ( v10 == p_SparePtr )
        goto LABEL_11;
    }
    v11 = v10;
    if ( v10 )
      ObfReferenceObjectWithTag(v10[3], 0x72507350u);
  }
LABEL_11:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[104], retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  __writecr8(CurrentIrql);
  if ( v11 )
    return v11[3];
  if ( (v4 & 1) == 0 )
  {
    if ( *(_QWORD *)&Thread[1].WaitBlockFill11[160] == -3LL )
      CurrentSilo = Thread->Process[1].Affinity.Bitmap[16];
    else
      CurrentSilo = PsGetCurrentSilo();
    if ( CurrentSilo )
      return (PVOID)PsGetJobProperty(CurrentSilo, Key);
  }
  return v3;
}
