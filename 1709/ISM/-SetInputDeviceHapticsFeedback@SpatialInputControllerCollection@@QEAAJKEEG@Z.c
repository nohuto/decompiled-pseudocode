/*
 * XREFs of ?SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z @ 0x180095948
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180088920 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z @ 0x18008F324 (-SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z.c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800945A4 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x1800C685C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 *     ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800C6B54 (-StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCr.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialInputControllerCollection::SetInputDeviceHapticsFeedback(
        SpatialInputControllerCollection *this,
        unsigned int a2,
        unsigned __int8 a3,
        char a4,
        unsigned __int16 a5)
{
  unsigned __int16 v8; // r15
  SpatialInteractionDevices::SpatialInteractionController *v9; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v11; // rdx
  int v12; // ebx
  _DWORD *v13; // rcx
  RawInputProvidersTracing *v14; // rcx
  SpatialInteractionDevices::SpatialInteractionController *v15; // rbx
  __int128 v17; // [rsp+38h] [rbp-38h]
  SpatialInteractionDevices::SpatialInteractionController *v18[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v19; // [rsp+58h] [rbp-18h]
  char v20; // [rsp+68h] [rbp-8h]
  int CacheEntry; // [rsp+B0h] [rbp+40h] BYREF

  CacheEntry = 0;
  *(_OWORD *)v18 = 0LL;
  *(_QWORD *)&v17 = &CacheEntry;
  DWORD2(v17) = a2;
  BYTE12(v17) = a3;
  BYTE13(v17) = a4;
  v8 = a5;
  HIWORD(v17) = a5;
  v19 = v17;
  v20 = 1;
  CacheEntry = SpatialInputControllerCollection::GetCacheEntry((__int64)this, a2, (__int64 *)v18);
  if ( CacheEntry >= 0 )
  {
    if ( a4 )
    {
      CacheEntry = SpatialInteractionDevices::SpatialInteractionController::SetHapticsFeedback(
                     v18[0],
                     a3 + 4096,
                     a4,
                     v8);
    }
    else
    {
      v9 = v18[0];
      v10 = (struct _RTL_CRITICAL_SECTION *)((char *)v18[0] + 896);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v18[0] + 896));
      v12 = SpatialInteractionDevices::SpatialInteractionController::StopHapticsFeedback(v9, v11);
      if ( v10 )
        LeaveCriticalSection(v10);
      CacheEntry = v12;
    }
  }
  v13 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v13 && *v13 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::SetHapticsFeedback_(v14, CacheEntry, a2, a3, a4, v8);
  }
  if ( v18[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v15 = v18[1];
      (**(void (__fastcall ***)(SpatialInteractionDevices::SpatialInteractionController *))v18[1])(v18[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v18[1] + 8LL))(v18[1]);
    }
  }
  return 0LL;
}
