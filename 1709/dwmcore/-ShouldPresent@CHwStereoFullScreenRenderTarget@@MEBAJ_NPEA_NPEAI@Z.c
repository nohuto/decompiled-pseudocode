/*
 * XREFs of ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x1801B8380
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18002B960 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::ShouldPresent(
        CHwStereoFullScreenRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  signed int ShouldPresent; // eax
  unsigned int v8; // ebx

  ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(this, a2, a3, a4);
  v8 = ShouldPresent;
  if ( ShouldPresent < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShouldPresent, 0x1B2u);
  }
  else if ( *((_BYTE *)this + 593) )
  {
    if ( *a3 )
    {
      *a4 |= 0x20u;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_TEMPORARYMONOEVENT,
          *((_QWORD *)this + 75));
    }
  }
  return v8;
}
