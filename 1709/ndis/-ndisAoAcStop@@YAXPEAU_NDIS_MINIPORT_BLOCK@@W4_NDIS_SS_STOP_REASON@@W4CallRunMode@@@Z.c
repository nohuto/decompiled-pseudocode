/*
 * XREFs of ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072780
 * Callers:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00C3B58 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ndisPowerSaveStop @ 0x1C00C61B0 (ndisPowerSaveStop.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisCancelWaitWake @ 0x1C001F088 (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0071F98 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072068 (-ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0072224 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0073EE0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisAoAcStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2, enum CallRunMode a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v7; // bp
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // eax
  int v16; // ebx

  AoAc = a1->AoAc;
  v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( a2 > 6 )
  {
    v12 = a2 - 8;
    if ( v12 )
    {
      v13 = v12 - 3;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            AoAc->StopFlags.Value |= 0x1000u;
        }
        else
        {
          AoAc->StopFlags.Value |= 0x800u;
        }
      }
      else
      {
        AoAc->StopFlags.Value |= 0x400u;
      }
    }
    else
    {
      AoAc->StopFlags.Value |= 0x80u;
    }
  }
  else
  {
    if ( a2 == 6 )
    {
      AoAc->StopFlags.Value |= 0x20u;
      goto LABEL_23;
    }
    v8 = a2 - 1;
    if ( !v8 )
    {
      AoAc->StopFlags.Value |= 1u;
      goto LABEL_23;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      AoAc->StopFlags.Value |= 2u;
      goto LABEL_12;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      AoAc->StopFlags.Value |= 4u;
      AoAc->DeviceGone = 1;
      goto LABEL_12;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        AoAc->StopFlags.Value |= 0x10u;
LABEL_12:
        ndisAoAcCleanup(AoAc);
      }
    }
    else
    {
      AoAc->StopFlags.Value |= 8u;
    }
  }
LABEL_23:
  if ( AoAc->TempRefReason )
  {
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, 1);
    if ( KeCancelTimer(&AoAc->TempRefTimer.Timer) )
      ndisDereferenceMiniport((__int64)a1, 2u);
  }
  if ( AoAc->ActiveState )
  {
    KeReleaseSpinLock(&AoAc->Lock, v7);
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x29u, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, (__int64)a1);
    ndisCancelWaitWake((__int64)a1);
    v15 = ndisRequestNicActive(a1, a3);
    v16 = v15;
    if ( v15 && v15 != 259 )
    {
      ndisAoAcCompleteQueuedIrps(a1, v15);
      if ( (unsigned __int8)byte_1C0098755 >= 2u )
        WPP_SF_dq(0x2Au, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, v16, a1);
    }
  }
  else
  {
    KeReleaseSpinLock(&AoAc->Lock, v7);
  }
}
