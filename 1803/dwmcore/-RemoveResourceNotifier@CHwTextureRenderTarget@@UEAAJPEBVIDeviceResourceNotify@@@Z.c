/*
 * XREFs of ?RemoveResourceNotifier@CHwTextureRenderTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800782B0
 * Callers:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008A0FC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800219D0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::RemoveResourceNotifier(
        CHwTextureRenderTarget *this,
        const struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = *((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 )
  {
    v4 = CD3DResource::RemoveResourceNotifier((CD3DResource *)(v2 + 24), a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x361u);
  }
  return v3;
}
