/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802FBA28
 * Callers:
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x18024B890 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x18024CF10 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 *     ?Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z @ 0x18030B990 (-Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1801F9368 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1802660CC (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1802FBAF4 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 */

void __fastcall GetDesktopUniqueName(const wchar_t *a1, wchar_t *a2, unsigned int a3)
{
  size_t v3; // rbp
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // [rsp+28h] [rbp-290h]
  ULONG ReturnLength; // [rsp+30h] [rbp-288h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+38h] [rbp-280h] BYREF
  __int64 v11; // [rsp+40h] [rbp-278h]
  wchar_t v12[264]; // [rsp+70h] [rbp-248h] BYREF

  v3 = a3;
  v12[0] = 0;
  if ( NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasicInformation,
         ProcessInformation,
         0x30u,
         &ReturnLength) )
  {
    v7 = -1;
  }
  else
  {
    v7 = *(_DWORD *)(v11 + 704);
  }
  if ( v7 == -1 || !(unsigned int)GetThreadDesktopName(v12, v6) )
  {
    StringCchCopyW(a2, v3, a1);
  }
  else
  {
    v8 = v7;
    StringCchPrintfW(a2, v3, (wchar_t *)L"%s%s%d", a1, v12, v8);
  }
}
