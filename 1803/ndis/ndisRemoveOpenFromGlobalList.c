/*
 * XREFs of ndisRemoveOpenFromGlobalList @ 0x1C0012128
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00B25B0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

char __fastcall ndisRemoveOpenFromGlobalList(struct _NDIS_OPEN_BLOCK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  KIRQL v6; // dl
  struct _NDIS_OPEN_BLOCK **p_NextGlobalOpen; // rcx
  struct _NDIS_OPEN_BLOCK *i; // rax
  __int64 v9; // r9

  v5 = 0;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(113LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a4);
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  p_NextGlobalOpen = &ndisGlobalOpenList;
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == a1 )
    {
      v5 = 1;
      *p_NextGlobalOpen = a1->NextGlobalOpen;
      break;
    }
    p_NextGlobalOpen = &i->NextGlobalOpen;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v6);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(114LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v9);
  return v5;
}
