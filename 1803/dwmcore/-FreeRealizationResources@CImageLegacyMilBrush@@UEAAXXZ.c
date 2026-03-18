/*
 * XREFs of ?FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ @ 0x1801B29F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImageLegacyMilBrush::FreeRealizationResources(CImageLegacyMilBrush *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 94) )
  {
    v2 = *((_QWORD *)this + 38);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 38) = 0LL;
    if ( (*((_DWORD *)this + 56))++ == -1 )
      ++*((_DWORD *)this + 56);
  }
}
