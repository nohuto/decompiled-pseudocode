/*
 * XREFs of ?Complete@CFlipManagerToken@@UEAAXXZ @ 0x1C004B0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::Complete(CFlipManagerToken *this)
{
  *((_DWORD *)this + 6) = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
  *((_QWORD *)this + 7) = 0LL;
}
