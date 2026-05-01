/*
 * XREFs of ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x1801AF41C
 * Callers:
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1801AFED0 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HolographicApps::IsAppAllowedToBeResized(HolographicApps *this, const unsigned __int16 *a2)
{
  wchar_t **v3; // rbx

  v3 = &off_18042FE20;
  while ( (unsigned int)_o__wcsicmp(this, *v3) )
  {
    if ( ++v3 == (wchar_t **)&unk_18042FE28 )
      return 0;
  }
  return 1;
}
