/*
 * XREFs of ndisPmHaltMiniport @ 0x1C0104E6C
 * Callers:
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 * Callees:
 *     NdisResetEvent @ 0x1C00107E0 (NdisResetEvent.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0025B2C (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00AC4FC (ndisMSetMiniportReadyForBinding.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00BF9A0 (ndisMDeregisterBugCheckHandler.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisPmHaltMiniport(ULONG_PTR BugCheckParameter2)
{
  KIRQL v2; // al
  KIRQL v3; // bp
  KSPIN_LOCK *v4; // rcx
  KIRQL v5; // al
  int v6; // ecx

  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x2Cu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, BugCheckParameter2);
  NdisTraceLoggingDeviceRemoved((const struct _TlgProvider_t *)BugCheckParameter2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  v3 = v2;
  *(_DWORD *)(BugCheckParameter2 + 1856) = 1705146;
  NdisResetEvent((PNDIS_EVENT)(BugCheckParameter2 + 3752));
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
  v4 = (KSPIN_LOCK *)(BugCheckParameter2 + 96);
  if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) != 0 )
  {
    KeReleaseSpinLock(v4, v3);
    ndisDereferencePackage((__int64)&ndisPkgs);
  }
  else
  {
    KeReleaseSpinLock(v4, v3);
    ndisMSetMiniportReadyForBinding(BugCheckParameter2, 0, Reason_MiniportLowPower, RunSynchronous);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    v6 = *(_DWORD *)(BugCheckParameter2 + 120);
    *(_DWORD *)(BugCheckParameter2 + 124) |= 0x4004u;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    *(_DWORD *)(BugCheckParameter2 + 120) = v6 & 0x7FFFFFFE | 0x80000000;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v5);
    ndisMCommonHaltMiniport(BugCheckParameter2, 62);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 4456), 0x10u);
    ndisMDeregisterBugCheckHandler(BugCheckParameter2);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x2Du, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, BugCheckParameter2);
  }
}
