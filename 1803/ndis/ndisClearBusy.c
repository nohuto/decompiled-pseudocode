/*
 * XREFs of ndisClearBusy @ 0x1C0070730
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C0001980 (NdisMSendNetBufferListsComplete.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C0006300 (ndisReturnNblWithPowerQueue.c)
 *     ndisQueuedCheckForHang @ 0x1C0008280 (ndisQueuedCheckForHang.c)
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C004318C (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043260 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0044800 (ndisDoCancelDirectOidRequest.c)
 *     ndisMDoDirectOidRequest @ 0x1C00458E0 (ndisMDoDirectOidRequest.c)
 *     ndisMCancelSendNetBufferListsOnMiniport @ 0x1C0054F90 (ndisMCancelSendNetBufferListsOnMiniport.c)
 *     NdisMResetComplete @ 0x1C005EDD0 (NdisMResetComplete.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00B0CE0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00C351C (ndisDevicePnPEventNotifyMiniport.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0102D7C (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01033D4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisClearBusy(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v7; // ebp
  KIRQL v8; // dl
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi

  v4 = *(_QWORD *)(a1 + 4480);
  v7 = *(_DWORD *)(a1 + 120) & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  if ( a3 > 49 )
  {
    v13 = a3 - 50;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 == 1 )
              *(_DWORD *)(v4 + 576) -= a2;
          }
          else
          {
            *(_DWORD *)(v4 + 524) -= a2;
          }
        }
        else
        {
          *(_DWORD *)(v4 + 520) -= a2;
        }
      }
      else
      {
        *(_DWORD *)(v4 + 532) -= a2;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 528) -= a2;
    }
  }
  else if ( a3 == 49 )
  {
    *(_DWORD *)(v4 + 512) &= ~0x10u;
  }
  else
  {
    v9 = a3 - 33;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
              --*(_DWORD *)(v4 + 516);
          }
          else
          {
            *(_DWORD *)(v4 + 512) &= ~8u;
          }
        }
        else
        {
          *(_DWORD *)(v4 + 512) &= ~4u;
        }
      }
      else
      {
        *(_DWORD *)(v4 + 512) &= ~2u;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 512) &= ~1u;
    }
  }
  if ( !v7
    || *(_DWORD *)(v4 + 512)
    || *(_DWORD *)(v4 + 516)
    || *(_DWORD *)(v4 + 528)
    || *(_DWORD *)(v4 + 532)
    || *(_DWORD *)(v4 + 520)
    || *(_DWORD *)(v4 + 524)
    || *(_DWORD *)(v4 + 576)
    || *(_DWORD *)(v4 + 508) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 3784) + 360LL) + 48LL))(*(_QWORD *)(a1 + 24));
  }
}
