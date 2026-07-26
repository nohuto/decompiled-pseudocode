/*
 * XREFs of ndisRemoveOpenFromGlobalList @ 0x1C0001460
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AAE00 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

char __fastcall ndisRemoveOpenFromGlobalList(struct _NDIS_OPEN_BLOCK *a1)
{
  char v2; // bl
  KIRQL v3; // al
  struct _NDIS_OPEN_BLOCK **p_NextGlobalOpen; // rcx
  KIRQL v5; // dl
  struct _NDIS_OPEN_BLOCK *v6; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(110LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  p_NextGlobalOpen = &ndisGlobalOpenList;
  v5 = v3;
  if ( ndisGlobalOpenList )
  {
    while ( 1 )
    {
      v6 = *p_NextGlobalOpen;
      if ( *p_NextGlobalOpen == a1 )
        break;
      p_NextGlobalOpen = &v6->NextGlobalOpen;
      if ( !v6->NextGlobalOpen )
        goto LABEL_8;
    }
    v2 = 1;
    *p_NextGlobalOpen = a1->NextGlobalOpen;
  }
LABEL_8:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v5);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(111LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  return v2;
}
