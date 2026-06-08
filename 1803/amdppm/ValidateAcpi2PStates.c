/*
 * XREFs of ValidateAcpi2PStates @ 0x1C002E570
 * Callers:
 *     InitAcpiPerfStates @ 0x1C002064C (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0001470 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     Validate_PCT_PTC @ 0x1C002E4D0 (Validate_PCT_PTC.c)
 *     ValidatePssCore @ 0x1C002ECF8 (ValidatePssCore.c)
 */

__int64 __fastcall ValidateAcpi2PStates(unsigned __int8 *a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  int v7; // ebx
  unsigned __int16 v8; // r9
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v6 = ValidatePssCore(a2, "_PSS");
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = Validate_PCT_PTC(a1);
    if ( v7 >= 0 )
    {
      if ( !qword_1C0011560 )
        return 0;
      v7 = qword_1C0011560(a1, a2, a3);
      if ( v7 >= 0 )
        return 0;
      v8 = 14;
    }
    else
    {
      *a3 |= 0x20u;
      v8 = 13;
    }
    v11 = v7;
    Number = KeGetPcr()->Prcb.Number;
  }
  else
  {
    *a3 |= 0x40u;
    v8 = 12;
    v11 = v6;
    Number = KeGetPcr()->Prcb.Number;
  }
  WPP_RECORDER_SF_DD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v8,
    (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
    Number,
    v11);
  return (unsigned int)v7;
}
