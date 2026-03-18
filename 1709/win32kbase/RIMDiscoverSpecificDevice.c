/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C010DFDC
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x1C0008EE0 (RimInputTypeToDeviceType.c)
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(_DWORD *Object, const UNICODE_STRING *a2)
{
  char v4; // al
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = RimInputTypeToDeviceType(Object[19]);
  v5 = RIMCreateDev(Object, v4, a2, 1, 0, 0LL, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
    v7 = v9;
    *(_DWORD *)(v9 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification((__int64)Object, v7);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v6);
  }
  return (unsigned int)v5;
}
