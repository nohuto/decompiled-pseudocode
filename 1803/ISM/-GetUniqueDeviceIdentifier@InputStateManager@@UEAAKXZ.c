/*
 * XREFs of ?GetUniqueDeviceIdentifier@InputStateManager@@UEAAKXZ @ 0x180006D20
 * Callers:
 *     ?GetUniqueDeviceIdentifier@InputStateManager@@W7EAAKXZ @ 0x180007640 (-GetUniqueDeviceIdentifier@InputStateManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::GetUniqueDeviceIdentifier(InputStateManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2070);
}
