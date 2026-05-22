/*
 * XREFs of ?IsRequestingPrimary@MPCInputProviderBase@@UEAA_NXZ @ 0x18005FE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::IsRequestingPrimary(MPCInputProviderBase *this)
{
  return *((_BYTE *)this + 360);
}
