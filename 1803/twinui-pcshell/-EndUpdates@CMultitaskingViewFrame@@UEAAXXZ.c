/*
 * XREFs of ?EndUpdates@CMultitaskingViewFrame@@UEAAXXZ @ 0x180281F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::EndUpdates(CMultitaskingViewFrame *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 315) + 64LL))(*((_QWORD *)this + 315));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 307) + 32LL))(*((_QWORD *)this + 307), 0LL);
}
