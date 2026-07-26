/*
 * XREFs of ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C007291C
 * Callers:
 *     ndisPowerSaveClearStop @ 0x1C00B0570 (ndisPowerSaveClearStop.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BC208 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F5E64 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0072718 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0074A60 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisAoAcClearStop(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_SS_STOP_REASON a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  signed __int64 v4; // rsi
  char v6; // r15
  int v7; // ebp
  KIRQL v8; // r12
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi

  AoAc = a1->AoAc;
  LODWORD(v4) = 0;
  v6 = 0;
  v7 = 5;
  v8 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v9 = a2 - 1;
  if ( v9 )
  {
    v10 = v9 - 3;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 2;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 2;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 == 1 )
                  AoAc->StopFlags.Value &= ~0x1000u;
              }
              else
              {
                AoAc->StopFlags.Value &= ~0x800u;
                v7 = 6;
              }
            }
            else
            {
              AoAc->StopFlags.Value &= ~0x400u;
            }
          }
          else
          {
            AoAc->StopFlags.Value &= ~0x100u;
            v7 = 1;
            LODWORD(v4) = ndisNicQuietInitTimeout;
          }
        }
        else
        {
          AoAc->StopFlags.Value &= ~0x80u;
        }
      }
      else
      {
        AoAc->StopFlags.Value &= ~0x20u;
      }
    }
    else
    {
      AoAc->StopFlags.Value &= ~8u;
    }
  }
  else
  {
    AoAc->StopFlags.Value &= ~1u;
  }
  if ( !AoAc->StopFlags.Value && AoAc->TempRefReason != NdisAoAcTempRefPmInit )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(0x2Cu, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a1);
    AoAc->TempRefReason = v7;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
    v6 = 1;
  }
  KeReleaseSpinLock(&AoAc->Lock, v8);
  if ( v6 )
  {
    if ( !(_DWORD)v4 )
    {
      v4 = ndisNicQuietInitTimeout - (MEMORY[0xFFFFF78000000008] - AoAc->StartTime) / 0x2710;
      if ( AoAc->DerefTimeoutMilliseconds > v4 )
        LODWORD(v4) = AoAc->DerefTimeoutMilliseconds;
    }
    ndisSetTempRefTimer(a1, v4);
  }
}
