/*
 * XREFs of ?GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ @ 0x1C0013300
 * Callers:
 *     ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z @ 0x1C0063F64 (-GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

struct VIDMM_PARTITION *VIDMM_PARTITION::GetCurrent(void)
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  v0 = 0LL;
  if ( ((__int64 (*)(void))DxgCoreInterface[6])()
    && (v1 = *(_QWORD *)(((__int64 (*)(void))DxgCoreInterface[6])() + 64)) != 0 )
  {
    v2 = *(_QWORD *)(v1 + 8);
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
    return *(struct VIDMM_PARTITION **)(v2 + 168);
  return (struct VIDMM_PARTITION *)v0;
}
