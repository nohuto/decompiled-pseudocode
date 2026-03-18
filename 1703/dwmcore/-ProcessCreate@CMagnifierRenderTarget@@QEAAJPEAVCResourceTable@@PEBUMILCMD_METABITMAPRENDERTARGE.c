/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x18014885C
 * Callers:
 *     ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x180130E94 (-MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180148D20 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET_CREATE *a3)
{
  int updated; // eax
  unsigned int v6; // ebx
  bool v7; // cc

  *((_QWORD *)this + 37) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((enum DXGI_FORMAT *)a3 + 5));
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x247u);
  }
  else
  {
    v7 = *((_DWORD *)this + 86) <= 6u;
    *((_DWORD *)this + 76) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 77) = *((_DWORD *)a3 + 7);
    if ( v7 )
    {
      *(_OWORD *)((char *)this + 344) = *((_OWORD *)a3 + 1);
      *(_OWORD *)((char *)this + 360) = *((_OWORD *)a3 + 2);
      *(_OWORD *)((char *)this + 376) = *((_OWORD *)a3 + 3);
      *(_OWORD *)((char *)this + 392) = *((_OWORD *)a3 + 4);
      *(_OWORD *)((char *)this + 408) = *((_OWORD *)a3 + 5);
      *(_OWORD *)((char *)this + 424) = *((_OWORD *)a3 + 6);
      *(_OWORD *)((char *)this + 440) = *((_OWORD *)a3 + 7);
      *(_OWORD *)((char *)this + 456) = *((_OWORD *)a3 + 8);
      *(_OWORD *)((char *)this + 472) = *((_OWORD *)a3 + 9);
      *(_OWORD *)((char *)this + 488) = *((_OWORD *)a3 + 10);
      *(_OWORD *)((char *)this + 504) = *((_OWORD *)a3 + 11);
      *(_OWORD *)((char *)this + 520) = *((_OWORD *)a3 + 12);
      *(_OWORD *)((char *)this + 536) = *((_OWORD *)a3 + 13);
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x24Eu);
    }
  }
  return v6;
}
