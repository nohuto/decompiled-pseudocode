/*
 * XREFs of ?Pending@CFlipManagerToken@@UEAAXXZ @ 0x1C004B180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::Pending(CFlipManagerToken *this)
{
  *((_DWORD *)this + 6) = 1;
  (***((void (__fastcall ****)(_QWORD))this + 7))(*((_QWORD *)this + 7));
}
