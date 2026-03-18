/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C010F07C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     RimInputTypeToDeviceType @ 0x1C00953D0 (RimInputTypeToDeviceType.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(PWSTR *Object, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = RimInputTypeToDeviceType(*((_DWORD *)Object + 19));
  v5 = RIMCreateDev(Object, v4, a2, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v9);
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
