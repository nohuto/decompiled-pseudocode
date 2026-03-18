/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x1405D5A10
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopEsWorkItemSchedule @ 0x140582B1C (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  char v5; // di

  v3 = 0;
  if ( a2 && a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    if ( *a2 != 1 || byte_14034BB74 )
    {
      if ( !*a2 && byte_14034BB74 )
      {
        v5 = 1;
        byte_14034BB74 = 0;
      }
    }
    else
    {
      v5 = 1;
      byte_14034BB74 = 1;
    }
    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    if ( v5 )
      PopEsWorkItemSchedule(4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
