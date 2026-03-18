/*
 * XREFs of ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0028808
 * Callers:
 *     VidSchiSetPriorityContext @ 0x1C0012174 (VidSchiSetPriorityContext.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUpdateReadyBitsInNewPriority(struct _VIDSCH_NODE *a1, struct _VIDSCH_CONTEXT *a2)
{
  __int64 v2; // r10
  unsigned int v4; // ecx
  __int64 v6; // rdx
  __int64 v7; // r9

  v2 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a2 + 101);
  if ( *((struct _VIDSCH_NODE **)a1 + 2 * v4 + 251) == (struct _VIDSCH_NODE *)((char *)a1 + 16 * v4 + 2008) )
  {
    *((_DWORD *)a1 + 434) |= 1 << v4;
    v6 = *(_QWORD *)(v2 + 424);
    v7 = 1LL << *((_BYTE *)a1 + 4);
    if ( (v6 & v7) == 0 && (~((1 << *((_DWORD *)a2 + 101)) - 1) & *((_DWORD *)a1 + 435)) == 0 && !*((_DWORD *)a1 + 709) )
      *(_QWORD *)(v2 + 424) = v7 | v6;
  }
}
