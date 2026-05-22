/*
 * XREFs of ?OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z @ 0x180095AA8
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180088920 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18008FD44 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?TrackingRequestedHeartbeat_@RawInputProvidersContinuousTracing@@QEAAXPEBGK@Z @ 0x18009028C (-TrackingRequestedHeartbeat_@RawInputProvidersContinuousTracing@@QEAAXPEBGK@Z.c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800945A4 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     ?QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@3@_N@Z @ 0x180095E48 (-QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV-$shared_ptr@VSpatialInteractionContro.c)
 *     ?HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ @ 0x1800C43BC (-HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInputControllerCollection::OnTrackingRequestedHeartbeat(
        SpatialInputControllerCollection *this,
        unsigned int a2)
{
  int CacheEntry; // eax
  SpatialInteractionDevices::SpatialInteractionController *v5; // rbx
  const unsigned __int16 *StringRawBuffer; // rsi
  _DWORD *v7; // rcx
  RawInputProvidersContinuousTracing *v8; // rcx
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rsi
  SpatialInteractionDevices::SpatialInteractionController *v12; // rbx
  SpatialInteractionDevices::SpatialInteractionController *v14[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct _FILETIME pftDueTime; // [rsp+B0h] [rbp+30h] BYREF

  *(_OWORD *)v14 = 0LL;
  CacheEntry = SpatialInputControllerCollection::GetCacheEntry((__int64)this, a2, (__int64 *)v14);
  if ( CacheEntry >= 0 )
  {
    v5 = v14[0];
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v14[0] + 99), 0LL);
    v7 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( v7 && *v7 )
    {
      RawInputProvidersContinuousTracing::Instance();
      RawInputProvidersContinuousTracing::TrackingRequestedHeartbeat_(v8, StringRawBuffer, a2);
    }
    if ( !SpatialInteractionDevices::SpatialInteractionController::HasDynamicNode(v5) )
    {
      v15[0] = off_1800D7CE8;
      v15[1] = this;
      v15[7] = v15;
      LOBYTE(v9) = 1;
      v10 = SpatialInputControllerCollection::QueueWorkItem(this, v14, v15, v9);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x72F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
          (const char *)(unsigned int)v10);
      v5 = v14[0];
    }
    _InterlockedExchange64((volatile __int64 *)v5 + 92, GetTickCount64());
    v11 = *((_QWORD *)v5 + 93);
    AcquireSRWLockExclusive((PSRWLOCK)v5 + 83);
    if ( !*((_BYTE *)v5 + 656) )
    {
      *((_BYTE *)v5 + 656) = 1;
      pftDueTime = (struct _FILETIME)(-10000 * v11);
      SetThreadpoolTimer(*((PTP_TIMER *)v5 + 81), &pftDueTime, 0, 0);
    }
    if ( v5 != (SpatialInteractionDevices::SpatialInteractionController *)-664LL )
      ReleaseSRWLockExclusive((PSRWLOCK)v5 + 83);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x71F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)CacheEntry);
  }
  if ( v14[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v12 = v14[1];
      (**(void (__fastcall ***)(SpatialInteractionDevices::SpatialInteractionController *))v14[1])(v14[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v14[1] + 8LL))(v14[1]);
    }
  }
  return 0LL;
}
