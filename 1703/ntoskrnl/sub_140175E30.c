/*
 * XREFs of sub_140175E30 @ 0x140175E30
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x140033E40 (MmFreePagesFromMdl.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmUnmapReservedMapping @ 0x14020FA40 (MmUnmapReservedMapping.c)
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 */

void __fastcall sub_140175E30(void *a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rdi
  void *v4; // rsi

  v2 = (void *)*((_QWORD *)a1 + 1);
  v3 = *(struct _MDL **)a1;
  v4 = (void *)*((_QWORD *)a1 + 3);
  if ( v2 )
    MmUnmapReservedMapping(v2, *((_DWORD *)a1 + 4), v3);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePool(v3);
  }
  memset(a1, 0, 0x20uLL);
  ExFreePool(v4);
}
