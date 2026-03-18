/*
 * XREFs of ZwLoadKey @ 0x14017FF20
 * Callers:
 *     BiLoadHive @ 0x14058CF74 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, FileObjectAttributes, v2);
}
