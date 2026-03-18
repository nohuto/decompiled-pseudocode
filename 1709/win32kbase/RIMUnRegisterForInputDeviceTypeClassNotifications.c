/*
 * XREFs of RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0009DB8
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0008F10 (RIMRemoveInputOfType.c)
 *     rimPassivateSecondaryRims @ 0x1C0009354 (rimPassivateSecondaryRims.c)
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C009E5A0 (RIMDirectStopDeviceClassNotifications.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0009F40 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMUnRegisterForInputDeviceTypeClassNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v5; // rbx
  char v6; // [rsp+30h] [rbp-18h]

  v3 = a2;
  if ( ((unsigned int)DeviceTypeToRimInputType(a2) & *(_DWORD *)(a1 + 76)) != 0
    && *(_QWORD *)(a1 + 8 * v3 + 360)
    && !*(_DWORD *)(a1 + 4 * v3 + 432) )
  {
    v5 = *(_QWORD *)(a1 + 8 * v3 + 448);
    *(_QWORD *)(v5 + 88) = a1;
    v6 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 448) + 96LL) = v3;
    KeInitializeApc(
      v5,
      KeGetCurrentThread(),
      0LL,
      ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers,
      rimRundownApcIoUnregisterPlugPlayNotificationEx,
      rimNormalApcIoUnregisterPlugPlayNotificationEx,
      v6,
      v5 + 88);
    KeInsertQueueApc(v5, v5, 0LL, 0LL);
    *(_DWORD *)(a1 + 4 * v3 + 432) = 1;
  }
  return 0LL;
}
