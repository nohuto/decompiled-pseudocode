/*
 * XREFs of ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x180156930
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x180182D58 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessSetTransform@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETTRANSFORM@@@Z @ 0x180182F20 (-ProcessSetTransform@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_S.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x180182FF8 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  int v4; // eax
  unsigned int v5; // edi

  v4 = CResource::RegisterNotifier((CResource *)this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB9u);
  }
  else
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, this[23]);
    this[23] = a2;
  }
  return v5;
}
