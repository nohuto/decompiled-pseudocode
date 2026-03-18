/*
 * XREFs of HvlpSendSyntheticClusterIpi @ 0x14015A06C
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x14015A040 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvlpSendSyntheticClusterIpi(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rcx
  char *i; // rdx
  unsigned __int64 v5; // r8

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0LL;
  if ( !HvlpVirtualProcessorsIdentityMapped )
  {
    for ( i = byte_140450301; ; i += 4 )
    {
      if ( (v1 & 1) != 0 )
        v2 |= 1LL << *i;
      v5 = v1 >> 1;
      if ( !v5 )
        break;
      if ( (v5 & 1) != 0 )
        v2 |= 1LL << i[2];
      v1 = v5 >> 1;
      if ( !v1 )
        break;
    }
  }
  return (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
}
