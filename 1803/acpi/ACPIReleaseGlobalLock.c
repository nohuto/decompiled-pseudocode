/*
 * XREFs of ACPIReleaseGlobalLock @ 0x1C0035340
 * Callers:
 *     ACPIIoctlReleaseGlobalLock @ 0x1C002D4E0 (ACPIIoctlReleaseGlobalLock.c)
 *     GlobalLockEventHandler @ 0x1C00355E0 (GlobalLockEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00213B4 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1C0035100 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C003544C (ACPIReleaseHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0035494 (ACPIStartNextGlobalLockRequest.c)
 */

__int64 __fastcall ACPIReleaseGlobalLock(__int64 a1)
{
  __int64 v2; // rcx
  int v5; // edx

  v2 = *((_QWORD *)AcpiInformation + 9);
  if ( a1 == v2 )
  {
    if ( (*((_DWORD *)AcpiInformation + 20))-- == 1 )
    {
      *((_QWORD *)AcpiInformation + 9) = 0LL;
      ACPIReleaseHardwareGlobalLock();
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        3,
        17,
        (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
        a1);
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48)
        && ACPIAcquireHardwareGlobalLock(*((volatile signed __int32 **)AcpiInformation + 5)) )
      {
        ACPIStartNextGlobalLockRequest();
      }
    }
    else
    {
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        16,
        (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
        *((_QWORD *)AcpiInformation + 9),
        *((_DWORD *)AcpiInformation + 20));
    }
    return 0LL;
  }
  else
  {
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      15,
      (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
      v2,
      a1);
    return 3222536215LL;
  }
}
