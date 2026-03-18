/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00D5574
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00D4F4C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B861C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02B99EC (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00D2E70 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C00D52A4 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C00D5314 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02B84A0 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        const void *a3)
{
  int v6; // eax
  char v7; // si
  int inserted; // ebx
  char v10; // al
  int v11; // ebx

  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  v6 = *((_DWORD *)this + 7);
  v7 = 0;
  while ( v6 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
    v6 = *((_DWORD *)this + 7);
  }
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal((__int64)this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( inserted == 2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this, 0LL);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement((volatile signed __int32 *)this + 7);
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
    return 1;
  }
  if ( inserted != 1 )
    return 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
  if ( *((_DWORD *)this + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
  v10 = NSInstrumentation::CPointerHashTable::Resize(this);
  _InterlockedDecrement((volatile signed __int32 *)this + 7);
  if ( v10 )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    while ( 1 )
    {
      KeLeaveCriticalRegion();
      _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
      if ( !*((_DWORD *)this + 7) )
        break;
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(this, 0LL);
      ExReleasePushLockSharedEx(this, 0LL);
    }
    v11 = NSInstrumentation::CPointerHashTable::InsertInternal((__int64)this, a2, a3);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    if ( v11 == 1 )
      return v7;
    return 1;
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  return 0;
}
