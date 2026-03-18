/*
 * XREFs of ACPIReleaseGlobalLock @ 0x1C0020748
 * Callers:
 *     GlobalLockEventHandler @ 0x1C0020570 (GlobalLockEventHandler.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x1C00517CC (ACPIIoctlReleaseGlobalLock.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E138 (WPP_RECORDER_SF_q.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C00207E0 (ACPIReleaseHardwareGlobalLock.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1C0020898 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0021258 (ACPIStartNextGlobalLockRequest.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0021340 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004A584 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIReleaseGlobalLock(__int64 a1)
{
  __int64 v2; // rcx
  int v4; // edx

  v2 = *((_QWORD *)AcpiInformation + 9);
  if ( a1 == v2 )
  {
    if ( (*((_DWORD *)AcpiInformation + 20))-- == 1 )
    {
      *((_QWORD *)AcpiInformation + 9) = 0LL;
      ACPIReleaseHardwareGlobalLock();
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        17,
        (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
        a1);
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48) )
      {
        if ( (unsigned __int8)ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5)) )
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
        (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
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
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
      v2,
      a1);
    return 3222536215LL;
  }
}
