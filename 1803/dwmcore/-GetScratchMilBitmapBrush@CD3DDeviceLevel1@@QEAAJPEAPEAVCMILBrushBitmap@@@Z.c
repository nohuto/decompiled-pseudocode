/*
 * XREFs of ?GetScratchMilBitmapBrush@CD3DDeviceLevel1@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x18013DE30
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x18001DAD4 (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetScratchMilBitmapBrush(CD3DDeviceLevel1 *this, struct CMILBrushBitmap **a2)
{
  unsigned int v2; // ebx
  struct CMILBrushBitmap **v3; // rsi
  CMILBrushBitmap *v4; // rdi
  CMILBrushBitmap *v6; // rax
  struct CMILFactory *v7; // rdx
  CMILBrushBitmap *v8; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (struct CMILBrushBitmap **)((char *)this + 848);
  v4 = (CMILBrushBitmap *)*((_QWORD *)this + 106);
  *a2 = 0LL;
  if ( v4 )
    goto LABEL_7;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 106);
  v6 = (CMILBrushBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x108uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v8 = CMILBrushBitmap::CMILBrushBitmap(v6, v7);
  v4 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v4 + 24) = 0LL;
    *v3 = v4;
LABEL_7:
    (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = *v3;
    return v2;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x203u);
  return v2;
}
