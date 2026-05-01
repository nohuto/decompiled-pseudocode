/*
 * XREFs of _lambda_7be2482a1588a72f98f99377279f86d4_::operator() @ 0x1801F07D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7be2482a1588a72f98f99377279f86d4___::Run @ 0x1801F3200 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7be2482a1588a72f98f99377279f86d4___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092A88 (--4-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7be2482a1588a72f98f99377279f86d4_::operator()(unsigned int *a1)
{
  HRESULT v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+58h] [rbp+10h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &ppv);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2210LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(ppv, a1[6], 0x80000000LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2210LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=((__int64 *)(*(_QWORD *)a1 + 280LL), (__int64 *)&ppv);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppv);
  return 0LL;
}
