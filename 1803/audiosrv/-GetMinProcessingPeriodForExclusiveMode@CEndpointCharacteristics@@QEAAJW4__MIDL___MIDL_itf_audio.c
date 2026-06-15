/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180095CF4
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x1800BC0B8 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        __int64 *a5)
{
  __int64 *v5; // rbx
  __int64 v7; // rax
  struct _GUID v9; // [rsp+50h] [rbp-18h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  v5 = a5;
  *a5 = 30000LL;
  v9 = *a4;
  if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
              (__int64)this,
              0,
              &a3->wFormatTag,
              &v9,
              0,
              0LL,
              0LL,
              &v10,
              0LL) >= 0 )
  {
    v7 = (unsigned int)(int)((double)(int)v10 * 10000000.0 / (double)(int)a3->nSamplesPerSec + 0.5);
    if ( v7 >= *v5 )
      v7 = *v5;
    *v5 = v7;
  }
  return 0LL;
}
