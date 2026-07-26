/*
 * XREFs of ndisNotifyMiniports @ 0x1C00F9EE8
 * Callers:
 *     ndisPowerStateCallback @ 0x1C00A8F70 (ndisPowerStateCallback.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceDriver @ 0x1C0023B90 (ndisReferenceDriver.c)
 *     ndisDereferenceDriver @ 0x1C0025778 (ndisDereferenceDriver.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qLq @ 0x1C005013C (WPP_SF_qLq.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00B87B0 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C010284C (ndisReferenceNextUnprocessedMiniport.c)
 *     ndisUnprocessAllMiniports @ 0x1C0102934 (ndisUnprocessAllMiniports.c)
 */

void __fastcall ndisNotifyMiniports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, void *a3)
{
  KIRQL v5; // al
  struct _NDIS_M_DRIVER_BLOCK *v6; // rbx
  KIRQL v7; // bp
  struct _NDIS_MINIPORT_BLOCK *UnprocessedMiniport; // rax
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qLq(0x3Eu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, (__int64)a1, 5);
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
        if ( ndisReferenceDriver((__int64)v6, 5u) )
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
          ndisDereferenceDriver((__int64)v6, 1, 5u);
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
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, (__int64)a1);
}
