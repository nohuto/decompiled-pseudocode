/*
 * XREFs of Validate_PCT_PTC @ 0x1C0027A64
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C0027B04 (ValidateAcpi2PStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C0027C98 (ValidateAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0001E8C (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall Validate_PCT_PTC(unsigned __int8 *a1)
{
  unsigned int v1; // ebx
  unsigned __int8 v2; // al
  int v3; // edx

  v1 = -1073741637;
  if ( !*((_QWORD *)a1 + 2) || (v2 = a1[12], *a1 == v2) )
  {
    v3 = *a1;
    if ( v3 == 1 || v3 == 127 )
      return 0;
    else
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xBu,
        (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
        v3);
  }
  else
  {
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      *a1,
      v2);
  }
  return v1;
}
