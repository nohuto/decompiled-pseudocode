/*
 * XREFs of TtmpDisplayBurstPowerSettingCallback @ 0x1405EA090
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlGetActiveConsoleId @ 0x1400B16C0 (RtlGetActiveConsoleId.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x14070E590 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmpDisplayBurstPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // ebx
  ULONG ActiveConsoleId; // eax
  int v8; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (int)Context;
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (int)TtmpAcquireSessionById(v9, ActiveConsoleId) >= 0 )
  {
    v8 = memcmp(SettingGuid, &GUID_ACDC_POWER_SOURCE, 0x10uLL);
    TtmiResetTerminalTimeouts(v9[0], *(_QWORD *)(v9[0] + 32LL), v4, (v8 != 0) + 1111769921, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    TtmiLogError("TtmpDisplayBurstPowerSettingCallback");
  }
  return 0LL;
}
