/*
 * XREFs of ndisReferenceMiniportByHandle @ 0x1C0011418
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001EB08 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00B5FDC (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FE490 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C0103E1C (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisFindRootDevice @ 0x1C010B0B0 (ndisFindRootDevice.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 */

char __fastcall ndisReferenceMiniportByHandle(_NDIS_MINIPORT_BLOCK *a1, char a2)
{
  char v3; // r15
  char v4; // r14
  KIRQL v6; // al
  struct _NDIS_M_DRIVER_BLOCK *v7; // rbx
  KIRQL v8; // bp
  KIRQL v9; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rsi
  KIRQL v11; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v14; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v7 = ndisMiniDriverList;
  v8 = v6;
  do
  {
    if ( !v7 )
      break;
    if ( !a2 || (unsigned __int8)ndisReferenceRefEx(&v7->Ref.SpinLock) )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
      v9 = KeAcquireSpinLockRaiseToDpc(&v7->Ref.SpinLock);
      MiniportQueue = v7->MiniportQueue;
      v14 = v9;
      do
      {
        if ( !MiniportQueue )
          break;
        if ( MiniportQueue == a1 )
        {
          v3 = 1;
          if ( a2 || !ndisReferenceMiniport((__int64)a1) )
          {
            if ( (a1->Flags & 0x80200020) == 0
              && (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0
              && ndisReferenceMiniport((__int64)a1) )
            {
              v4 = 1;
            }
          }
          else
          {
            v4 = 1;
          }
        }
        MiniportQueue = MiniportQueue->NextMiniport;
      }
      while ( !v3 );
      KeReleaseSpinLock(&v7->Ref.SpinLock, v14);
      v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v7->NextDriver;
      v8 = v11;
      if ( a2 )
        ndisDereferenceDriver((__int64)v7, 1);
    }
    else
    {
      NextDriver = v7->NextDriver;
    }
    v7 = NextDriver;
  }
  while ( !v3 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  return v4;
}
