/*
 * XREFs of PopUserPresentOverride @ 0x1406D47FC
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x14041FF90 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140420088 (PopAcquireAdaptiveLock.c)
 *     PopEvaluateGlobalUserStatus @ 0x1404206BC (PopEvaluateGlobalUserStatus.c)
 */

__int64 __fastcall PopUserPresentOverride(char a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  PopAcquireAdaptiveLock(1);
  v2 = 0;
  if ( a1 )
  {
    v3 = PopUserPresentOverrideCount + 1;
  }
  else
  {
    if ( !PopUserPresentOverrideCount )
    {
      v2 = -1073741811;
      goto LABEL_11;
    }
    v3 = PopUserPresentOverrideCount - 1;
  }
  PopUserPresentOverrideCount = v3;
  if ( v3 == 1 && a1 || !v3 && !a1 )
    PopEvaluateGlobalUserStatus();
LABEL_11:
  PopReleaseAdaptiveLock();
  return v2;
}
