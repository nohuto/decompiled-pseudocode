/*
 * XREFs of ndisPmHaltMiniport @ 0x1C010FD6C
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 * Callees:
 *     NdisResetEvent @ 0x1C0008CE0 (NdisResetEvent.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00127CC (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00B2ED8 (ndisMDeregisterBugCheckHandler.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisPmHaltMiniport(__int64 BugCheckParameter2)
{
  KIRQL v2; // si
  KSPIN_LOCK *v3; // rcx
  bool v4; // zf
  KIRQL v5; // al
  int v6; // ecx

  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x2Cu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, BugCheckParameter2);
  NdisTraceLoggingDeviceRemoved();
  ndisReferencePackage((__int64)&ndisPkgs);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 1856) = 1705140;
  NdisResetEvent((PNDIS_EVENT)(BugCheckParameter2 + 3752));
  v3 = (KSPIN_LOCK *)(BugCheckParameter2 + 96);
  v4 = (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
  if ( v4 )
  {
    KeReleaseSpinLock(v3, v2);
    ndisMSetMiniportReadyForBinding(BugCheckParameter2, 0, Reason_MiniportLowPower, RunSynchronous);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    v6 = *(_DWORD *)(BugCheckParameter2 + 120);
    *(_DWORD *)(BugCheckParameter2 + 124) |= 0x4004u;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    *(_DWORD *)(BugCheckParameter2 + 120) = v6 & 0x7FFFFFFE | 0x80000000;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v5);
    ndisMCommonHaltMiniport(
      BugCheckParameter2,
      ~(unsigned __int8)(*(_DWORD *)(BugCheckParameter2 + 120) >> 6) & 2 | 0x3C);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 4456), 0x10u);
    ndisMDeregisterBugCheckHandler(BugCheckParameter2);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(0x2Du, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, BugCheckParameter2);
  }
  else
  {
    KeReleaseSpinLock(v3, v2);
    ndisDereferencePackage((__int64)&ndisPkgs);
  }
}
