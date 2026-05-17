/*
 * XREFs of sub_180073B48 @ 0x180073B48
 * Callers:
 *     RtlAcquireResourceShared @ 0x1800738A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180073980 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x180073A90 (RtlReleaseResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180073B48(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // r8d
  int v3; // eax

  v1 = *a1;
  if ( *(int *)a1 > 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange(a1, v1 - 1, v1);
      if ( v1 == v3 )
        break;
      v1 = v3;
    }
    while ( v3 > 0 );
  }
  return v1;
}
