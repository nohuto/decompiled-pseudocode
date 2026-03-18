/*
 * XREFs of ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x180055460
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x180055B10 (-ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18007DF6C (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(CGdiSpriteBitmap *this)
{
  struct IBitmapSource **v1; // rbp
  unsigned int v3; // edi
  unsigned __int8 PixelFormatSize; // al
  int v5; // r8d
  __int64 v6; // r9
  unsigned int v7; // r14d
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // r13d
  unsigned int v12; // eax
  bool v13; // sf
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned int v16; // r14d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // esi
  unsigned int v20; // edx
  enum DXGI_FORMAT v21; // ecx
  unsigned int RequiredBufferSize; // eax
  int BitmapFromMemory; // eax
  WICRect v25; // [rsp+40h] [rbp-28h] BYREF

  v1 = (struct IBitmapSource **)((char *)this + 80);
  v3 = 0;
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  if ( !*((_QWORD *)this + 43) )
    goto LABEL_13;
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 30));
  v7 = *((_DWORD *)this + 82);
  v8 = *((_DWORD *)this + 83);
  v9 = *((_DWORD *)this + 34);
  v11 = *((_DWORD *)this + 84) * v5 + v10 * (PixelFormatSize >> 3);
  v12 = v6;
  v13 = v10 + v9 < 0;
  v14 = v10 + v9;
  *((_DWORD *)this + 85) = v11;
  if ( !v13 )
    v12 = v14;
  v15 = *((_DWORD *)this + 36);
  if ( v7 < v12 )
    v12 = v7;
  v16 = v7 - v12;
  v17 = v6;
  v13 = v5 + v15 < 0;
  v18 = v5 + v15;
  *((_DWORD *)this + 18) = v16;
  if ( !v13 )
    v17 = v18;
  if ( v8 < v17 )
    v17 = v8;
  v19 = v8 - v17;
  *((_DWORD *)this + 19) = v19;
  if ( !v16 )
    goto LABEL_13;
  if ( !v19 )
    goto LABEL_13;
  v20 = *((_DWORD *)this + 84);
  v21 = *((_DWORD *)this + 30);
  *(_QWORD *)&v25.X = v6;
  v25.Width = v16;
  v25.Height = v19;
  RequiredBufferSize = GetRequiredBufferSize(v21, v20, &v25);
  BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                       v16,
                       v19,
                       (CGdiSpriteBitmap *)((char *)this + 120),
                       *((_DWORD *)this + 84),
                       RequiredBufferSize,
                       (unsigned __int8 *)(*((_QWORD *)this + 44) + v11),
                       0LL,
                       v1);
  v3 = BitmapFromMemory;
  if ( BitmapFromMemory < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromMemory, 0x1ECu);
  else
LABEL_13:
    CResource::NotifyOnChanged((_DWORD *)this + 4, 0LL, 0LL);
  return v3;
}
