/*
 * XREFs of ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00741EC
 * Callers:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00720A8 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C0073748 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00738A4 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00748E4 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisReleaseNicActive @ 0x1C00750D0 (NdisReleaseNicActive.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 */

void __fastcall ndisSetTempRefTimer(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rbx

  AoAc = a1->AoAc;
  v4 = a2;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( AoAc->TempRefReason == NdisAoAcTempRefNone || AoAc->StopFlags.Value )
  {
    KeReleaseSpinLock(&AoAc->Lock, v5);
  }
  else
  {
    KeReleaseSpinLock(&AoAc->Lock, v5);
    v6 = -10000 * v4;
    if ( ndisReferenceMiniport((__int64)a1) )
    {
      if ( KeSetCoalescableTimer(&AoAc->TempRefTimer.Timer, (LARGE_INTEGER)v6, 0, 0, &AoAc->TempRefTimer.Dpc) )
        ndisDereferenceMiniport((__int64)a1, 2u);
    }
  }
}
