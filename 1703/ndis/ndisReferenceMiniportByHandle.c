/*
 * XREFs of ndisReferenceMiniportByHandle @ 0x1C0015E38
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0016538 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00B5BD0 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C0102110 (ndisFindRootDevice.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 *     ndisDereferenceDriver @ 0x1C0025778 (ndisDereferenceDriver.c)
 */

char __fastcall ndisReferenceMiniportByHandle(_NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  char v4; // r15
  char v5; // r14
  KIRQL v7; // al
  struct _NDIS_M_DRIVER_BLOCK *v8; // rbx
  KIRQL v9; // bp
  KIRQL v10; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rsi
  KIRQL v12; // al
  __int64 v13; // r8
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v17; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v8 = ndisMiniDriverList;
  v9 = v7;
  do
  {
    if ( !v8 )
      break;
    if ( !a2 || (unsigned __int8)ndisReferenceRefEx(&v8->Ref.SpinLock) )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
      v10 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
      MiniportQueue = v8->MiniportQueue;
      v17 = v10;
      do
      {
        if ( !MiniportQueue )
          break;
        if ( MiniportQueue == a1 )
        {
          v4 = 1;
          if ( a2 || !ndisReferenceMiniport((__int64)a1, a3) )
          {
            if ( (a1->Flags & 0x80200020) == 0
              && (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0
              && ndisReferenceMiniport((__int64)a1, a3) )
            {
              v5 = 1;
            }
          }
          else
          {
            v5 = 1;
          }
        }
        MiniportQueue = MiniportQueue->NextMiniport;
      }
      while ( !v4 );
      KeReleaseSpinLock(&v8->Ref.SpinLock, v17);
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v8->NextDriver;
      v9 = v12;
      if ( a2 )
      {
        LOBYTE(v13) = 6;
        ndisDereferenceDriver(v8, 1LL, v13);
      }
    }
    else
    {
      NextDriver = v8->NextDriver;
    }
    v8 = NextDriver;
  }
  while ( !v4 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  return v5;
}
