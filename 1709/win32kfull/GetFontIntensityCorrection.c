/*
 * XREFs of GetFontIntensityCorrection @ 0x1C0253E1C
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFontIntensityCorrection(_BYTE *a1, int a2)
{
  int v2; // r8d
  unsigned int v4; // r10d
  unsigned __int8 *i; // rcx

  v2 = 0;
  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 0LL;
  for ( i = a1 + 4; *i != a2; i += 80 )
  {
    if ( ++v2 >= v4 )
      return 0LL;
  }
  return (__int64)&a1[80 * v2 + 4];
}
