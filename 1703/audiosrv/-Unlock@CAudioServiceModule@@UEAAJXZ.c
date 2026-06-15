/*
 * XREFs of ?Unlock@CAudioServiceModule@@UEAAJXZ @ 0x18002F980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioServiceModule::Unlock(CAudioServiceModule *this)
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 3);
}
