/*
 * XREFs of ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006EA20
 * Callers:
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006F6C0 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006FA44 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     ndisSSInvalidateOidCache @ 0x1C0071480 (ndisSSInvalidateOidCache.c)
 */

void __fastcall ndisIncrementSyncIdleCountersLocked(
        struct _NDIS_SELECTIVE_SUSPEND *a1,
        enum _NDIS_SS_BUSY_REASON a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edx
  __int64 v5; // rdx
  __int128 *v6; // rax

  v4 = a2 - 33;
  if ( v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v5 )
        {
          if ( (_DWORD)v5 != 1 )
            return;
          ++a1->PendingPnPEventCount;
        }
        else
        {
          a1->PendingControlOps.Value |= 8u;
        }
      }
      else
      {
        a1->PendingControlOps.Value |= 4u;
      }
    }
    else
    {
      a1->PendingControlOps.Value |= 2u;
    }
LABEL_13:
    a1->IdleTickCount = 0;
    ndisSSInvalidateOidCache(a1, v5, a3, a4);
  }
  else
  {
    a1->PendingControlOps.Value |= 1u;
    v6 = &xmmword_1C0088CB0;
    LODWORD(v5) = 0;
    while ( *(_DWORD *)v6 != (_DWORD)a3 )
    {
      v5 = (unsigned int)(v5 + 1);
      v6 = (__int128 *)((char *)v6 + 24);
      if ( (unsigned int)v5 >= 5 )
        goto LABEL_13;
    }
  }
}
