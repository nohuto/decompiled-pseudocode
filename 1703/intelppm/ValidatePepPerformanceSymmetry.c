/*
 * XREFs of ValidatePepPerformanceSymmetry @ 0x1C0026DA8
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C001AF0C (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dds @ 0x1C000888C (WPP_RECORDER_SF_dds.c)
 */

__int64 __fastcall ValidatePepPerformanceSymmetry(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rsi
  char v8; // r12
  int v12; // [rsp+28h] [rbp-69h]
  int v13; // [rsp+48h] [rbp-49h]
  const char *v14; // [rsp+50h] [rbp-41h] BYREF
  int v15; // [rsp+58h] [rbp-39h]
  const char *v16; // [rsp+60h] [rbp-31h]
  int v17; // [rsp+68h] [rbp-29h]
  const char *v18; // [rsp+70h] [rbp-21h]
  int v19; // [rsp+78h] [rbp-19h]
  const char *v20; // [rsp+80h] [rbp-11h]
  int v21; // [rsp+88h] [rbp-9h]
  const char *v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+98h] [rbp+7h]
  const char *v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A8h] [rbp+17h]
  const char *v26; // [rsp+B0h] [rbp+1Fh]

  v15 = 4;
  v14 = "HighestPerformance";
  v4 = (__int64 *)&v14;
  v17 = 8;
  v16 = "NominalPerformance";
  v5 = 0;
  v13 = 0;
  v18 = "LowestNonlinearPerformance";
  v19 = 12;
  v20 = "LowestPerformance";
  v7 = 7LL;
  v21 = 16;
  v22 = "NominalFrequency";
  v8 = a3;
  v23 = 32;
  v24 = "FrequencyCounterIndex";
  v25 = 36;
  v26 = "PerformanceCounterIndex";
  do
  {
    if ( *(_DWORD *)(*((unsigned int *)v4 - 2) + a2) != *(_DWORD *)(*((unsigned int *)v4 - 2) + a4) )
    {
      v5 = -1073741823;
      WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x43u, v12, a1, v8, *v4);
    }
    v4 += 2;
    --v7;
  }
  while ( v7 );
  return v5;
}
