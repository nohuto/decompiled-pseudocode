/*
 * XREFs of VfObjectContextInit @ 0x140766E64
 * Callers:
 *     VfInitBootDriversLoaded @ 0x14081526C (VfInitBootDriversLoaded.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 VfObjectContextInit()
{
  __int16 v1; // [rsp+30h] [rbp-28h]

  v1 = 0;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViObjectContextTableLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    24LL,
    1666147926,
    v1,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  return (unsigned int)_InterlockedExchange(&ViObjectContextInitialized, 1);
}
