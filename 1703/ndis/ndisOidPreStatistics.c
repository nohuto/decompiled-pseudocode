/*
 * XREFs of ndisOidPreStatistics @ 0x1C00A5540
 * Callers:
 *     <none>
 * Callees:
 *     ndisSSGetCachedOidValue @ 0x1C00E95F0 (ndisSSGetCachedOidValue.c)
 */

char __fastcall ndisOidPreStatistics(__int64 *a1)
{
  char v1; // dl
  __int64 v2; // r8

  v1 = 0;
  v2 = *a1;
  if ( (*(_DWORD *)(a1[4] + 4) & 0xFFFFFFFD) != 0 )
  {
    v1 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else if ( v2 && *(_QWORD *)(v2 + 4480) )
  {
    return ndisSSGetCachedOidValue(a1, 0LL);
  }
  return v1;
}
