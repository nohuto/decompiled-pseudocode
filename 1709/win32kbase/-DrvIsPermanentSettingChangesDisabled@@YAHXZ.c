/*
 * XREFs of ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C0063EAC
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C006586C (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C (DrvSetDisplayConfigValidateParams.c)
 *     DrvSetPruneFlag @ 0x1C00FA67C (DrvSetPruneFlag.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_BOOL8 DrvIsPermanentSettingChangesDisabled(void)
{
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+68h] [rbp+1Fh]
  int v3; // [rsp+70h] [rbp+27h]
  _BYTE v4[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v5; // [rsp+B0h] [rbp+67h] BYREF
  int v6; // [rsp+B8h] [rbp+6Fh] BYREF

  QueryTable.Flags = 288;
  v5 = 0;
  QueryTable.Name = L"DisableAll";
  v6 = 0;
  QueryTable.EntryContext = &v5;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultData = &v6;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultLength = 4;
  v2 = 0LL;
  v3 = 0;
  memset(v4, 0, sizeof(v4));
  RtlQueryRegistryValues(2u, L"GraphicsDrivers\\PermanentSettingChanges", &QueryTable, 0LL, 0LL);
  return v5 != 0;
}
