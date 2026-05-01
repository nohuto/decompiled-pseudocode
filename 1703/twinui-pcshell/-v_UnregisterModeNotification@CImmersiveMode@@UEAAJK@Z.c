/*
 * XREFs of ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x180030D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x180024DF8 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CImmersiveMode::v_UnregisterModeNotification(CImmersiveMode *this, int a2)
{
  AgileRegistrationList::Unregister((CImmersiveMode *)((char *)this + 120), a2);
  return 0LL;
}
