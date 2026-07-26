/*
 * XREFs of ndisOidPostStatistics @ 0x1C000DA80
 * Callers:
 *     <none>
 * Callees:
 *     ndisSSUpdateOidCacheValue @ 0x1C007152C (ndisSSUpdateOidCacheValue.c)
 */

__int64 __fastcall ndisOidPostStatistics(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = a1[4];
    if ( (*(_DWORD *)(result + 4) & 0xFFFFFFFD) == 0 )
    {
      if ( *(_QWORD *)(*a1 + 4480LL) )
        return ndisSSUpdateOidCacheValue();
    }
  }
  return result;
}
