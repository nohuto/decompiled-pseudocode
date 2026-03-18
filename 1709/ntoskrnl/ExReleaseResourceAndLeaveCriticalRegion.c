/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x14001F020
 * Callers:
 *     <none>
 * Callees:
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14001F1A0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140083270 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExpFastResourceLegacyRelease @ 0x1401400C4 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  __int16 v2; // ax
  ULONG_PTR v3; // rsi
  char v4; // al
  __int64 v5; // rdx
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // r8
  struct _KTHREAD *v8; // rcx
  bool v9; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v13; // [rsp+68h] [rbp+10h] BYREF

  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v2 = Resource->Flag & 1;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v2 )
  {
    ExpFastResourceLegacyRelease(Resource);
  }
  else
  {
    v3 = (ULONG_PTR)KeGetCurrentThread();
    v12[1] = &Resource->SpinLock;
    v12[0] = 0LL;
    v13 = 2;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v4 = KiFastAcquireQueuedSpinLockInstrumented(v12, &Resource->SpinLock, &v13);
    }
    else
    {
      v4 = 0;
      v5 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)v12);
      if ( v5 )
      {
        KxWaitForLockOwnerShipWithIrql(v12, v5, &v13);
        v4 = 1;
      }
    }
    if ( v4 )
    {
      _disable();
      __writecr8(v13);
    }
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource) && (v3 & 3) != 3 && v3 != v7 )
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, v7, v3, 0LL);
    if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
      ExpReleaseResourceSharedForThreadLite(v6, v3);
    else
      ExpReleaseResourceExclusiveForThreadLite(v6, v3);
  }
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable++ == -1;
  if ( v9
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
