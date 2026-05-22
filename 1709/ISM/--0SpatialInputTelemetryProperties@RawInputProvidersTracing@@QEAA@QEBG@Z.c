/*
 * XREFs of ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18008F488
 * Callers:
 *     ?TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXKQEBGGGG@Z @ 0x18008F660 (-TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXKQEBGGGG@Z.c)
 *     ?TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXKQEBG@Z @ 0x18008F908 (-TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXKQEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800340E8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x180073B2C (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18008CAF4 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
RawInputProvidersTracing::SpatialInputTelemetryProperties *__fastcall RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
        BYTE *this,
        unsigned __int16 *a2,
        __int64 a3)
{
  HSTRING *v4; // rdi
  HSTRING *v5; // rsi
  HSTRING *v6; // r14
  HSTRING *v7; // r15
  HSTRING *v8; // r12
  const WCHAR *v9; // rcx
  CONFIGRET Device_Interface_PropertyW; // eax
  ULONG PropertyBufferSize; // [rsp+38h] [rbp-39h] BYREF
  DEVPROPTYPE PropertyType; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v14; // [rsp+40h] [rbp-31h]
  RawInputProvidersTracing::SpatialInputTelemetryProperties *v15; // [rsp+48h] [rbp-29h]
  DEVNODE v16; // [rsp+58h] [rbp-19h] BYREF
  LPCWSTR pszDeviceInterface[2]; // [rsp+60h] [rbp-11h] BYREF
  __m128i si128; // [rsp+70h] [rbp-1h]
  int v19; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v14 = -2LL;
  v15 = (RawInputProvidersTracing::SpatialInputTelemetryProperties *)this;
  v4 = (HSTRING *)(this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v5 = (HSTRING *)(this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v6 = (HSTRING *)(this + 40);
  *((_QWORD *)this + 5) = 0LL;
  v7 = (HSTRING *)(this + 48);
  *((_QWORD *)this + 6) = 0LL;
  v8 = (HSTRING *)(this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = a2;
  v16 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(pszDeviceInterface[0]) = 0;
  std::wstring::assign(pszDeviceInterface, a2, a3);
  v19 = 0;
  if ( (DevicePropertyHelpers::DevicePropertyHelper::Initialize(&v16) & 0x80000000) == 0 )
  {
    PropertyBufferSize = 16;
    if ( v16 )
    {
      v9 = (const WCHAR *)pszDeviceInterface;
      if ( si128.m128i_i64[1] >= 8uLL )
        v9 = pszDeviceInterface[0];
      Device_Interface_PropertyW = CM_Get_Device_Interface_PropertyW(
                                     v9,
                                     &DEVPKEY_DeviceInterface_ClassGuid,
                                     &PropertyType,
                                     this + 16,
                                     &PropertyBufferSize,
                                     0);
      if ( Device_Interface_PropertyW )
        CM_MapCrToWin32Err(Device_Interface_PropertyW, 0x507u);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
        (const char *)0x8007139FLL);
    }
    WindowsDeleteString(*v4);
    *v4 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&v16, &DEVPKEY_NAME, v4);
    WindowsDeleteString(*v5);
    *v5 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&v16, &DEVPKEY_Device_Manufacturer, v5);
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&v16, &DEVPKEY_Device_Model, v6);
    WindowsDeleteString(*v7);
    *v7 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      &v16,
      &DEVPKEY_Device_FirmwareVersion,
      v7);
    WindowsDeleteString(*v8);
    *v8 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&v16, &DEVPKEY_Device_DriverVersion, v8);
  }
  std::wstring::_Tidy_deallocate((unsigned __int64 *)pszDeviceInterface);
  return (RawInputProvidersTracing::SpatialInputTelemetryProperties *)this;
}
