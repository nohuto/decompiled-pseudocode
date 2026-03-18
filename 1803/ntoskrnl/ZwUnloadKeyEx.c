/*
 * XREFs of ZwUnloadKeyEx @ 0x1401AACE0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140578894 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey, Event, v2);
}
