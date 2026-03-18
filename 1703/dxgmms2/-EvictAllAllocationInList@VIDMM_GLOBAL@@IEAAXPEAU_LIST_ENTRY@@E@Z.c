/*
 * XREFs of ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C005B53C
 * Callers:
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00593BC (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006DE3C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllAllocationInList(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *i; // rbx
  char *p_Blink; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  int v11; // [rsp+20h] [rbp-28h]

  for ( i = a2->Flink; i != a2; *((_QWORD *)p_Blink + 42) = 0LL )
  {
    p_Blink = (char *)&i[-21].Blink;
    Flink = i[-12].Flink;
    i = i->Flink;
    LOBYTE(a3) = 1;
    LOBYTE(v11) = 0;
    ((void (__fastcall *)(struct _LIST_ENTRY *, char *, __int64, _QWORD, int, _QWORD))Flink->Flink[3].Flink)(
      Flink,
      p_Blink,
      a3,
      0LL,
      v11,
      0LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p(v7, &EventEvictAllocation, a3, p_Blink);
    v8 = p_Blink + 328;
    v9 = *((_QWORD *)p_Blink + 41);
    v10 = (_QWORD *)*((_QWORD *)p_Blink + 42);
    if ( *(char **)(v9 + 8) != p_Blink + 328 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
  }
}
