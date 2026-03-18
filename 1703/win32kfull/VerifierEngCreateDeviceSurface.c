/*
 * XREFs of VerifierEngCreateDeviceSurface @ 0x1C027D390
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C027D004 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HSURF __fastcall VerifierEngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDeviceSurface(dhsurf, sizl, iFormatCompat);
}
