/*
 * XREFs of ndisMFinishClose @ 0x1C00FF3D8
 * Callers:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0001B74 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C000F750 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisUpdateLoopbackOpens @ 0x1C00104BC (ndisUpdateLoopbackOpens.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00FF4DC (ndisDeQueueOpenOnMiniport.c)
 *     ndisDeQueueOpenOnProtocol @ 0x1C00FF620 (ndisDeQueueOpenOnProtocol.c)
 *     ndisMCoFreeResources @ 0x1C0112804 (ndisMCoFreeResources.c)
 */

void __fastcall ndisMFinishClose(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0xCu, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  ndisReferenceMiniportNoCheck(v1);
  if ( (*(_DWORD *)(v1 + 120) & 0x20000) != 0 )
    ndisMCoFreeResources(a1);
  while ( *(_QWORD *)(a1 + 496) )
  {
    v3 = *(_QWORD **)(a1 + 496);
    if ( v3 )
      *(_QWORD *)(a1 + 496) = *v3;
    ExFreePoolWithTag(v3, 0);
  }
  while ( *(_QWORD *)(a1 + 504) )
  {
    v4 = *(_QWORD **)(a1 + 504);
    if ( v4 )
      *(_QWORD *)(a1 + 504) = *v4;
    ExFreePoolWithTag(v4, 0);
  }
  while ( *(_QWORD *)(a1 + 512) )
  {
    v5 = *(_QWORD **)(a1 + 512);
    if ( v5 )
      *(_QWORD *)(a1 + 512) = *v5;
    ExFreePoolWithTag(v5, 0);
  }
  ndisDeQueueOpenOnProtocol(a1, *(_QWORD *)(a1 + 24));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
  if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
  {
    --*(_BYTE *)(v1 + 90);
    *(_DWORD *)(a1 + 224) &= ~4u;
    ndisUpdateCheckForLoopbackFlag(v1);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
  ndisDeQueueOpenOnMiniport(a1, v1);
  ndisUpdateLoopbackOpens(v1);
  *(_DWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 360) = ndisMQueuedFinishClose;
  *(_QWORD *)(a1 + 368) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 344), (WORK_QUEUE_TYPE)40);
  ndisDereferenceMiniport(v1, 0x32u);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0xDu, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
}
