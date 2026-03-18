/*
 * XREFs of KiSanitizeProfileInterval @ 0x1402055B0
 * Callers:
 *     KeSetIntervalProfile @ 0x14056DF7C (KeSetIntervalProfile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSanitizeProfileInterval(int *a1)
{
  __int64 result; // rax

  if ( (unsigned int)*a1 > *(_DWORD *)KiCacheErrataMonitor )
    *a1 = *(_DWORD *)KiCacheErrataMonitor;
  result = (unsigned int)*a1;
  KiSanitizedProfileInterval = *a1;
  return result;
}
