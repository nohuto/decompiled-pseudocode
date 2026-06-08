/*
 * XREFs of ValidateAcpi2PStates @ 0x1C001C6C4
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001C13C (InitAcpiPerfStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 *     Validate_PCT_PTC @ 0x1C001DBC4 (Validate_PCT_PTC.c)
 *     ValidatePssCore @ 0x1C001DC00 (ValidatePssCore.c)
 */

__int64 __fastcall ValidateAcpi2PStates(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  int v7; // ebx
  unsigned __int16 v9; // r9
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v6 = ValidatePssCore(a2, "_PSS");
  v7 = v6;
  if ( v6 < 0 )
  {
    *a3 |= 0x40u;
    v9 = 12;
    v11 = v6;
    Number = KeGetPcr()->Prcb.Number;
LABEL_10:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v9,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      Number,
      v11);
    return (unsigned int)v7;
  }
  v7 = Validate_PCT_PTC(a1);
  if ( v7 < 0 )
  {
    *a3 |= 0x20u;
    v9 = 13;
LABEL_9:
    v11 = v7;
    Number = KeGetPcr()->Prcb.Number;
    goto LABEL_10;
  }
  if ( qword_1C0015EE0 )
  {
    v7 = qword_1C0015EE0(a1, a2, a3);
    if ( v7 < 0 )
    {
      v9 = 14;
      goto LABEL_9;
    }
  }
  return 0;
}
