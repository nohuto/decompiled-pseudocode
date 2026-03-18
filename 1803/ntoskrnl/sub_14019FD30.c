/*
 * XREFs of sub_14019FD30 @ 0x14019FD30
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapReservedMapping @ 0x140001420 (MmUnmapReservedMapping.c)
 *     MmFreePagesFromMdl @ 0x1400CEF30 (MmFreePagesFromMdl.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePool @ 0x1402EA010 (ExFreePool.c)
 */

void __fastcall sub_14019FD30(void *a1)
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
