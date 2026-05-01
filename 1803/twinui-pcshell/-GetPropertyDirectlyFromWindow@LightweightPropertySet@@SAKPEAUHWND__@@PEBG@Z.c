/*
 * XREFs of ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x1801E21C4
 * Callers:
 *     _lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_::operator() @ 0x1801C8DDC (_lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_--operator().c)
 *     ?s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z @ 0x1801D0FB0 (-s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z @ 0x1801E2268 (-s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z.c)
 */

HANDLE __fastcall LightweightPropertySet::GetPropertyDirectlyFromWindow(
        HWND hWnd,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  WCHAR String[256]; // [rsp+20h] [rbp-218h] BYREF

  LightweightPropertySet::s_MangleName(L"ExperienceId", String, a3);
  return GetPropW(hWnd, String);
}
