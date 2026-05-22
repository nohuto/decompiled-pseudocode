/*
 * XREFs of ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180071130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x18006F420 (-FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18006FD8C (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     GetHolographicInputSession @ 0x180070758 (GetHolographicInputSession.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x18007124C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x18007197C (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnDeviceAttach(
        SpatialRimDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  const struct TraceSessionConfig *HolographicInputSession; // rax
  int v7; // ebp
  _DWORD *v8; // rcx
  RawInputProvidersTracing *v9; // rcx
  int v11; // eax
  unsigned __int64 v12[6]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v13[7]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v14[24]; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v12);
  v7 = TracingSessionHelper::StartOrStop(HolographicInputSession, 1);
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>(v14);
  std::wstring::_Tidy_deallocate(v13);
  std::wstring::_Tidy_deallocate(v12);
  if ( v7 < 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v8 )
    {
      if ( *v8 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::FailedToStartTracingSession_(v9, v7);
      }
    }
  }
  if ( a3 )
  {
    if ( (int)HIDDeviceCollection::OnDeviceAttach(this, a2, a3) >= 0 )
    {
      v11 = SpatialRimDeviceCollection::DoDeviceAttach(this, a2, *a3);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x143,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v11);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
