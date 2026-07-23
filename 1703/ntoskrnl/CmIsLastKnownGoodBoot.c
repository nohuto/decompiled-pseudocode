/*
 * XREFs of CmIsLastKnownGoodBoot @ 0x14080CDF0
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x14080CBD0 (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlQueryRegistryValuesEx @ 0x1405563F0 (RtlQueryRegistryValuesEx.c)
 */

bool CmIsLastKnownGoodBoot()
{
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v5; // [rsp+78h] [rbp-88h]
  int v6; // [rsp+80h] [rbp-80h]
  const wchar_t *v7; // [rsp+88h] [rbp-78h]
  int *v8; // [rsp+90h] [rbp-70h]
  int v9; // [rsp+98h] [rbp-68h]
  int *v10; // [rsp+A0h] [rbp-60h]
  int v11; // [rsp+A8h] [rbp-58h]
  __int64 v12; // [rsp+B0h] [rbp-50h]
  int v13; // [rsp+B8h] [rbp-48h]
  const WCHAR *v14; // [rsp+C0h] [rbp-40h]
  int *v15; // [rsp+C8h] [rbp-38h]
  int v16; // [rsp+D0h] [rbp-30h]
  int *v17; // [rsp+D8h] [rbp-28h]
  int v18; // [rsp+E0h] [rbp-20h]
  __int64 v19; // [rsp+E8h] [rbp-18h]
  int v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+F8h] [rbp-8h]
  __int64 v22; // [rsp+100h] [rbp+0h]
  int v23; // [rsp+108h] [rbp+8h]
  __int64 v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]

  QueryTable.Name = (PWSTR)L"Current";
  v3 = 0;
  QueryTable.DefaultType = 67108868;
  QueryTable.Flags = 288;
  QueryTable.EntryContext = &v1;
  v6 = 288;
  QueryTable.DefaultData = &v1;
  v7 = L"LastKnownGood";
  v8 = &v2;
  v10 = &v2;
  v14 = L"Default";
  v15 = &v3;
  v9 = 67108868;
  v13 = 288;
  v16 = 67108868;
  v17 = &v3;
  v1 = 0;
  v2 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultLength = 0;
  v5 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v25 = 0;
  return RtlQueryRegistryValuesEx(0, L"\\Registry\\Machine\\System\\Select", &QueryTable, 0LL, 0LL) >= 0
      && v2 == v1
      && v1 != v3;
}
