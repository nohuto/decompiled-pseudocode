/*
 * XREFs of PopCapturePlatformRole @ 0x140523884
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopInitializeDirectedDrips @ 0x1408A9118 (PopInitializeDirectedDrips.c)
 * Callees:
 *     <none>
 */

__int64 PopCapturePlatformRole()
{
  __int64 result; // rax
  int v1; // ecx
  unsigned __int32 v2; // ecx

  result = (unsigned int)PopPlatformRole;
  v1 = 0;
  if ( !PopPlatformRole )
  {
    LOBYTE(v1) = dword_1403AA270 != 0;
    v2 = v1 + 1;
    result = (unsigned int)_InterlockedCompareExchange(&PopPlatformRole, v2, 0);
    if ( !(_DWORD)result )
      return v2;
  }
  return result;
}
