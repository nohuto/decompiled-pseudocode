/*
 * XREFs of ValidateAcpiThrottleStates @ 0x1C0026254
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C001C2C4 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0008570 (WPP_RECORDER_SF_ddd.c)
 *     Validate_PCT_PTC @ 0x1C001DBC4 (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpiThrottleStates(unsigned __int8 *a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v5; // r10d
  __int64 v6; // r8
  _DWORD *v7; // rcx
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  if ( !a1 || !a2 )
    return (unsigned int)-1073741823;
  v5 = 1;
  if ( *a2 > 1 )
  {
    v6 = 0LL;
    v7 = a2 + 7;
    while ( *(v7 - 1) < a2[5 * v6 + 1] && *v7 <= a2[5 * v6 + 2] )
    {
      ++v5;
      v6 = (unsigned int)(v6 + 1);
      v7 += 5;
      if ( v5 >= *a2 )
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
  v10 = Validate_PCT_PTC(a1);
  v8 = v10;
  if ( v10 < 0 )
  {
    *a3 = 1024;
    v14 = v10;
    v13 = KeGetPcr()->Prcb.Number;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x13u,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      v13,
      v14);
  }
  return v8;
}
