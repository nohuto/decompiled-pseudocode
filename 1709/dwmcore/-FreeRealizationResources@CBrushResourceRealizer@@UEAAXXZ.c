/*
 * XREFs of ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18007B970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushResourceRealizer::FreeRealizationResources(CBrushResourceRealizer *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 200LL))(*((_QWORD *)this + 12));
}
