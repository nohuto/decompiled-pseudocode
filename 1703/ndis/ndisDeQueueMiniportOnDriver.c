/*
 * XREFs of ndisDeQueueMiniportOnDriver @ 0x1C00FB748
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00DF620 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00E1BA8 (ndisWdfPostReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 */

void __fastcall ndisDeQueueMiniportOnDriver(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  _QWORD *i; // rcx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x15u, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 392));
  for ( i = (_QWORD *)(a2 + 16); *i; i = (_QWORD *)(*i + 8LL) )
  {
    if ( *i == a1 )
    {
      *i = *(_QWORD *)(a1 + 8);
      break;
    }
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 392), v4);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x16u, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1, a2);
}
