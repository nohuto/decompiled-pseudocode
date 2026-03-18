/*
 * XREFs of ZwUnloadKey @ 0x140181660
 * Callers:
 *     BiUnloadHiveByName @ 0x14057BA0C (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14058CF74 (BiLoadHive.c)
 *     VrpUnloadDifferencingHive @ 0x14067E278 (VrpUnloadDifferencingHive.c)
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
