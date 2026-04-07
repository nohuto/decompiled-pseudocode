/*
 * XREFs of ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180005320
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180005260 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800053B4 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800359D8 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x18006E410 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 */

char __fastcall wil::details_abi::FeatureStateData::RecordFeatureUsage(
        wil::details_abi::FeatureStateData *a1,
        unsigned int a2,
        signed int a3,
        unsigned int a4)
{
  int v8; // eax
  char v9; // bl

  if ( a3 == 254 )
  {
    wil::details_abi::FeatureStateData::RecordUsage(a1);
    return 1;
  }
  else if ( (unsigned __int64)a3 < 0xC8 || a3 >= 256 && (unsigned __int64)a3 < 0x200 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)a1);
    if ( (unsigned int)a3 <= 7 && (v8 = 204, _bittest(&v8, a3)) || (unsigned int)(a3 - 256) <= 0x7F )
    {
      wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        (char *)a1 + 8,
        (unsigned int)a3,
        a2);
      v9 = *((_BYTE *)a1 + 64);
    }
    else
    {
      v9 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
             (char *)a1 + 72,
             (unsigned int)a3,
             a2,
             a4);
    }
    if ( a1 )
      ReleaseSRWLockExclusive((PSRWLOCK)a1);
    return v9;
  }
  else
  {
    return 0;
  }
}
