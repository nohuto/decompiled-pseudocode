/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x18015AA4C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18016FEBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_CREATE *a3)
{
  int updated; // eax
  unsigned int v6; // ebx

  *((_QWORD *)this + 44) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((enum DXGI_FORMAT *)a3 + 5));
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x57u);
  }
  else
  {
    *((_DWORD *)this + 90) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 91) = *((_DWORD *)a3 + 7);
    if ( *((_DWORD *)a3 + 4) <= 6u )
    {
      *((_OWORD *)this + 25) = *((_OWORD *)a3 + 1);
      *((_OWORD *)this + 26) = *((_OWORD *)a3 + 2);
      *((_OWORD *)this + 27) = *((_OWORD *)a3 + 3);
      *((_OWORD *)this + 28) = *((_OWORD *)a3 + 4);
      *((_OWORD *)this + 29) = *((_OWORD *)a3 + 5);
      *((_OWORD *)this + 30) = *((_OWORD *)a3 + 6);
      *((_OWORD *)this + 31) = *((_OWORD *)a3 + 7);
      *((_OWORD *)this + 32) = *((_OWORD *)a3 + 8);
      *((_OWORD *)this + 33) = *((_OWORD *)a3 + 9);
      *((_OWORD *)this + 34) = *((_OWORD *)a3 + 10);
      *((_OWORD *)this + 35) = *((_OWORD *)a3 + 11);
      *((_OWORD *)this + 36) = *((_OWORD *)a3 + 12);
      *((_OWORD *)this + 37) = *((_OWORD *)a3 + 13);
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5Eu);
    }
  }
  return v6;
}
