/*
 * XREFs of ?ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z @ 0x180147720
 * Callers:
 *     <none>
 * Callees:
 *     ?OnViewPropertiesChanging@SingleViewShellExperienceEventHandler@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800079A0 (-OnViewPropertiesChanging@SingleViewShellExperienceEventHandler@@UEAAJPEAVCSingleViewShellExperi.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180147350 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1801474C4 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn wil::details::ThrowPlatformException(
        wil::details *this,
        const struct wil::FailureInfo *a2,
        const wchar_t *a3)
{
  const wchar_t *v4; // rdx
  HSTRING v5; // rcx
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  HSTRING v7; // [rsp+50h] [rbp+18h]
  __int64 Exception; // [rsp+58h] [rbp+20h]

  v7 = (HSTRING)SingleViewShellExperienceEventHandler::OnViewPropertiesChanging(this, a2);
  v7 = Platform::String::String(v5, v4);
  Exception = Platform::Exception::CreateException(*((unsigned int *)this + 1), v7);
  pExceptionObject = __abi_winrt_ptr_ctor(Exception);
  throw (Platform::Exception **)&pExceptionObject;
}
