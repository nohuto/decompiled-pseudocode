/*
 * XREFs of ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006CB88
 * Callers:
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006D794 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006DB18 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     ndisSSInvalidateOidCache @ 0x1C0011794 (ndisSSInvalidateOidCache.c)
 */

void __fastcall ndisIncrementSyncIdleCountersLocked(
        struct _NDIS_SELECTIVE_SUSPEND *a1,
        enum _NDIS_SS_BUSY_REASON a2,
        int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int128 *v7; // rax
  unsigned int v8; // edx

  v3 = a2 - 33;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
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
    ndisSSInvalidateOidCache((__int64)a1);
  }
  else
  {
    a1->PendingControlOps.Value |= 1u;
    v7 = &xmmword_1C0082BF0;
    v8 = 0;
    while ( *(_DWORD *)v7 != a3 )
    {
      ++v8;
      v7 = (__int128 *)((char *)v7 + 24);
      if ( v8 >= 5 )
        goto LABEL_13;
    }
  }
}
