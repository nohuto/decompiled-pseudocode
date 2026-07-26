/*
 * XREFs of ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006B098
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00C9930 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EEAC0 (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisPcwEnumerateInstances(PPCW_BUFFER Buffer)
{
  int v2; // ebx
  ULONG ActiveProcessorCount; // r14d
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  KIRQL v6; // si
  unsigned int v7; // esi

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = ndisMiniportList;
  v6 = v4;
  while ( v5 && v2 >= 0 )
  {
    if ( v5->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport((__int64)v5) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v6);
      v7 = 0;
      if ( ActiveProcessorCount )
      {
        while ( 1 )
        {
          v2 = ndisPcwEnumerateSingleInstance(Buffer, v5, v7);
          if ( v2 < 0 )
            break;
          if ( ++v7 >= ActiveProcessorCount )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        v2 = ndisPcwEnumerateSingleInstance(Buffer, v5, 0xFFFu);
      }
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v5, 0x57u);
    }
    v5 = v5->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v6);
  if ( v2 >= 0 )
    return (unsigned int)ndisPcwEnumerateSingleInstance(Buffer, 0LL, 0xFFFFFFFE);
  return (unsigned int)v2;
}
