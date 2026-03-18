/*
 * XREFs of PopNetConnectivityInStandbyCallback @ 0x1406559B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetConnectivityInStandbyCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  if ( a3 == 4 && (unsigned int)*a2 <= 2 )
  {
    v4 = 0;
    PopAcquirePolicyLock();
    dword_1403AAA78 = *a2;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
