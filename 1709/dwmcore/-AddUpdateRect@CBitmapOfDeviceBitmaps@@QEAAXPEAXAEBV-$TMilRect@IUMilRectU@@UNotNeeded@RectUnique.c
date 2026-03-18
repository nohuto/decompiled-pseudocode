/*
 * XREFs of ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DEC4
 * Callers:
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x18007DF74 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ABDFC (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x180086B78 (-AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x18008C760 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x1801ACBE0 (-SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::AddUpdateRect(__int64 a1, int a2, const struct tagRECT *a3)
{
  __int64 v4; // rdi
  __int64 v7; // rbx
  signed int v8; // eax
  signed int valid; // eax
  char v10; // [rsp+50h] [rbp+8h] BYREF
  HGDIOBJ ho; // [rsp+60h] [rbp+18h] BYREF

  ho = 0LL;
  LODWORD(v4) = *(_DWORD *)(a1 + 336);
  v10 = 0;
  if ( !(_DWORD)v4 )
    return;
  while ( 1 )
  {
    v4 = (unsigned int)(v4 - 1);
    v7 = *(_QWORD *)(a1 + 312) + 96 * v4;
    if ( *(_DWORD *)(v7 + 8) == a2 )
      break;
    valid = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(*(_QWORD *)(a1 + 312) + 96 * v4, a3, &ho);
    if ( valid < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, valid, 0x2F6u);
      goto LABEL_8;
    }
LABEL_7:
    if ( !(_DWORD)v4 )
      goto LABEL_8;
  }
  if ( g_LockAndReadSharedSurfaceTexture )
    DebugInspectTexture(*(struct ID3D11Texture2D **)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 168LL) + 120LL), 0);
  CBitmap::AddDirtyRect((CBitmap *)(a1 + 24), a3);
  v8 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(v7, a3, &ho, &v10);
  if ( v8 >= 0 )
  {
    if ( v10 )
      goto LABEL_8;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x2EDu);
LABEL_8:
  if ( ho )
    DeleteObject(ho);
}
