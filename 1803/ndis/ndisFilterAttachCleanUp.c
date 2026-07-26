/*
 * XREFs of ndisFilterAttachCleanUp @ 0x1C0011CBC
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisDereferenceFilter @ 0x1C0011E1C (ndisDereferenceFilter.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B040 (ndisSetupLwfMiniportHandlers.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C00202DC (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C00205A0 (NdisIfAddIfStackEntry.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00B2770 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C00B2850 (NdisIfDeregisterInterface.c)
 */

__int64 __fastcall ndisFilterAttachCleanUp(PVOID P, __int64 a2, char a3)
{
  unsigned __int64 v5; // rbx
  KIRQL v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  KIRQL v12; // al
  KIRQL v13; // bl
  __int64 v15; // rax
  NET_IFINDEX v16; // edx
  KIRQL v17; // bl

  if ( a3 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)P + 105) + 1312LL);
    NdisIfDeregisterInterface(*((_DWORD *)P + 208));
    NdisIfFreeNetLuidIndex(HIWORD(v5), (v5 >> 24) & 0xFFFFFF);
    *((_QWORD *)P + 105) = 0LL;
    *((_DWORD *)P + 208) = 0;
  }
  if ( a2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 2099181;
    v7 = *((_QWORD *)P + 14);
    v8 = *((_QWORD *)P + 15);
    if ( v7 )
      *(_QWORD *)(v7 + 120) = v8;
    else
      *(_QWORD *)(a2 + 2048) = v8;
    v9 = *((_QWORD *)P + 15);
    v10 = *((_QWORD *)P + 14);
    if ( v9 )
      *(_QWORD *)(v9 + 112) = v10;
    else
      *(_QWORD *)(a2 + 2056) = v10;
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v6);
    v11 = *((_QWORD *)P + 15);
    if ( v11 )
    {
      v15 = *((_QWORD *)P + 14);
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 832);
      else
        v16 = *(_DWORD *)(*((_QWORD *)P + 4) + 4080LL);
      NdisIfAddIfStackEntry(*(_DWORD *)(v11 + 832), v16);
      v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      ndisIfUpdateFilterIfStack(*((_QWORD *)P + 4));
      KeReleaseSpinLock(&ndisIfListLock, v17);
    }
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    v13 = v12;
    *(_DWORD *)(a2 + 1856) = 2099220;
    ndisSetupLwfMiniportHandlers(a2);
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v13);
  }
  return ndisDereferenceFilter(P);
}
