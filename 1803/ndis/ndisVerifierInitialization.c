/*
 * XREFs of ndisVerifierInitialization @ 0x1C0014C54
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C00B00DC (ndisQueryStatisticsOids.c)
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
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
        if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          ndisVerifierLevel = VerifierFlags | 4;
        if ( MmAddVerifierThunks(&off_1C00807D0, 0x190u) >= 0 )
        {
          qword_1C009AFD8 = (__int64)&ndisMiniportTrackAllocList;
          ndisMiniportTrackAllocList.Flink = &ndisMiniportTrackAllocList;
          qword_1C009AFE8 = (__int64)&ndisDriverTrackAllocList;
          ndisDriverTrackAllocList.Flink = &ndisDriverTrackAllocList;
          KeInitializeSpinLock(&ndisTrackMemLock);
          return 1;
        }
      }
    }
  }
  return v0;
}
