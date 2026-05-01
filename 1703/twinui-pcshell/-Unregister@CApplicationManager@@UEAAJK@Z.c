/*
 * XREFs of ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x18000BC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::Unregister(CApplicationManager *this, unsigned int a2)
{
  return AgileRegistrationList::Unregister((CApplicationManager *)((char *)this + 192), a2);
}
