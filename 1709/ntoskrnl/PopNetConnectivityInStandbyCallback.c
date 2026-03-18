/*
 * XREFs of PopNetConnectivityInStandbyCallback @ 0x1405F29D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetConnectivityInStandbyCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  if ( a3 == 4 && (unsigned int)*a2 <= 2 )
  {
    v4 = 0;
    PopAcquirePolicyLock();
    dword_1403661F8 = *a2;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
