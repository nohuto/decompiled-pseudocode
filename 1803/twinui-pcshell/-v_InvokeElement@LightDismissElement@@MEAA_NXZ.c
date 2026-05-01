/*
 * XREFs of ?v_InvokeElement@LightDismissElement@@MEAA_NXZ @ 0x1802A3AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall LightDismissElement::v_InvokeElement(LightDismissElement *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 32LL))(*((_QWORD *)this + 29));
  return 1;
}
