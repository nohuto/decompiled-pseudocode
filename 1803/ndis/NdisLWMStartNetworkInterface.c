/*
 * XREFs of NdisLWMStartNetworkInterface @ 0x1C00EBA00
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0025040 (NdisConvertNtStatusToNdisStatus.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C6274 (ndisStartDeviceSynchronous.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall NdisLWMStartNetworkInterface(int *BugCheckParameter3)
{
  unsigned int v2; // edi
  int started; // eax
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x90u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)BugCheckParameter3);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (BugCheckParameter3[30] & 0x100) == 0 )
    ndisBugCheckEx(0x29uLL, 3uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( ndisReferenceMiniport((__int64)BugCheckParameter3) )
  {
    started = ndisStartDeviceSynchronous(BugCheckParameter3);
    v2 = NdisConvertNtStatusToNdisStatus(started);
    if ( !v2 )
      ndisMSetMiniportReadyForBinding((__int64)BugCheckParameter3, 1, Reason_MiniportDeviceNotStarted, RunAsynchronous);
    ndisDereferenceMiniport((__int64)BugCheckParameter3, 0x68u, v4, v5);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(0x91u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)BugCheckParameter3);
    v2 = -1073676286;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x92u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)BugCheckParameter3, v2);
  return v2;
}
