/*
 * XREFs of PnpGetStableSystemBootTime @ 0x140695AE0
 * Callers:
 *     PiDevCfgResolveDriverDependencies @ 0x14058EB78 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14069C020 (PiDevCfgResolveDeviceDependencies.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140691E34 (PipHardwareConfigGetLastUseTime.c)
 */

__int64 __fastcall PnpGetStableSystemBootTime(_QWORD *a1)
{
  int LastUseTime; // edx
  _QWORD SystemInformation[6]; // [rsp+20h] [rbp-48h] BYREF

  LastUseTime = PipHardwareConfigGetLastUseTime((__int64)a1, a1);
  if ( LastUseTime < 0 )
  {
    LastUseTime = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
    if ( LastUseTime >= 0 )
      *a1 = SystemInformation[0] - SystemInformation[4];
  }
  return (unsigned int)LastUseTime;
}
