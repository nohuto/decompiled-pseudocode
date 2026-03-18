/*
 * XREFs of RIMDeviceNotify @ 0x1C010E070
 * Callers:
 *     <none>
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0009F40 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C010E194 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C010E2E0 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C010ED94 (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall RIMDeviceNotify(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // al
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x32u,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  v4 = *(_QWORD *)(a2 + 344);
  RIMLockExclusive(v4 + 96);
  v5 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  WPP_RECORDER_SF_Sd(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v11, *(_QWORD *)(a2 + 216), v5);
  if ( !*(_BYTE *)(v4 + 73)
    && ((unsigned int)DeviceTypeToRimInputType(*(unsigned __int8 *)(a2 + 48)) & *(_DWORD *)(v4 + 76)) != 0 )
  {
    RIMGetPnpActionBitsFromGuid(v4, a2, a1 + 4);
    v9 = *(_DWORD *)(a2 + 184);
    if ( (v9 & 2) != 0 || (v9 & 4) != 0 || (v9 & 8) != 0 )
      RIMSignalOnPnpNotificationAndWait(v4, a2);
  }
  *(_QWORD *)(v4 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 96, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v12) = 0;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x34u,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
    v12);
  return 0LL;
}
