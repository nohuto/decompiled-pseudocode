/*
 * XREFs of ??0?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z @ 0x180079E40
 * Callers:
 *     SpatialInteractionDevices::GetReportCaps @ 0x180079290 (SpatialInteractionDevices--GetReportCaps.c)
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800945A4 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     ??$make_shared@VAsynchronousWorkItem@SpatialInputControllerCollection@@AEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@4@AEA_N@std@@YA?AV?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@0@AEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@0@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@0@AEA_N@Z @ 0x18009841C (--$make_shared@VAsynchronousWorkItem@SpatialInputControllerCollection@@AEAV-$shared_ptr@VSpatial.c)
 *     ??$_Buynode@AEAKAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEAKAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@1@@Z @ 0x180098B0C (--$_Buynode@AEAKAEAV-$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rdi
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v5 = (volatile signed __int32 *)a1[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  a1[1] = v3;
  result = a1;
  *a1 = v4;
  return result;
}
