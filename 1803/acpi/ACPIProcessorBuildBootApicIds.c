/*
 * XREFs of ACPIProcessorBuildBootApicIds @ 0x1C0081528
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0036300 (ACPIProcessorStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 */

__int64 ACPIProcessorBuildBootApicIds()
{
  int v0; // edx
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( AcpiBootProcessorApicIds )
    return 0LL;
  AcpiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  AcpiBootProcessorApicIds = (__int64)ExAllocatePoolWithTag(
                                        NonPagedPoolNx,
                                        4LL * (unsigned int)AcpiBootProcessorCount,
                                        0x4D706341u);
  if ( !AcpiBootProcessorApicIds )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      21,
      10,
      (__int64)&WPP_72dd1c1115013f02fe06a3c7ab98b878_Traceguids);
    return 3221225626LL;
  }
  v2 = 0LL;
  if ( !AcpiBootProcessorCount )
    return 0LL;
  while ( 1 )
  {
    result = HalGetProcessorIdByNtNumber((unsigned int)v2, &v3);
    if ( (int)result < 0 )
      break;
    *(_DWORD *)(AcpiBootProcessorApicIds + 4 * v2) = v3;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= AcpiBootProcessorCount )
      return 0LL;
  }
  return result;
}
