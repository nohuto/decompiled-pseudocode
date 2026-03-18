/*
 * XREFs of ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x180085BF4
 * Callers:
 *     ?Release@CHwBrushPoolManager@@QEAAXXZ @ 0x180085C40 (-Release@CHwBrushPoolManager@@QEAAXXZ.c)
 *     ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x1800861D0 (--_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x180085C1C (-ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBrushPoolManager::ReleaseUnusedBrushes(CHwBrushPoolManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi

  CHwBrushPoolManager::ConsolidateUnusedLists(this);
  if ( *((_QWORD *)this + 7) )
  {
    do
    {
      v2 = *((_QWORD *)this + 7);
      v3 = *(_QWORD *)(v2 + 48);
      if ( v2 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 8) + 16LL))(v2 + 8, 1LL);
      *((_QWORD *)this + 7) = v3;
    }
    while ( v3 );
    *((_QWORD *)this + 8) = 0LL;
    *((_DWORD *)this + 12) = 0;
  }
}
