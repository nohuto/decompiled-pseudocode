/*
 * XREFs of ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180044878
 * Callers:
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800430D0 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A10FC (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x1800448BC (-HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18004497C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall HrCheckBufferSize(enum DXGI_FORMAT a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12[6]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0;
  PixelFormatSize = GetPixelFormatSize(a1);
  v9 = HrCalcRequiredBufferSizeWorker(PixelFormatSize, v6, v7, v8, v12);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x399u);
  }
  else if ( v12[0] > a5 )
  {
    v10 = -2003292276;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292276, 0x39Du);
  }
  return v10;
}
