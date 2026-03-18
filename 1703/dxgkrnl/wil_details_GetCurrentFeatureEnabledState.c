/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C00125A0
 * Callers:
 *     ?Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled@@YAHXZ @ 0x1C0011AA0 (-Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     wil_details_StagingConfig_Load @ 0x1C0012658 (wil_details_StagingConfig_Load.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1C00358E8 (wil_details_StagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // r8
  int v7; // edx
  __int64 result; // rax
  int FeatureState; // ebx
  _QWORD v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+40h] [rbp-C0h]
  _BYTE v12[56]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  int v14; // [rsp+A0h] [rbp-60h]
  _BYTE v15[208]; // [rsp+B0h] [rbp-50h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  v11 = 0;
  if ( g_wil_details_stagingConfigForMachine )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState(g_wil_details_stagingConfigForMachine, v10, a3, 0LL);
  }
  else
  {
    if ( g_wil_details_preventOnDemandStagingConfigReads
      || (unsigned int)wil_details_StagingConfig_Load(v12, a2, a3, v15) )
    {
      goto LABEL_4;
    }
    FeatureState = wil_details_StagingConfig_QueryFeatureState(v12, v10, v6, 0LL);
    if ( v14 )
      ExFreePoolWithTag(P, 0x4C4957u);
  }
  if ( FeatureState && LODWORD(v10[0]) )
  {
    v7 = 1;
    goto LABEL_5;
  }
LABEL_4:
  v7 = 0;
LABEL_5:
  *a6 = (v11 != 0) + 1;
  if ( !v7 )
    return 1LL;
  result = 2LL;
  if ( LODWORD(v10[0]) != 2 )
    return 1LL;
  return result;
}
