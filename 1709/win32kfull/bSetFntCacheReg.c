/*
 * XREFs of bSetFntCacheReg @ 0x1C00BF290
 * Callers:
 *     bServicingStackModifiedFonts @ 0x1C00BF23C (bServicingStackModifiedFonts.c)
 *     EngCloseFNTCache @ 0x1C00BFD94 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C00C0ED0 (InitFNTCache.c)
 *     EngFntCacheFault @ 0x1C02686B0 (EngFntCacheFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, int a2)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  if ( a1 >= 3 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(&g_fntCacheRegistryPaths)[a1]);
  return ZwSetValueKey(ghkeyGreInitialize, &DestinationString, 0, 4u, &Data, 4u) >= 0;
}
