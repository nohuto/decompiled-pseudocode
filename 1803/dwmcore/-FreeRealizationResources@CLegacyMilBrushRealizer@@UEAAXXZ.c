/*
 * XREFs of ?FreeRealizationResources@CLegacyMilBrushRealizer@@UEAAXXZ @ 0x1801AE340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrushRealizer::FreeRealizationResources(CLegacyMilBrushRealizer *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
}
