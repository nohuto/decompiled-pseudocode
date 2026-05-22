/*
 * XREFs of _lambda_c90380767cc5ac01c309f72366d316c3_::operator() @ 0x18009537C
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     wil::details::lambda_call__lambda_c90380767cc5ac01c309f72366d316c3___::_lambda_call__lambda_c90380767cc5ac01c309f72366d316c3___ @ 0x180096380 (wil--details--lambda_call__lambda_c90380767cc5ac01c309f72366d316c3___--_lambda_call__lambda_c903.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?Stop@OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z @ 0x18008EC20 (-Stop@OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z.c)
 *     ?SpatialGraphDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z @ 0x18008F14C (-SpatialGraphDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z.c)
 *     ?HolographicDisplayDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z @ 0x18008F1F4 (-HolographicDisplayDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z.c)
 *     ?StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXW4StopTrackingReason@12@@Z @ 0x1800C6690 (-StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXW4StopTrackingReason@.c)
 */

void __fastcall lambda_c90380767cc5ac01c309f72366d316c3_::operator()(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 *i; // rax
  const unsigned __int16 *v7; // rbx
  const unsigned __int16 *StringRawBuffer; // rdi
  HSTRING v9; // rcx
  HSTRING v10; // rcx
  const unsigned __int16 *v11; // rax
  _DWORD *v12; // rcx
  RawInputProvidersTracing *v13; // rcx
  _DWORD *v14; // rcx
  RawInputProvidersTracing *v15; // rcx

  if ( **(_BYTE **)a1 )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 2816LL);
    EnterCriticalSection(v2);
    v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 2856LL);
    v4 = (__int64 *)*v3;
    while ( v4 != v3 )
    {
      SpatialInteractionDevices::SpatialInteractionController::StopTracking(v4[5], 1LL);
      if ( !*((_BYTE *)v4 + 25) )
      {
        v5 = (__int64 *)v4[2];
        if ( *((_BYTE *)v5 + 25) )
        {
          for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v4 = i;
          v4 = i;
        }
        else
        {
          do
          {
            v4 = v5;
            v5 = (__int64 *)*v5;
          }
          while ( !*((_BYTE *)v5 + 25) );
        }
      }
    }
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  v7 = L"UndefinedDeviceInterfacePath";
  StringRawBuffer = L"UndefinedDeviceInterfacePath";
  v9 = **(HSTRING **)(a1 + 16);
  if ( v9 )
    StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
  v10 = *(HSTRING *)(*(_QWORD *)(a1 + 8) + 2928LL);
  if ( v10 )
    v7 = WindowsGetStringRawBuffer(v10, 0LL);
  v11 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 40), 0LL);
  RawInputProvidersTracing::OnHolographicDisplayChanged::Stop(
    *(RawInputProvidersTracing::OnHolographicDisplayChanged **)(a1 + 24),
    **(_DWORD **)(a1 + 32),
    v11,
    **(_BYTE **)(a1 + 48),
    **(_BYTE **)(a1 + 56));
  v12 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v12 && *v12 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::HolographicDisplayDriver_(v13, StringRawBuffer);
  }
  v14 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v14 )
  {
    if ( *v14 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::SpatialGraphDriver_(v15, v7);
    }
  }
}
