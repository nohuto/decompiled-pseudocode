/*
 * XREFs of ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006997C
 * Callers:
 *     ?ndisPhysicalNicPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00E5560 (-ndisPhysicalNicPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEA.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ?ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E4AE4 (-ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x1C00E552C (-ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z.c)
 */

__int64 __fastcall ndisPcwCollectPhysicalData(struct _PCW_BUFFER *a1)
{
  int v2; // esi
  unsigned __int64 v3; // rbx
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  KIRQL v6; // bp

  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = ndisMiniportList;
  v6 = v4;
  while ( v5 && v2 >= 0 )
  {
    if ( v5->PnPDeviceState == NdisPnPDeviceStarted
      && v5->PhysicalPerformanceCounters
      && ndisReferenceMiniport((__int64)v5, 0x58u) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v6);
      ndisPcwUpdatePhysicalMiniportCounters(v5, v3);
      v2 = ndisPcwAddSinglePhysicalInstance(a1, v5);
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v5, 0x58u);
    }
    v5 = v5->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v6);
  return (unsigned int)v2;
}
