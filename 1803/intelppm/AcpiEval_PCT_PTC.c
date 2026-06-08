/*
 * XREFs of AcpiEval_PCT_PTC @ 0x1C00228B4
 * Callers:
 *     InitAcpiPerfStates @ 0x1C0021124 (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C00215F0 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000374C (WPP_RECORDER_SF_s.c)
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     AcpiEvaluateMethod @ 0x1C001E240 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C00225A4 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C0022A14 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiEval_PCT_PTC(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // eax
  int v6; // eax
  PVOID v7; // rsi
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v12; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 v15[2]; // [rsp+58h] [rbp-21h] BYREF
  int v16; // [rsp+5Ah] [rbp-1Fh]
  const char *v17; // [rsp+60h] [rbp-19h]
  __int64 (__fastcall *v18)(__int64, __int64, unsigned int); // [rsp+68h] [rbp-11h]
  char v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+72h] [rbp-7h]
  const char *v21; // [rsp+78h] [rbp-1h]
  __int64 (__fastcall *v22)(__int64, __int64, unsigned int); // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh] BYREF
  char v24; // [rsp+8Ch] [rbp+13h]

  v12 = a2;
  v15[0] = 0;
  v17 = "Control";
  v19 = 1;
  v18 = AcpiParseRegister;
  v21 = "Status";
  v22 = AcpiParseRegister;
  v4 = 32;
  v16 = 2;
  v20 = 786434;
  if ( a2 != 1413697631 )
    v4 = 1024;
  v23 = a2;
  v24 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1076), v4);
  v6 = AcpiEvaluateMethod(a1, v12, 0LL, (unsigned int **)&P, &v13);
  v7 = P;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( v13 )
    {
      v8 = AcpiParseCore(v15, 2LL, (unsigned __int64)P + 12, *((_DWORD *)P + 1) - 12, a3, 24, (const char *)&v23, 0);
      if ( v8 < 0 )
      {
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x13u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          (const char *)&v23);
      }
      else
      {
        AcpiTranslateAccessSize(a3, v9);
        AcpiTranslateAccessSize(a3 + 12, v10);
      }
    }
    else
    {
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x12u,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
        (const char *)&v12);
      v8 = -1073741275;
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 < 0 )
  {
    if ( v12 == 1413697631 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x20u);
    else
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x400u);
  }
  return (unsigned int)v8;
}
