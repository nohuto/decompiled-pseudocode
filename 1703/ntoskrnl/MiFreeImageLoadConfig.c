/*
 * XREFs of MiFreeImageLoadConfig @ 0x14058207C
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiParseImageLoadConfig @ 0x140497854 (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x140581FD0 (MiFreeRelocations.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
