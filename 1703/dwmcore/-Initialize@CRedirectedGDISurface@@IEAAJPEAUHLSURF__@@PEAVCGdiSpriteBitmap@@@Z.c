/*
 * XREFs of ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800B0B38
 * Callers:
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800B0840 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 */

__int64 __fastcall CRedirectedGDISurface::Initialize(
        CRedirectedGDISurface *this,
        HLSURF a2,
        struct CGdiSpriteBitmap *a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  _QWORD *inserted; // rax
  __int64 v8; // rcx
  signed int LastError; // eax
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int NewElement; // [rsp+60h] [rbp+10h] BYREF

  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = a3;
  v4 = *((_QWORD *)this + 2);
  v5 = 0;
  Buffer[0] = a2;
  Buffer[2] = a3;
  LOBYTE(NewElement) = 0;
  Buffer[1] = this;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(v4 + 8), Buffer, 0x18u, (PBOOLEAN)&NewElement);
  if ( inserted )
  {
    if ( !(_BYTE)NewElement )
    {
      inserted[2] = a3;
      inserted[1] = this;
    }
    NewElement = 0;
    *((_BYTE *)this + 40) = 1;
    SetLastError(0);
    if ( (unsigned int)DwmHLSurfOpenCompositorRef(*((_QWORD *)this + 3)) )
    {
      *((_BYTE *)this + 41) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xx(
          v8,
          &EVTDESC_PROCESS_GDISPRITE_LOGICALSURFACE_ASSOCIATION,
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 3));
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v5 = LastError;
      NewElement = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x4Cu);
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
    NewElement = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x48u);
  }
  TranslateDXGIorD3DErrorInContext(v5, 11, &NewElement);
  return NewElement;
}
