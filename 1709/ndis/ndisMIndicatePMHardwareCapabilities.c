/*
 * XREFs of ndisMIndicatePMHardwareCapabilities @ 0x1C0048CDC
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisCheckMiniportWakeUpCapable @ 0x1C0002D64 (ndisCheckMiniportWakeUpCapable.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

void __fastcall ndisMIndicatePMHardwareCapabilities(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ecx
  KIRQL v5; // al
  KIRQL v6; // r14

  v2 = *(_QWORD *)(a2 + 48);
  v4 = *(_DWORD *)(a2 + 56);
  if ( v4 >= 0x34 && v4 >= *(unsigned __int16 *)(v2 + 2) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    v6 = v5;
    *(_DWORD *)(a1 + 1856) = 2762082;
    if ( *(_WORD *)(v2 + 2) >= 0x3Cu )
    {
      *(_OWORD *)(a1 + 1000) = *(_OWORD *)v2;
      *(_OWORD *)(a1 + 1016) = *(_OWORD *)(v2 + 16);
      *(_OWORD *)(a1 + 1032) = *(_OWORD *)(v2 + 32);
      *(_QWORD *)(a1 + 1048) = *(_QWORD *)(v2 + 48);
      *(_DWORD *)(a1 + 1056) = *(_DWORD *)(v2 + 56);
    }
    else
    {
      memset((void *)(a1 + 1000), 0, 0x3CuLL);
      *(_OWORD *)(a1 + 1000) = *(_OWORD *)v2;
      *(_OWORD *)(a1 + 1016) = *(_OWORD *)(v2 + 16);
      *(_OWORD *)(a1 + 1032) = *(_OWORD *)(v2 + 32);
      *(_DWORD *)(a1 + 1048) = *(_DWORD *)(v2 + 48);
    }
    ndisCheckMiniportWakeUpCapable(a1);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  }
}
