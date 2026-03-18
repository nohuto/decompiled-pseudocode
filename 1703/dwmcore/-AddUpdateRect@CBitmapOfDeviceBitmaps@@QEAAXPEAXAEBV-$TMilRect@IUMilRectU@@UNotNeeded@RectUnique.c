/*
 * XREFs of ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2510
 * Callers:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2260 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800B25D8 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 * Callees:
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180056130 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x180056AA0 (-AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x180135DC4 (-SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::AddUpdateRect(__int64 a1, int a2, const RECT *a3)
{
  __int64 v4; // rdi
  __int64 v7; // rbx
  int v8; // eax
  int valid; // eax
  char v10; // [rsp+50h] [rbp+8h] BYREF
  HGDIOBJ ho; // [rsp+60h] [rbp+18h] BYREF

  ho = 0LL;
  LODWORD(v4) = *(_DWORD *)(a1 + 288);
  v10 = 0;
  if ( !(_DWORD)v4 )
    return;
  while ( 1 )
  {
    v4 = (unsigned int)(v4 - 1);
    v7 = *(_QWORD *)(a1 + 264) + 96 * v4;
    if ( *(_DWORD *)(v7 + 8) == a2 )
      break;
    valid = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(*(_QWORD *)(a1 + 264) + 96 * v4, a3, &ho);
    if ( valid < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, valid, 0x339u);
      goto LABEL_8;
    }
LABEL_7:
    if ( !(_DWORD)v4 )
      goto LABEL_8;
  }
  if ( g_LockAndReadSharedSurfaceTexture )
    CD3DDeviceLevel1::ReadTexture(
      *(CD3DDeviceLevel1 **)(*(_QWORD *)(v7 + 16) + 16LL),
      *(struct ID3D11Texture2D **)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 160LL) + 128LL));
  CBitmap::AddDirtyRect((CBitmap *)(a1 + 24), a3);
  v8 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(v7, a3, (HRGN *)&ho, &v10);
  if ( v8 >= 0 )
  {
    if ( v10 )
      goto LABEL_8;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x330u);
LABEL_8:
  if ( ho )
    DeleteObject(ho);
}
