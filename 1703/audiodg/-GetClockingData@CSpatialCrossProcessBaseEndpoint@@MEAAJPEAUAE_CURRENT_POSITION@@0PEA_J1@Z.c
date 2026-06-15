/*
 * XREFs of ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14005B990
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x140058E00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x14005B494 (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005CF10 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14005D310 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockP.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 *a4,
        __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r10
  __int64 v10; // rcx
  char v11; // al
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v16; // [rsp+38h] [rbp-20h]
  char v17; // [rsp+44h] [rbp-14h]

  v8 = -2005139387;
  if ( CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
         this,
         (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v13) )
  {
    util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadAccess(
      *(_QWORD *)(v9 + 312),
      (__int64)&v14);
    v10 = v14;
    if ( v14 )
    {
      v11 = v13 & 0x10;
      *(_OWORD *)&a2->u64DevicePosition = *(_OWORD *)(v14 + 40);
      *(_OWORD *)&a2->u64PaddingFrames = *(_OWORD *)(v10 + 56);
      *(_QWORD *)&a2->f32FramesPerSecond = *(_QWORD *)(v10 + 72);
      *(_OWORD *)&a3->u64DevicePosition = *(_OWORD *)v10;
      *(_OWORD *)&a3->u64PaddingFrames = *(_OWORD *)(v10 + 16);
      *(_QWORD *)&a3->f32FramesPerSecond = *(_QWORD *)(v10 + 32);
      if ( v11 )
      {
        *a4 = 0LL;
        *a5 = 0LL;
      }
      else
      {
        *a4 = *(_QWORD *)(v10 + 88);
        *a5 = *(_QWORD *)(v10 + 80);
      }
      v8 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v15 + 8));
      v14 = 0LL;
      v17 = 0;
      std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::reset(&v15);
    }
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
  }
  return v8;
}
