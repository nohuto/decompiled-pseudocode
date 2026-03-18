/*
 * XREFs of ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800C978C
 * Callers:
 *     ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x1800C9750 (--_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z.c)
 *     ?Release@CHwBrushPoolManager@@QEAAXXZ @ 0x1800C97D8 (-Release@CHwBrushPoolManager@@QEAAXXZ.c)
 * Callees:
 *     ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x1800C97B4 (-ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBrushPoolManager::ReleaseUnusedBrushes(CHwBrushPoolManager *this)
{
  __int64 v2; // rax
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
