/*
 * XREFs of ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x1C004B0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::Discard(CFlipManagerToken *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_DWORD *)this + 6) = 6;
}
