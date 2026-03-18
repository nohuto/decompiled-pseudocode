/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0016DDC
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009E200 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C01075B8 (MonitorFillMonitorDeviceInfo.c)
 *     _lambda_9701550c22e6dfba19810e7e8a87dbd3_::operator() @ 0x1C010FCA0 (_lambda_9701550c22e6dfba19810e7e8a87dbd3_--operator().c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C01E9568 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C02065C4 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0237848 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0016E28 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, const unsigned __int16 *a3)
{
  int v3; // r9d

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringCopyWorkerW(a1, a2, 0LL, a3, 0x7FFFFFFEuLL);
  }
  return (unsigned int)v3;
}
