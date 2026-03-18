/*
 * XREFs of ?CleanupReferences@CHwLinearGradientBrush@@UEAAXXZ @ 0x1801BC2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwLinearGradientBrush::CleanupReferences(CHwLinearGradientBrush *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
}
