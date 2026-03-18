/*
 * XREFs of ACPIProcessorBuildBootApicIds @ 0x1C0093BBC
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0025740 (ACPIProcessorStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 */

__int64 ACPIProcessorBuildBootApicIds()
{
  int v0; // edx
  __int64 v1; // rbx
  __int64 result; // rax
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
      (__int64)&WPP_aecc238b21d33d091d824f59ce417f9b_Traceguids);
    return 3221225626LL;
  }
  v1 = 0LL;
  if ( !AcpiBootProcessorCount )
    return 0LL;
  while ( 1 )
  {
    result = HalGetProcessorIdByNtNumber((unsigned int)v1, &v3);
    if ( (int)result < 0 )
      break;
    *(_DWORD *)(AcpiBootProcessorApicIds + 4 * v1) = v3;
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= AcpiBootProcessorCount )
      return 0LL;
  }
  return result;
}
