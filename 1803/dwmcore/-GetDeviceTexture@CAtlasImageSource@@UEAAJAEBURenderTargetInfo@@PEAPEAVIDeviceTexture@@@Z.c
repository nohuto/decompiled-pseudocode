/*
 * XREFs of ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180013120
 * Callers:
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 * Callees:
 *     ?GetDeviceTexture@CAtlasEntry@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x1800131D4 (-GetDeviceTexture@CAtlasEntry@@QEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z @ 0x1800132BC (-CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasImageSource::GetDeviceTexture(
        CAtlasImageSource *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CAtlasEntry *v3; // rdi
  CAtlasTexture *v5; // rcx
  int v6; // ebx
  unsigned int v8; // eax

  v3 = (CAtlasImageSource *)((char *)this + 8);
  v5 = (CAtlasTexture *)*((_QWORD *)this + 1);
  if ( !v5 )
  {
    v6 = -2003304307;
    v8 = 117;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v8);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x96u);
    return (unsigned int)v6;
  }
  v6 = CAtlasTexture::CheckSameDevice(v5, a2);
  if ( v6 < 0 )
  {
    v8 = 120;
    goto LABEL_7;
  }
  CAtlasEntry::GetDeviceTexture(v3, a3);
  return (unsigned int)v6;
}
