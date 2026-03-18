/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x14011AB70
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x14011A600 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  volatile signed __int64 *v3; // rcx
  char v5; // al
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int16 v8; // cx
  volatile signed __int64 *v9[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = 2;
  v3 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v9[0] = 0LL;
  v9[1] = v3;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v5 = KiFastAcquireQueuedSpinLockInstrumented(v9, v3, &v10);
  }
  else
  {
    v5 = 0;
    v6 = _InterlockedExchange64(v3, (__int64)v9);
    if ( v6 )
    {
      KxWaitForLockOwnerShipWithIrql(v9, v6, &v10);
      v5 = 1;
    }
  }
  if ( v5 )
  {
    _disable();
    __writecr8(v10);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v8 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter2 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter2 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL);
  }
  if ( (v8 & 0x80u) != 0 )
    ExpReleaseResourceExclusiveForThreadLite(BugCheckParameter1, BugCheckParameter2, v9);
  else
    ExpReleaseResourceSharedForThreadLite(BugCheckParameter1, BugCheckParameter2, v9);
}
