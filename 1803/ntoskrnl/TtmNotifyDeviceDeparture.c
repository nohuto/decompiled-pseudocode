/*
 * XREFs of TtmNotifyDeviceDeparture @ 0x1407707B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x14077133C (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x140773184 (TtmiAcquireCurrentSession.c)
 *     TtmiScheduleSessionWorker @ 0x140773264 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceDepartureNotified @ 0x140775700 (TtmiLogDeviceDepartureNotified.c)
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
  v5 = TtmiAcquireCurrentSession(&v10);
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
