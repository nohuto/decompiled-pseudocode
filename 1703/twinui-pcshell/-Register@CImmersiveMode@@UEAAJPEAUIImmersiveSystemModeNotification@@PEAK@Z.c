/*
 * XREFs of ?Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z @ 0x180030D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::Register(CImmersiveMode *this, struct IUnknown *a2, unsigned int *a3)
{
  return AgileRegistrationList::Register((CImmersiveMode *)((char *)this + 120), a2, a3);
}
