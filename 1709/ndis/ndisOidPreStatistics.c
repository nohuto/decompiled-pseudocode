/*
 * XREFs of ndisOidPreStatistics @ 0x1C00BA390
 * Callers:
 *     <none>
 * Callees:
 *     ndisSSGetCachedOidValue @ 0x1C00F2B5C (ndisSSGetCachedOidValue.c)
 */

char __fastcall ndisOidPreStatistics(__int64 *a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // r9

  v2 = 0;
  v3 = *a1;
  if ( (*(_DWORD *)(a1[4] + 4) & 0xFFFFFFFD) != 0 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else if ( v3 && *(_QWORD *)(v3 + 4480) )
  {
    return ndisSSGetCachedOidValue(a1, a2, 0LL);
  }
  return v2;
}
