/*
 * XREFs of ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008EE80
 * Callers:
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceTexture@CAtlasEntry@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18008B93C (-GetDeviceTexture@CAtlasEntry@@QEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z @ 0x18008BA24 (-CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z.c)
 */

__int64 __fastcall CAtlasImageSource::GetDeviceTexture(
        CAtlasImageSource *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CAtlasEntry *v3; // rdi
  CAtlasTexture *v5; // rcx
  signed int v6; // eax
  DWORD v7; // ebx

  v3 = (CAtlasImageSource *)((char *)this + 8);
  v5 = (CAtlasTexture *)*((_QWORD *)this + 1);
  if ( !v5 )
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8898008D, 0x75u);
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x8Cu);
    return v7;
  }
  v6 = CAtlasTexture::CheckSameDevice(v5, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x78u);
    goto LABEL_7;
  }
  CAtlasEntry::GetDeviceTexture(v3, a3);
  return v7;
}
