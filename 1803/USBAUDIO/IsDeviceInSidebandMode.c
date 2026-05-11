/*
 * XREFs of IsDeviceInSidebandMode @ 0x1C0006F44
 * Callers:
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0017570 (SidebandCapableDeferredFilterFactoryCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0006ABC (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall IsDeviceInSidebandMode(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int WaitMode; // [rsp+20h] [rbp-38h]
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  Timeout.QuadPart = -100000000LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x11u,
    (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids);
  Object[0] = (PVOID)(v2 + 792);
  Object[1] = (PVOID)(v2 + 816);
  v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
  if ( v4 == 1 )
    v4 = -1073741536;
  KeWaitForSingleObject((PVOID)(v2 + 736), Executive, 0, 0, 0LL);
  *a2 = *(_DWORD *)(v2 + 840);
  KeReleaseMutex((PRKMUTEX)(v2 + 736), 0);
  WPP_RECORDER_SF_dd((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7, WaitMode);
  return v4;
}
