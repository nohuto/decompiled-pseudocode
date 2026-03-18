/*
 * XREFs of VerifierEngCreateDeviceSurface @ 0x1C0279D70
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02799F0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HSURF __fastcall VerifierEngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDeviceSurface(dhsurf, sizl, iFormatCompat);
}
