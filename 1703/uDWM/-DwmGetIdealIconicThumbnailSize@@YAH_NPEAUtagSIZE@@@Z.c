/*
 * XREFs of ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003E4F0
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800154B8 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003D6A8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180079D88 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmGetIdealIconicThumbnailSize(char a1, struct tagSIZE *a2)
{
  unsigned int v4; // ebx
  int DpiForSystem; // eax
  int v6; // esi
  LONG v7; // eax
  int v8; // r9d
  int v9; // edx
  int v10; // r10d
  int v11; // eax
  LONG v13; // eax
  LONG cy; // ecx
  int pvParam; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+24h] [rbp-24h]
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+2Ch] [rbp-1Ch]

  v4 = 0;
  DpiForSystem = GetDpiForSystem();
  a2->cy = 200;
  a2->cx = 200;
  v6 = DpiForSystem;
  v7 = MulDiv(200, DpiForSystem, 96);
  a2->cx = v7;
  a2->cy = v7;
  if ( SystemParametersInfoW(0x30u, 0, &pvParam, 0) )
  {
    v8 = v18 - v16;
    v9 = v18 - v16;
    if ( v18 - v16 < 0 )
      v9 = 0;
    v10 = v17 - pvParam;
    v11 = v17 - pvParam;
    if ( v17 - pvParam < 0 )
      v11 = 0;
    if ( v9 * a2->cx >= v11 * a2->cy )
    {
      if ( v8 < 0 )
        v8 = 0;
      if ( v10 < 0 )
        v10 = 0;
      a2->cx = MulDiv(v10, a2->cy, v8);
    }
    else
    {
      if ( v10 < 0 )
        v10 = 0;
      if ( v8 < 0 )
        v8 = 0;
      a2->cy = MulDiv(v8, a2->cx, v10);
    }
    if ( !a1 )
    {
      v13 = MulDiv(a2->cx, 96, v6);
      cy = a2->cy;
      a2->cx = v13;
      a2->cy = MulDiv(cy, 96, v6);
    }
    return 1;
  }
  return v4;
}
