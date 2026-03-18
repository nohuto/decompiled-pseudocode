/*
 * XREFs of ACPIInitializeDDBs @ 0x1C00AC378
 * Callers:
 *     ACPIInitialize @ 0x1C00AA7F0 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     ACPITableLoad @ 0x1C001D690 (ACPITableLoad.c)
 *     AMLILoadDDB @ 0x1C00ABDC8 (AMLILoadDDB.c)
 *     ACPILoadTableCheckSum @ 0x1C00AC010 (ACPILoadTableCheckSum.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AF294 (Simulator_NotifyTablesAreLoaded.c)
 */

__int64 ACPIInitializeDDBs()
{
  __int64 *v0; // rdi
  unsigned int v1; // ebx
  __m128i *v2; // rsi
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
      (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids);
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    v0 = (__int64 *)AcpiDynamicDataBlockTableList;
    v1 = 0;
    while ( v0 != &AcpiDynamicDataBlockTableList )
    {
      v2 = (__m128i *)v0[3];
      if ( !ACPILoadTableCheckSum(v2, v2->m128i_u32[1]) )
        KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, (ULONG_PTR)v2, v2[2].m128i_u32[0]);
      v3 = AMLILoadDDB(v2->m128i_i32, &v6);
      if ( v3 < 0 )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          22,
          37,
          (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
          v3);
        KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, (ULONG_PTR)v2, v2[2].m128i_u32[0]);
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
