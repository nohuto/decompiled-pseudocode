/*
 * XREFs of WmiTraceRundownNotify @ 0x1407429E8
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1404EEB84 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14059726C (EtwpUpdateFileInfoDriverState.c)
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     WmipBuildTraceDeviceList @ 0x140279F5C (WmipBuildTraceDeviceList.c)
 *     WmipFreeTraceDeviceList @ 0x140742A98 (WmipFreeTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140742D38 (WmipSendWmiIrpToTraceDeviceList.c)
 */

__int64 __fastcall WmiTraceRundownNotify(int a1)
{
  int v1; // ebx
  __int64 v2; // r8
  unsigned int v4; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v6[4]; // [rsp+40h] [rbp-20h] BYREF

  v6[1] = a1;
  P = 0LL;
  v6[2] = 0x400000;
  v4 = 0;
  v6[0] = 1;
  v1 = WmipBuildTraceDeviceList(0x400000, &P, &v4);
  if ( v1 >= 0 )
  {
    LOBYTE(v2) = 12;
    v1 = WmipSendWmiIrpToTraceDeviceList(P, v4, v2, 12LL, v6);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( P )
    WmipFreeTraceDeviceList(P);
  return (unsigned int)v1;
}
