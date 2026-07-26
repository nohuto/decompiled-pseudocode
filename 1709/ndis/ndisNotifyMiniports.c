/*
 * XREFs of ndisNotifyMiniports @ 0x1C0101878
 * Callers:
 *     ndisPowerStateCallback @ 0x1C00C81E0 (ndisPowerStateCallback.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ndisReferenceDriver @ 0x1C0002828 (ndisReferenceDriver.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qLq @ 0x1C004ED08 (WPP_SF_qLq.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AEE3C (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C010B7E4 (ndisReferenceNextUnprocessedMiniport.c)
 *     ndisUnprocessAllMiniports @ 0x1C010B8CC (ndisUnprocessAllMiniports.c)
 */

void __fastcall ndisNotifyMiniports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, void *a3)
{
  KIRQL v5; // al
  struct _NDIS_M_DRIVER_BLOCK *v6; // rbx
  KIRQL v7; // bp
  struct _NDIS_MINIPORT_BLOCK *UnprocessedMiniport; // rax
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qLq(0x3Au, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, (__int64)a1, 5);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( a1 )
  {
    ndisDevicePnPEventNotifyMiniport(a1, 5u, a3, 4u);
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v6 = ndisMiniDriverList;
    v7 = v5;
    if ( ndisMiniDriverList )
    {
      do
      {
        if ( (unsigned __int8)ndisReferenceDriver((__int64)v6) )
        {
          KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
          while ( 1 )
          {
            UnprocessedMiniport = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceNextUnprocessedMiniport(v6);
            if ( !UnprocessedMiniport )
              break;
            ndisDevicePnPEventNotifyMiniport(UnprocessedMiniport, 5u, a3, 4u);
          }
          ndisUnprocessAllMiniports(v6);
          v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          NextDriver = v6->NextDriver;
          v7 = v9;
          ndisDereferenceDriver((__int64)v6, 1);
        }
        else
        {
          NextDriver = v6->NextDriver;
        }
        v6 = NextDriver;
      }
      while ( NextDriver );
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x3Bu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, (__int64)a1);
}
