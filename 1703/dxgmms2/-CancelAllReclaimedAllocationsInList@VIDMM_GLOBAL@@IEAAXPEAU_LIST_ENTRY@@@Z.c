/*
 * XREFs of ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0092670
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A2E00 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(
        VIDMM_GLOBAL *this,
        struct _LIST_ENTRY *a2,
        unsigned __int8 a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rdx
  struct _LIST_ENTRY *v8; // rcx

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    p_Blink = &Flink[-21].Blink;
    Flink = Flink->Flink;
    VIDMM_SEGMENT::ReAllocateOldResource((VIDMM_SEGMENT *)p_Blink[17], (struct _VIDMM_GLOBAL_ALLOC *)p_Blink, a3);
    v6 = (struct _LIST_ENTRY *)(p_Blink + 41);
    v7 = p_Blink[41];
    v8 = p_Blink[42];
    if ( (struct _LIST_ENTRY **)v7->Blink != p_Blink + 41 || v8->Flink != v6 )
      __fastfail(3u);
    v8->Flink = v7;
    v7->Blink = v8;
    v6->Flink = 0LL;
    p_Blink[42] = 0LL;
  }
}
