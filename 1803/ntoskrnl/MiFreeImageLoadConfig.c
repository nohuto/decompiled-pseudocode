/*
 * XREFs of MiFreeImageLoadConfig @ 0x1405F0A68
 * Callers:
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiParseImageLoadConfig @ 0x14053D084 (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x1405F09CC (MiFreeRelocations.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageLoadConfig(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
