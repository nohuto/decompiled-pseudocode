/*
 * XREFs of ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6930
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?InputReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKPEB_W@Z @ 0x1800A4CE0 (-InputReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKPEB_W@Z.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800A6340 (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEADK_JPEAUISpatialGraphNodeReference@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6CDC (-PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@W.c)
 *     ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A8308 (-SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800A8760 (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnInputReport(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a5)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v5; // rbp
  struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdi
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *v12; // r12
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v13; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v14; // rcx
  char v15; // al
  int v16; // eax
  _DWORD *v17; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v18; // rcx
  __int64 v19; // rbx
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF

  v5 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this - 8);
  v21 = 0LL;
  if ( (int)Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
              (__int64)this - 8,
              a2,
              &v21) < 0 )
  {
    v17 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
    if ( v17 && *v17 )
    {
      SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance();
      SpatialInteractionDevices::SpatialInteractionTraceContinuous::InputReportIgnored_(v18, a2, L"Unknown");
    }
  }
  else
  {
    v9 = (struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)v21;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 40LL))(v21) )
    {
      v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v9 + 24LL))(v9);
      PerformanceCount.QuadPart = 0LL;
      v11 = v10;
      if ( (*(unsigned __int8 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v9 + 32LL))(v9) )
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::UpdateRigTransforms(
          v5,
          0LL,
          (__int64 *)&PerformanceCount);
      else
        QueryPerformanceCounter(&PerformanceCount);
      if ( a4 >= (unsigned int)v11 )
      {
        v12 = a5;
        do
        {
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::PrepareAndSendInputInfo(
            v5,
            v9,
            a3,
            v11,
            PerformanceCount.QuadPart,
            0LL,
            v12);
          a4 -= v11;
          a3 += v11;
        }
        while ( a4 >= (unsigned int)v11 );
      }
    }
    else
    {
      v13 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance()
                                                                                                + 1);
      if ( v13 && *(_DWORD *)v13 )
      {
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance();
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::InputReportIgnored_(v14, a2, L"Not enabled");
      }
      v15 = *((_BYTE *)v9 + 101);
      *((_BYTE *)v9 + 101) = 0;
      if ( v15 )
      {
        v16 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(
                v13,
                (struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)v21,
                a5);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x216,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            (const char *)(unsigned int)v16);
      }
    }
  }
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v19 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  return 0LL;
}
