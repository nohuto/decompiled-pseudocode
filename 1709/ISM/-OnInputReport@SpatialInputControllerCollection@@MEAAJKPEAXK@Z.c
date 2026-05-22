/*
 * XREFs of ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180094160
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18008FD44 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x18008FE60 (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x1800901C4 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     ?UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@Windows@@PEA_J@Z @ 0x180091444 (-UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@.c)
 *     ?PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKK_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@@Z @ 0x180091680 (-PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController.c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800945A4 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInputControllerCollection::OnInputReport(
        SpatialInputControllerCollection *this,
        unsigned int a2,
        char *a3,
        unsigned int a4)
{
  _DWORD *v8; // rdx
  RawInputProvidersContinuousTracing *v9; // rcx
  struct SpatialInteractionDevices::SpatialInteractionController *v10; // rbp
  __int64 v11; // rdi
  _DWORD *v12; // rcx
  RawInputProvidersContinuousTracing *v13; // rcx
  const unsigned __int16 *v14; // r8
  _DWORD *v15; // rcx
  struct SpatialInteractionDevices::SpatialInteractionController *v16; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  struct SpatialInteractionDevices::SpatialInteractionController *v20[2]; // [rsp+50h] [rbp-28h] BYREF

  v19 = -2LL;
  v8 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
  if ( v8 && *v8 )
  {
    RawInputProvidersContinuousTracing::Instance();
    RawInputProvidersContinuousTracing::InputReportReceived_(v9, a2, a4);
  }
  *(_OWORD *)v20 = 0LL;
  if ( (int)SpatialInputControllerCollection::GetCacheEntry(this, a2, v20) < 0 )
  {
    v15 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( v15 && *v15 )
    {
      RawInputProvidersContinuousTracing::Instance();
      v14 = L"Unknown";
      goto LABEL_19;
    }
  }
  else
  {
    if ( *((_BYTE *)v20[0] + 1064) && !*((_BYTE *)v20[0] + 1088) )
    {
      v10 = v20[0];
      v11 = *((unsigned __int16 *)v20[0] + 54);
      if ( *((_BYTE *)v20[0] + 800) )
        SpatialInputControllerCollection::UpdateRigTransforms(this, 0LL, &PerformanceCount);
      else
        QueryPerformanceCounter(&PerformanceCount);
      while ( a4 >= (unsigned int)v11 )
      {
        SpatialInputControllerCollection::PrepareAndSendInputInfo(
          this,
          v10,
          a3,
          v11,
          a2,
          PerformanceCount.QuadPart,
          0LL);
        a4 -= v11;
        a3 += v11;
      }
      goto LABEL_20;
    }
    v12 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( v12 && *v12 )
    {
      RawInputProvidersContinuousTracing::Instance();
      v14 = L"Not enabled";
LABEL_19:
      RawInputProvidersContinuousTracing::InputReportIgnored_(v13, a2, v14);
    }
  }
LABEL_20:
  if ( v20[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v16 = v20[1];
      (**(void (__fastcall ***)(struct SpatialInteractionDevices::SpatialInteractionController *))v20[1])(v20[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(struct SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v20[1]
                                                                                                 + 8LL))(v20[1]);
    }
  }
  return 0LL;
}
