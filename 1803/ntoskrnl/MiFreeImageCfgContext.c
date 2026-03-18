/*
 * XREFs of MiFreeImageCfgContext @ 0x14009D5A4
 * Callers:
 *     MiParseImageLoadConfig @ 0x14053D084 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x14053D860 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageCfgContext(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
