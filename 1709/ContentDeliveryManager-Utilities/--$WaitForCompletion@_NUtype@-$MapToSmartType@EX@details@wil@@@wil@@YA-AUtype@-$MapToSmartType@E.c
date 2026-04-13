/*
 * XREFs of ??$WaitForCompletion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004B48C
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180048B08 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180079A48 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18001C7B8 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::WaitForCompletion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(
        void (__fastcall ***a1)(__int64, GUID *, __int64 *),
        DWORD a2,
        int a3)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(a1, a2, a3);
  if ( v4 < 0
    || (v4 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), DWORD *))(*a1)[8])(a1, &v7),
        v4 < 0) )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x638,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18004B4DDLL);
  }
  return v7;
}
