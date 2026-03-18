/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x14006A2D0
 * Callers:
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140083270 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  volatile __int64 *v3; // rcx
  char v5; // al
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int16 v8; // cx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 2;
  v3 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v10[0] = 0LL;
  v10[1] = v3;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v5 = KiFastAcquireQueuedSpinLockInstrumented(v10, v3, &v11);
  }
  else
  {
    v5 = 0;
    v6 = _InterlockedExchange64(v3, (__int64)v10);
    if ( v6 )
    {
      KxWaitForLockOwnerShipWithIrql(v10, v6, &v11);
      v5 = 1;
    }
  }
  if ( v5 )
  {
    _disable();
    __writecr8(v11);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v8 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter3 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter3 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter3, 0LL);
  }
  if ( (v8 & 0x80u) != 0 )
    return ExpReleaseResourceExclusiveForThreadLite(BugCheckParameter1, BugCheckParameter3);
  else
    return ExpReleaseResourceSharedForThreadLite(BugCheckParameter1, BugCheckParameter3);
}
