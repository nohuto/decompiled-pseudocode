/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14005CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@XZ @ 0x14005B2C0 (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x14005B510 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$At.c)
 *     ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAAXXZ @ 0x14005B678 (-Commit@ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$At.c)
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005CF10 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct AE_CURRENT_POSITION *a2,
        int a3)
{
  char v6; // bl
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  if ( (a2->Flag & 4) == 0 && a2->Flag )
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 110) + 8LL), a2->hnsQPCPosition);
  if ( CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
         this,
         (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v9) )
  {
    v6 = v9;
    if ( (v9 & 2) != 0 )
    {
      util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
        *((_QWORD *)this + 39),
        (__int64)v8);
      v7 = v8[0];
      if ( v8[0] )
      {
        *(_OWORD *)v8[0] = *(_OWORD *)&a2->u64DevicePosition;
        *(_OWORD *)(v7 + 16) = *(_OWORD *)&a2->u64PaddingFrames;
        *(_QWORD *)(v7 + 32) = *(_QWORD *)&a2->f32FramesPerSecond;
        if ( (v6 & 0x10) != 0 )
        {
          *(_QWORD *)(v7 + 88) = 0LL;
          *(_QWORD *)(v7 + 80) = 0LL;
          _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 110) + 64LL), 0xFFFFFFEF);
          v6 = v9;
          v7 = v8[0];
        }
        if ( (v6 & 8) == 0 )
        {
          *(_QWORD *)(v7 + 88) = *(_QWORD *)(v7 + 80);
          *(_OWORD *)(v7 + 40) = *(_OWORD *)&a2->u64DevicePosition;
          *(_OWORD *)(v7 + 56) = *(_OWORD *)&a2->u64PaddingFrames;
          *(_QWORD *)(v7 + 72) = *(_QWORD *)&a2->f32FramesPerSecond;
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 110) + 64LL), 0xCu);
          v7 = v8[0];
        }
        *(_DWORD *)(v7 + 96) = a3;
        util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(v8);
      }
      util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(v8);
    }
  }
}
