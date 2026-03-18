/*
 * XREFs of ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::IsDisplayingResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  return *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 63) + 16LL) + 8LL) > 0;
}
