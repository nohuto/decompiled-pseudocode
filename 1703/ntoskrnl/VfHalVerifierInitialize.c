/*
 * XREFs of VfHalVerifierInitialize @ 0x14076A570
 * Callers:
 *     VfInitVerifierComponents @ 0x1407657A0 (VfInitVerifierComponents.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 VfHalVerifierInitialize()
{
  __int16 v1; // [rsp+30h] [rbp-28h]

  Lock = 0LL;
  qword_1407901D8 = 0LL;
  v1 = 16;
  ViAdapterList.Blink = &ViAdapterList;
  ViAdapterList.Flink = &ViAdapterList;
  qword_1407901D0 = (__int64)&ViDomainCommonBufferList;
  ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViHalWaitBlockLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    152LL,
    1449943368,
    v1,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  return ViHalApplySettings();
}
