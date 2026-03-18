/*
 * XREFs of McTemplateU0qz @ 0x1801B8D7C
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8790 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B97A0 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0qz(__int64 a1, __int64 a2, int a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+20h] [rbp-48h] BYREF
  int *v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  const wchar_t *v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  v9 = 4LL;
  v8 = &v13;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v11 = v5;
  v12 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v10 = a4;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SWAPCHAIN_BUFFERS, 3u, &v7);
}
