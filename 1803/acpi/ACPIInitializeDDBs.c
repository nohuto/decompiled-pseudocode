/*
 * XREFs of ACPIInitializeDDBs @ 0x1C009A488
 * Callers:
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPITableLoad @ 0x1C003B1B0 (ACPITableLoad.c)
 *     ACPIInitializeDDB @ 0x1C009A3CC (ACPIInitializeDDB.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C009C064 (Simulator_NotifyTablesAreLoaded.c)
 */

__int64 ACPIInitializeDDBs()
{
  int v0; // ebx
  __int64 *i; // rdi

  v0 = 0;
  if ( (__int64 *)AcpiDynamicDataBlockTableList == &AcpiDynamicDataBlockTableList )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      22,
      38,
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids);
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    for ( i = (__int64 *)AcpiDynamicDataBlockTableList; i != &AcpiDynamicDataBlockTableList; i = (__int64 *)*i )
    {
      v0 = ACPIInitializeDDB((__int64)i);
      if ( v0 < 0 )
        return (unsigned int)v0;
    }
    ACPITableLoad(18LL, 2, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_NotifyTablesAreLoaded();
  }
  return (unsigned int)v0;
}
