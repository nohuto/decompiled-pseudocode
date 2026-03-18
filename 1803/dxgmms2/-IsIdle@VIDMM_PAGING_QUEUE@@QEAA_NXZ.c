/*
 * XREFs of ?IsIdle@VIDMM_PAGING_QUEUE@@QEAA_NXZ @ 0x1C0053008
 * Callers:
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00732AC (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_PAGING_QUEUE::IsIdle(VIDMM_PAGING_QUEUE *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 28);
  v2 = 0;
  if ( !v1 || v1 == 2 && *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    return 1;
  return v2;
}
