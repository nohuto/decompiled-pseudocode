/*
 * XREFs of InitializeEnergyEstimation @ 0x1C001D4AC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D950 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C001DC08 (RetrieveEfficiencyClassInformation.c)
 */

__int64 InitializeEnergyEstimation()
{
  unsigned int v0; // ebx
  unsigned int i; // edx
  unsigned int v2; // r8d
  void *v3; // rcx
  __int64 v4; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_1C0019D68 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&qword_1C0019D70);
  RetrieveEfficiencyClassInformation();
  qword_1C00197A8 = 0LL;
  v0 = 0;
  qword_1C00197A0 = 0LL;
  for ( i = dword_1C0019B54; v0 < dword_1C0019B54; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = dword_1C0019B54;
  }
  v2 = 1;
  qword_1C00197A8 = qword_1C0019C58[0];
  if ( i > 1 )
  {
    while ( Globals[32 * (unsigned __int64)v2 + 211] == qword_1C0019C58[0] )
    {
      if ( ++v2 >= i )
        goto LABEL_4;
    }
    qword_1C00197A8 = (__int64)SnapEnergyCountersDispatch;
  }
LABEL_4:
  v3 = (void *)qword_1C0019C50[0];
  v4 = 1LL;
  qword_1C00197A0 = qword_1C0019C50[0];
  if ( i > 1 )
  {
    while ( Globals[32 * (unsigned __int64)(unsigned int)v4 + 210] == qword_1C0019C50[0] )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= i )
        goto LABEL_5;
    }
    v3 = ComputeEnergyDispatch;
    qword_1C00197A0 = (__int64)ComputeEnergyDispatch;
  }
LABEL_5:
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_1C00197A0 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_1C0019890)(
           v3,
           qword_1C00197A8,
           v4,
           Globals);
}
