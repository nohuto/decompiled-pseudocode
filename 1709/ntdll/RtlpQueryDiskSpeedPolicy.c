/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x180088C08
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 *     RtlRunOnceExecuteOnce @ 0x1800367D0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlpQueryDiskSpeedPolicy(_DWORD *a1, __int64 a2)
{
  if ( BYTE1(RtlpUserPolicies) )
  {
    *a1 = BYTE1(RtlpUserPolicies);
  }
  else if ( (RtlGetSuiteMask((__int64)a1, a2) & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(
      &RtlpDiskSpeedInit,
      (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpDiskSpeedInitialize,
      0LL,
      0LL);
    *a1 = RtlpDiskSpeedPolicy;
  }
  return 0LL;
}
