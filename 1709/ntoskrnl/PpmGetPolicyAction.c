/*
 * XREFs of PpmGetPolicyAction @ 0x1405E1004
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404DEB98 (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14070664C (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmGetPolicyAction(__int64 *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( (*a1 & 0x3C000000700LL) != 0 )
  {
    if ( (result & 0x4000000000LL) != 0 )
    {
      *a2 |= 0x20u;
      if ( PpmPerfEppViaPerfControl )
        *a2 |= 2u;
    }
    if ( (result & 0x100) != 0 )
      *a2 |= 0x400u;
    if ( (result & 0x400) != 0 )
      *a2 |= 0x80u;
    if ( (result & 0x200) != 0 )
      *a2 |= 0x40u;
    if ( (result & 0x10000000000LL) != 0 )
      *a2 |= 0x102u;
    if ( (result & 0x8000000000LL) != 0 )
    {
      *a2 |= 0x200u;
      if ( PpmPerfAutonomousActivityWindowViaPerfControl )
        *a2 |= 2u;
    }
    if ( (result & 0x20000000000LL) != 0 )
      *a2 |= 0x800u;
  }
  if ( (result & 0x50000000EC0LL) != 0 )
    *a2 |= 2u;
  if ( (result & 0x180000000000LL) != 0 )
    *a2 |= 0x2000u;
  if ( (result & 0x30000) != 0 )
    *a2 |= 0xCu;
  if ( (result & 0x40000030DC0LL) != 0 )
    *a2 |= 8u;
  if ( (result & 0xD8000000) != 0 )
    *a2 |= 1u;
  if ( (result & 0x1000) != 0 )
    *a2 |= 0x10u;
  return result;
}
