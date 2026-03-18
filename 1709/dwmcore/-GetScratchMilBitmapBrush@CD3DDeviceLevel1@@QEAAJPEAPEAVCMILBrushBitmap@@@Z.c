/*
 * XREFs of ?GetScratchMilBitmapBrush@CD3DDeviceLevel1@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x18011B4DC
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801AD898 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1801CEA80 (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetScratchMilBitmapBrush(CD3DDeviceLevel1 *this, struct CMILBrushBitmap **a2)
{
  unsigned int v2; // edi
  struct CMILFactory **v3; // rbx
  signed int v5; // eax

  v2 = 0;
  v3 = (struct CMILFactory **)((char *)this + 848);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 106) || (v5 = CMILBrushBitmap::Create(*v3, (struct IBitmapSource *)a2, v3), v2 = v5, v5 >= 0) )
  {
    if ( *v3 )
      (*(void (__fastcall **)(struct CMILFactory *))(*(_QWORD *)*v3 + 8LL))(*v3);
    *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x1B5u);
  }
  return v2;
}
