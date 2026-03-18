/*
 * XREFs of ?QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ @ 0x1C00F7EA4
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C007B4BC (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

void QueryAllowAppLiteRotationModeChangeOverride(void)
{
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v1; // [rsp+68h] [rbp+1Fh]
  int v2; // [rsp+70h] [rbp+27h]
  _BYTE v3[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v4; // [rsp+B0h] [rbp+67h] BYREF

  v4 = 0;
  QueryTable.QueryRoutine = 0LL;
  v1 = 0LL;
  v2 = 0;
  QueryTable.Name = L"AllowAppLiteRotationModeChangeOverride";
  QueryTable.EntryContext = &gAllowAppLiteRotationModeChange;
  QueryTable.DefaultData = &v4;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultLength = 4;
  memset(v3, 0, sizeof(v3));
  RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
}
