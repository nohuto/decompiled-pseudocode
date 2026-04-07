/*
 * XREFs of ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18006FE64
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800701C0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__ea_1800701C0.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180048AA8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18006FA04 (--$ActivateInstance@V-$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@W.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180070208 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CAnalogCompositorManager::OnHolographicDisplayCalibrationDriverDetected(CAnalogCompositorManager *this)
{
  __int64 *v1; // rbx
  int v2; // eax
  int v3; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v5 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Graphics.Holographic.Internal.HolographicDisplayMonitorManager",
      0x47u,
      0x46u);
    v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayMonitorManager>>(
           v5,
           v1);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x75,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v2,
        (int)hstringHeader.Reserved.Reserved1);
      __debugbreak();
    }
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 48LL))(*v1);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x76,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v3,
        (int)hstringHeader.Reserved.Reserved1);
      __debugbreak();
    }
  }
}
