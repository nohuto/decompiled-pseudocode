/*
 * XREFs of ACPIInitializeDDBs @ 0x1C00AE954
 * Callers:
 *     ACPIInitialize @ 0x1C00AF648 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPITableLoad @ 0x1C00132C0 (ACPITableLoad.c)
 *     ACPILoadTableCheckSum @ 0x1C00AEA10 (ACPILoadTableCheckSum.c)
 *     AMLILoadDDB @ 0x1C00AED78 (AMLILoadDDB.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00B12F8 (Simulator_NotifyTablesAreLoaded.c)
 */

__int64 ACPIInitializeDDBs()
{
  __int64 *v0; // rdi
  unsigned int v1; // ebx
  ULONG_PTR v2; // rsi
  int v3; // eax
  int v4; // edx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (__int64 *)AcpiDynamicDataBlockTableList == &AcpiDynamicDataBlockTableList )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      22,
      38,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids);
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    v0 = (__int64 *)AcpiDynamicDataBlockTableList;
    v1 = 0;
    while ( v0 != &AcpiDynamicDataBlockTableList )
    {
      v2 = v0[3];
      if ( !(unsigned __int8)ACPILoadTableCheckSum(v2, *(unsigned int *)(v2 + 4)) )
        KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, v2, *(unsigned int *)(v2 + 32));
      v3 = AMLILoadDDB(v2, &v6);
      if ( v3 < 0 )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          22,
          37,
          (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
          v3);
        KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, v2, *(unsigned int *)(v2 + 32));
      }
      v0[2] = v6;
      v0 = (__int64 *)*v0;
    }
    ACPITableLoad(18LL, 2, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_NotifyTablesAreLoaded();
  }
  return v1;
}
