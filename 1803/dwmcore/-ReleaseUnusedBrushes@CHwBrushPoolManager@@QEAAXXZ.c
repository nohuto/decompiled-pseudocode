/*
 * XREFs of ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800D998C
 * Callers:
 *     ?Release@CHwBrushPoolManager@@QEAAXXZ @ 0x1800D99DC (-Release@CHwBrushPoolManager@@QEAAXXZ.c)
 *     ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x1800D9A30 (--_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z.c)
 *     ??_GCHwBrushPoolManager@@MEAAPEAXI@Z @ 0x1801F6AF0 (--_GCHwBrushPoolManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x1800D99B8 (-ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBrushPoolManager::ReleaseUnusedBrushes(CHwBrushPoolManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx

  CHwBrushPoolManager::ConsolidateUnusedLists(this);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    do
    {
      v3 = *(_QWORD *)(v2 + 48);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 8) + 16LL))(v2 + 8, 1LL);
      *((_QWORD *)this + 7) = v3;
      v2 = v3;
    }
    while ( v3 );
    *((_QWORD *)this + 8) = 0LL;
    *((_DWORD *)this + 12) = 0;
  }
}
