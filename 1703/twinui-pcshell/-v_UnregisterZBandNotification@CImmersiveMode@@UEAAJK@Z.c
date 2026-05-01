/*
 * XREFs of ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x180030D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x180024DF8 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CImmersiveMode::v_UnregisterZBandNotification(CImmersiveMode *this, int a2)
{
  AgileRegistrationList::Unregister((CImmersiveMode *)((char *)this + 152), a2);
  return 0LL;
}
