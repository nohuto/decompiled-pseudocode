/*
 * XREFs of ValidateAcpiThrottleStates @ 0x1C0027C98
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0026A7C (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0001E8C (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00098F8 (WPP_RECORDER_SF_ddd.c)
 *     Validate_PCT_PTC @ 0x1C0027A64 (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpiThrottleStates(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    return (unsigned int)-1073741823;
  v6 = 1LL;
  if ( *a2 > 1u )
  {
    v7 = 0LL;
    v8 = a2 + 7;
    while ( *(v8 - 1) < a2[5 * v7 + 1] && *v8 <= a2[5 * v7 + 2] )
    {
      v6 = (unsigned int)(v6 + 1);
      v7 = (unsigned int)(v7 + 1);
      v8 += 5;
      if ( (unsigned int)v6 >= *a2 )
        goto LABEL_8;
    }
    *a3 = 2048;
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, v6, 0x11u, v11);
    return (unsigned int)-1073741823;
  }
LABEL_8:
  if ( a2[1] != 100 )
  {
    *a3 = 2048;
    Number = KeGetPcr()->Prcb.Number;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x12u,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      Number);
    return (unsigned int)-1073741823;
  }
  v9 = Validate_PCT_PTC(a1);
  v5 = v9;
  if ( v9 < 0 )
  {
    *a3 = 1024;
    v14 = v9;
    v13 = KeGetPcr()->Prcb.Number;
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x13u,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      v13,
      v14);
  }
  return v5;
}
