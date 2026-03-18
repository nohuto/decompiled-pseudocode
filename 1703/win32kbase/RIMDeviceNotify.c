/*
 * XREFs of RIMDeviceNotify @ 0x1C010F700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     DeviceTypeToRimInputType @ 0x1C0093CB0 (DeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C010F824 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C010F970 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C01103DC (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall RIMDeviceNotify(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  char v5; // al
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    49,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  v4 = *(_QWORD *)(v2 + 344);
  RIMLockExclusive(v4 + 96);
  v5 = RimDeviceTypeToRimInputType(v2, *(unsigned __int8 *)(v2 + 48));
  WPP_RECORDER_SF_Sd(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v11, *(_QWORD *)(v2 + 216), v5);
  if ( !*(_BYTE *)(v4 + 73)
    && ((unsigned int)DeviceTypeToRimInputType(*(unsigned __int8 *)(v2 + 48)) & *(_DWORD *)(v4 + 76)) != 0 )
  {
    RIMGetPnpActionBitsFromGuid(v4, v2, a1 + 4);
    v9 = *(_DWORD *)(v2 + 184);
    if ( (v9 & 2) != 0 || (v9 & 4) != 0 || (v9 & 8) != 0 )
      RIMSignalOnPnpNotificationAndWait(v4, v2);
  }
  *(_QWORD *)(v4 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 96, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v12) = 0;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x33u,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
    v12);
  return 0LL;
}
