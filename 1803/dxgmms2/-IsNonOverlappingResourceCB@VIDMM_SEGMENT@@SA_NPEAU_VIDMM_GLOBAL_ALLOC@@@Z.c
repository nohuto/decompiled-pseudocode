/*
 * XREFs of ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2BA0
 * Callers:
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B2D80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_SEGMENT::IsNonOverlappingResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  char *v2; // r8
  char *v3; // rcx
  char *v4; // rax
  int *v5; // r9
  int *v6; // rdx
  int *v7; // rax

  if ( *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 63) + 16LL) + 8LL) > 0 )
    return 1;
  v2 = (char *)a1 + 296;
  v3 = (char *)*((_QWORD *)a1 + 37);
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = *(char **)v3;
    v5 = (int *)(v4 - 16);
    v6 = (int *)*((_QWORD *)v4 - 2);
    while ( v6 != v5 )
    {
      v7 = v6;
      v6 = *(int **)v6;
      if ( v7[16] > 0 )
        return 1;
    }
  }
  return 0;
}
