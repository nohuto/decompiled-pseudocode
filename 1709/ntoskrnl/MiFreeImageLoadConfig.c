/*
 * XREFs of MiFreeImageLoadConfig @ 0x1405E056C
 * Callers:
 *     MiParseImageLoadConfig @ 0x1404F6FD8 (MiParseImageLoadConfig.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x1405946BC (MiFreeRelocations.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
