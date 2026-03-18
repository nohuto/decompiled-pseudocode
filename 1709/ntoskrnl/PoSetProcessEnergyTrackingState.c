/*
 * XREFs of PoSetProcessEnergyTrackingState @ 0x140595420
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopEtEnergyContextSetState @ 0x140457394 (PopEtEnergyContextSetState.c)
 */

__int64 __fastcall PoSetProcessEnergyTrackingState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  int v6; // ebx
  int v8; // ecx
  _WORD *i; // rax

  v3 = *(_QWORD *)(a1 + 1856);
  v5 = 0LL;
  if ( v3 )
  {
    if ( a2[2] || (*a2 & 0xFFFFFFEF) != 0 || (~*a2 & a2[1]) != 0 )
    {
      v6 = -1073741811;
    }
    else
    {
      if ( (a2[3] & 1) != 0 )
      {
        v8 = 0;
        for ( i = a2 + 4; *i; ++i )
        {
          if ( (unsigned int)++v8 >= 0x40 )
            return (unsigned int)-1073741811;
        }
      }
      v5 = v3;
      PopAcquireRwLockExclusive(v3 + 432);
      v6 = PopEtEnergyContextSetState(a1, a2);
      if ( v6 >= 0 )
        v6 = 0;
    }
    if ( v5 )
      PopReleaseRwLock(v5 + 432);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
