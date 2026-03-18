/*
 * XREFs of MiFreeImageCfgContext @ 0x140061888
 * Callers:
 *     MiParseImageLoadConfig @ 0x140497854 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x140497C20 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
