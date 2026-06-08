/*
 * XREFs of AcpiEval_PCT_PTC @ 0x1C001D890
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001C13C (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C001C600 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002830 (WPP_RECORDER_SF_s.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x1C001CF10 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C001D9FC (AcpiTranslateAccessSize.c)
 *     AcpiEvaluateMethod @ 0x1C001DA64 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PCT_PTC(__int64 a1, int a2, __int64 a3)
{
  int v5; // eax
  PVOID v6; // rsi
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  char v11[8]; // [rsp+40h] [rbp-39h] BYREF
  int v12; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 v14[2]; // [rsp+58h] [rbp-21h] BYREF
  int v15; // [rsp+5Ah] [rbp-1Fh]
  const char *v16; // [rsp+60h] [rbp-19h]
  __int64 (__fastcall *v17)(__int64, __int64, unsigned int); // [rsp+68h] [rbp-11h]
  char v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+72h] [rbp-7h]
  const char *v20; // [rsp+78h] [rbp-1h]
  __int64 (__fastcall *v21)(__int64, __int64, unsigned int); // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh] BYREF
  char v23; // [rsp+8Ch] [rbp+13h]

  *(_DWORD *)v11 = a2;
  v14[0] = 0;
  v16 = "Control";
  v18 = 1;
  v17 = AcpiParseRegister;
  v15 = 2;
  v19 = 786434;
  v20 = "Status";
  v21 = AcpiParseRegister;
  v22 = a2;
  v23 = 0;
  P = 0LL;
  if ( a2 == 1413697631 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x20u);
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x400u);
  v5 = AcpiEvaluateMethod(a1, *(_DWORD *)v11, 0, (unsigned int)&P, (__int64)&v12);
  v6 = P;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( v12 )
    {
      v7 = AcpiParseCore(v14, 2LL, (unsigned __int64)P + 12, *((_DWORD *)P + 1) - 12, a3, 24, (const char *)&v22, 0);
      if ( v7 < 0 )
      {
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x13u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          (const char *)&v22);
      }
      else
      {
        AcpiTranslateAccessSize(a3, v8);
        AcpiTranslateAccessSize(a3 + 12, v9);
      }
    }
    else
    {
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x12u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
        v11);
      v7 = -1073741275;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 < 0 )
  {
    if ( *(_DWORD *)v11 == 1413697631 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x20u);
    else
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x400u);
  }
  return (unsigned int)v7;
}
