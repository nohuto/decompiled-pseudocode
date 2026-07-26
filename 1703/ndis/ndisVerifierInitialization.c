/*
 * XREFs of ndisVerifierInitialization @ 0x1C001382C
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C00A5E9C (ndisQueryStatisticsOids.c)
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

char ndisVerifierInitialization()
{
  char v0; // bl
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 )
  {
    ndisVerifierWdmDispatch = (struct _VF_WDM_DISPATCH_TABLE *)VfQueryDispatchTable(0LL, 80LL);
    if ( ndisVerifierWdmDispatch )
    {
      ndisVerifierNdisDispatch = (struct _VF_NDIS_DISPATCH_TABLE *)VfQueryDispatchTable(2LL, 168LL);
      if ( ndisVerifierNdisDispatch )
      {
        ndisVerifierLevel = VerifierFlags;
        if ( (ndisFlags & 4) != 0 )
          ndisVerifierLevel = VerifierFlags | 4;
        if ( MmAddVerifierThunks(&off_1C007B7B0, 0x110u) >= 0 )
        {
          qword_1C00940A0 = (__int64)&ndisMiniportTrackAllocList;
          ndisMiniportTrackAllocList.Flink = &ndisMiniportTrackAllocList;
          qword_1C00940B0 = (__int64)&ndisDriverTrackAllocList;
          ndisDriverTrackAllocList.Flink = &ndisDriverTrackAllocList;
          KeInitializeSpinLock(&ndisTrackMemLock);
          return 1;
        }
      }
    }
  }
  return v0;
}
