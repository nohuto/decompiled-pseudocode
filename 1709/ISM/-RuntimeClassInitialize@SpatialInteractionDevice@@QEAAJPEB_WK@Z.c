/*
 * XREFs of ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z @ 0x1800749CC
 * Callers:
 *     ?EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAV23@@Z @ 0x1800C6CFC (-EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?TelemetrySpatialInteractionDeviceOpened_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKPEB_WPEAX@Z @ 0x180073F10 (-TelemetrySpatialInteractionDeviceOpened_@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18007595C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?AddSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180076804 (-AddSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV-$ba.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18007819C (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x180078E8C (-SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z.c)
 *     ??$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAEW4_HIDP_REPORT_TYPE@@@Z @ 0x18007A24C (--$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x18007BFEC (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevice::RuntimeClassInitialize(
        SpatialInteractionDevice *this,
        wchar_t *a2,
        struct SpatialInteractionDevices::HID_HANDLE **a3)
{
  SpatialInteractionDevices **v5; // r12
  HRESULT String; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdi
  unsigned __int16 *v10; // r9
  SpatialInteractionDevices *v11; // rdi
  unsigned __int8 v12; // bp
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rsi
  int updated; // eax
  int v17; // eax
  unsigned __int8 v18; // al
  void *v19; // rbx
  _DWORD *v20; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v21; // rcx
  ULONG v22; // [rsp+20h] [rbp-88h]
  int v23; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-74h]
  __int64 v25; // [rsp+38h] [rbp-70h]
  unsigned __int64 Src[4]; // [rsp+40h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v25 = -2LL;
  v24 = (unsigned int)a3;
  v5 = (SpatialInteractionDevices **)((char *)this + 88);
  String = SpatialInteractionDevices::Internal::HIDOpen(
             (SpatialInteractionDevices::Internal *)a2,
             (const wchar_t *)this + 44,
             a3);
  if ( String < 0 )
  {
    v7 = 272LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  WindowsDeleteString(*((HSTRING *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  String = WindowsCreateString(a2, v9, (HSTRING *)this + 10);
  if ( String < 0 )
  {
    v7 = 273LL;
    goto LABEL_3;
  }
  String = SpatialInteractionDevices::SupportsContinousBuzz(
             *v5,
             (SpatialInteractionDevice *)((char *)this + 100),
             (bool *)this + 96,
             v10);
  if ( String < 0 )
  {
    v7 = 275LL;
    goto LABEL_3;
  }
  v11 = *v5;
  if ( !*v5 )
  {
    String = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x320,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)0x80070057LL);
LABEL_25:
    v7 = 278LL;
    goto LABEL_3;
  }
  v12 = 0;
  LOBYTE(v23) = 0;
  v13 = 0LL;
  v14 = *((_DWORD *)v11 + 56);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = *((_QWORD *)v11 + 27) + 72LL * (unsigned int)v13;
      if ( *(_WORD *)v15 == 14 && !*(_BYTE *)(v15 + 12) && *(_WORD *)(v15 + 56) == 40 )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= v14 )
        goto LABEL_23;
    }
    LOBYTE(v13) = *(_BYTE *)(v15 + 2);
    updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded(v11, v13);
    String = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x32B,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_24;
    }
    v17 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned char>(
            (int)v11,
            (int)v11 + 320,
            v15,
            (int)&v23,
            v22);
    String = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x32C,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)(unsigned int)v17);
      v12 = v23;
      goto LABEL_24;
    }
    v12 = v23;
  }
LABEL_23:
  String = 0;
LABEL_24:
  if ( String < 0 )
    goto LABEL_25;
  v18 = v12;
  if ( v12 > 0x3Cu )
    v18 = 60;
  *((_WORD *)this + 49) = 1000 * v18;
  v19 = (void *)*((_QWORD *)*v5 + 1);
  v20 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v20 )
  {
    if ( *v20 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::TelemetrySpatialInteractionDeviceOpened_(v21, v24, a2, v19);
    }
  }
  std::wstring::wstring(Src, a2);
  Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDevice(Src);
  std::wstring::_Tidy_deallocate(Src);
  return 0LL;
}
