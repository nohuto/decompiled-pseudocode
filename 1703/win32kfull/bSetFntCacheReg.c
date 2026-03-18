/*
 * XREFs of bSetFntCacheReg @ 0x1C00084C4
 * Callers:
 *     bServicingStackModifiedFonts @ 0x1C0008470 (bServicingStackModifiedFonts.c)
 *     CloseFNTCache @ 0x1C000A6DC (CloseFNTCache.c)
 *     InitFNTCache @ 0x1C000F2D0 (InitFNTCache.c)
 *     EngFntCacheFault @ 0x1C0269950 (EngFntCacheFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, int a2)
{
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  if ( a1 >= 3 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(&g_fntCacheRegistryPaths)[a1]);
  return ZwSetValueKey(ghkeyGreInitialize, &DestinationString, 0, 4u, &Data, 4u) >= 0;
}
