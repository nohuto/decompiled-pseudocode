/*
 * XREFs of ndisDeQueueMiniportOnDriver @ 0x1C00FF048
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00EBA58 (ndisWdfPostReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 */

void __fastcall ndisDeQueueMiniportOnDriver(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  _QWORD *i; // rcx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x15u, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1, a2);
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
    WPP_SF_qq(0x16u, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1, a2);
}
