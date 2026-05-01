/*
 * XREFs of ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x18027EAE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x18028C9E0 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 */

void __fastcall CAltTabViewController::InvokeSwitchItem(CAltTabViewController *this, struct ISwitchItem *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15));
  CMultitaskingViewControllerBase::InvokeSwitchItem(this, a2);
  ViewHostTelemetry::SendAppSwitchTelemetry(a2, 1LL);
}
