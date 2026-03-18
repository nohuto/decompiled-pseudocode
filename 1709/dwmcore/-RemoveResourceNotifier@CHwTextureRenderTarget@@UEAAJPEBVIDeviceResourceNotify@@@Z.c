/*
 * XREFs of ?RemoveResourceNotifier@CHwTextureRenderTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18008FA80
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180046CB0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008B158 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180092890 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::RemoveResourceNotifier(
        CHwTextureRenderTarget *this,
        const struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  signed int v4; // eax

  v2 = *((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 )
  {
    v4 = CD3DResource::RemoveResourceNotifier((CD3DResource *)(v2 + 24), a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x36Cu);
  }
  return v3;
}
