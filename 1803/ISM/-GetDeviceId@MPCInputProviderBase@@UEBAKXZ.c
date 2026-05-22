/*
 * XREFs of ?GetDeviceId@MPCInputProviderBase@@UEBAKXZ @ 0x180044B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputProviderBase::GetDeviceId(MPCInputProviderBase *this)
{
  return **((unsigned int **)this + 3);
}
