/*
 * XREFs of ValidateXPssPStates @ 0x1C0027148
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001C13C (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 *     ValidatePssCore @ 0x1C001DC00 (ValidatePssCore.c)
 *     ValidateMsr_PCT @ 0x1C0026BAC (ValidateMsr_PCT.c)
 */

__int64 __fastcall ValidateXPssPStates(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int16 v7; // r9
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  v5 = ValidatePssCore(a2, "XPSS");
  v6 = v5;
  if ( v5 < 0 )
  {
    *a3 |= 0x80u;
    v7 = 15;
    v10 = v5;
    Number = KeGetPcr()->Prcb.Number;
LABEL_5:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      Number,
      v10);
    return (unsigned int)v6;
  }
  v6 = ValidateMsr_PCT(a1);
  if ( v6 < 0 )
  {
    *a3 |= 0x20u;
    v7 = 16;
    v10 = v6;
    Number = KeGetPcr()->Prcb.Number;
    goto LABEL_5;
  }
  return (unsigned int)v6;
}
