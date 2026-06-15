/*
 * XREFs of ?wil_HasFeatureVariantTestState@@YAHIPEAEPEAI@Z @ 0x1800B39B4
 * Callers:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x18005F120 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x1800B39FC (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

__int64 __fastcall wil_HasFeatureVariantTestState(__int64 a1, unsigned __int8 *a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned __int8 v6; // cl
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  LODWORD(result) = wil_details_HasTestState(a1, 1LL, v7);
  v6 = 0;
  if ( (_DWORD)result )
    v6 = v7[12];
  *a2 = v6;
  result = (unsigned int)result;
  *a3 = (_DWORD)result != 0 ? v8 : 0;
  return result;
}
