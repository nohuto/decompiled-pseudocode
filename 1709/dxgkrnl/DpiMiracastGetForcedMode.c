/*
 * XREFs of DpiMiracastGetForcedMode @ 0x1C00FBB98
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00FB1B0 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 DpiMiracastGetForcedMode()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp-79h] BYREF
  int v2; // [rsp+34h] [rbp-75h] BYREF
  int v3; // [rsp+38h] [rbp-71h] BYREF
  __int64 v4; // [rsp+40h] [rbp-69h] BYREF
  int v5; // [rsp+48h] [rbp-61h]
  const wchar_t *v6; // [rsp+50h] [rbp-59h]
  int *v7; // [rsp+58h] [rbp-51h]
  int v8; // [rsp+60h] [rbp-49h]
  int *v9; // [rsp+68h] [rbp-41h]
  int v10; // [rsp+70h] [rbp-39h]
  __int64 v11; // [rsp+78h] [rbp-31h]
  int v12; // [rsp+80h] [rbp-29h]
  const wchar_t *v13; // [rsp+88h] [rbp-21h]
  int *v14; // [rsp+90h] [rbp-19h]
  int v15; // [rsp+98h] [rbp-11h]
  int *v16; // [rsp+A0h] [rbp-9h]
  int v17; // [rsp+A8h] [rbp-1h]
  __int64 v18; // [rsp+B0h] [rbp+7h]
  int v19; // [rsp+B8h] [rbp+Fh]
  _BYTE v20[40]; // [rsp+C0h] [rbp+17h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v6 = L"MiracastUseIhvDriver";
  v7 = &v3;
  v5 = 288;
  v9 = &v1;
  v13 = L"MiracastForceDisable";
  v14 = &v2;
  v8 = 67108868;
  v10 = 4;
  v12 = 288;
  v15 = 67108868;
  v17 = 4;
  v16 = &v1;
  v1 = 2;
  v3 = 2;
  v2 = 2;
  memset(v20, 0, sizeof(v20));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v4, 0LL, 0LL) < 0 )
    return 0LL;
  result = 1LL;
  if ( v2 == 1 )
    return 3LL;
  if ( v3 != 1 )
  {
    if ( !v3 )
      return 2LL;
    return 0LL;
  }
  return result;
}
