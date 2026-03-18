/*
 * XREFs of TtmNotifyDeviceDeparture @ 0x14070D050
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmiAcquireCurrentSession @ 0x1405EA044 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x14070DBCC (TtmpFindDeviceByToken.c)
 *     TtmiScheduleSessionWorker @ 0x14070F9F4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1407118DC (TtmiLogDeviceDepartureNotified.c)
 */

__int64 __fastcall TtmNotifyDeviceDeparture(unsigned int a1, __int64 a2)
{
  char DeviceByToken; // bl
  int v5; // eax
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  DeviceByToken = 0;
  v5 = TtmiAcquireCurrentSession((__int64)&v10);
  if ( v5 >= 0 )
  {
    DeviceByToken = TtmpFindDeviceByToken(v10, a1, a2, &v11);
    if ( DeviceByToken )
    {
      v7 = *(_DWORD *)(v11 + 600);
      if ( (v7 & 4) == 0 )
      {
        v8 = v10;
        *(_DWORD *)(v11 + 600) = v7 | 4;
        TtmiScheduleSessionWorker(v8, 1LL);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    TtmiLogError("TtmNotifyDeviceDeparture", 598, v5, v5);
  }
  LOBYTE(v6) = DeviceByToken;
  return TtmiLogDeviceDepartureNotified(a1, a2, v6);
}
