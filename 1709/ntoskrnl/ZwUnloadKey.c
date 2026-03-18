/*
 * XREFs of ZwUnloadKey @ 0x140181060
 * Callers:
 *     BiLoadHive @ 0x1405B1528 (BiLoadHive.c)
 *     VrpUnloadDifferencingHive @ 0x1406A92F8 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140779940 (BiUnloadHiveByName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, v1, v2);
}
