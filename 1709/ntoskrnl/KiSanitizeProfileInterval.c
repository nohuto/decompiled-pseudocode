/*
 * XREFs of KiSanitizeProfileInterval @ 0x14020B750
 * Callers:
 *     KeSetIntervalProfile @ 0x1406D8798 (KeSetIntervalProfile.c)
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
