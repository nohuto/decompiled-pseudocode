/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180079CD0
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18009C564 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        __int64 *a5)
{
  __int64 *v5; // rbx
  __int64 v7; // rcx
  double v8; // xmm1_8
  struct _GUID v10; // [rsp+50h] [rbp-18h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v5 = a5;
  *a5 = 30000LL;
  v10 = *a4;
  if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
              (__int64)this,
              0,
              &a3->wFormatTag,
              &v10,
              0,
              0LL,
              0LL,
              &v11,
              0LL) >= 0 )
  {
    v7 = *v5;
    v8 = (double)(int)v11 * 10000000.0 / (double)(int)a3->nSamplesPerSec + 0.5;
    if ( (unsigned int)(int)v8 < *v5 )
      v7 = (unsigned int)(int)v8;
    *v5 = v7;
  }
  return 0LL;
}
