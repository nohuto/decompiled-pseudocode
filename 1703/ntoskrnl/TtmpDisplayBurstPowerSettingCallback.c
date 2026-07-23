/*
 * XREFs of TtmpDisplayBurstPowerSettingCallback @ 0x1405D5F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140071260 (RtlGetActiveConsoleId.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1406D8208 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmpDisplayBurstPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // ebx
  ULONG ActiveConsoleId; // eax
  int v7; // eax
  int v9; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (int)Context;
  ActiveConsoleId = RtlGetActiveConsoleId();
  v7 = TtmpAcquireSessionById(v10, ActiveConsoleId);
  if ( v7 >= 0 )
  {
    v9 = memcmp(SettingGuid, &GUID_ACDC_POWER_SOURCE, 0x10uLL);
    TtmiResetTerminalTimeouts(v10[0], *(_QWORD *)(v10[0] + 32LL), v4, (v9 != 0) + 1111769921, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    TtmiLogError("TtmpDisplayBurstPowerSettingCallback", 2569, v7, -1);
  }
  return 0LL;
}
