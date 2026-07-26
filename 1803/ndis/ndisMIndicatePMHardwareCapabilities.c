/*
 * XREFs of ndisMIndicatePMHardwareCapabilities @ 0x1C004A0F8
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisCheckMiniportWakeUpCapable @ 0x1C0024C90 (ndisCheckMiniportWakeUpCapable.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisMIndicatePMHardwareCapabilities(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rbx
  KIRQL v5; // al
  _OWORD *v6; // rsi
  KIRQL v7; // r14

  v3 = *(_DWORD *)(a2 + 56);
  if ( v3 >= 0x34 )
  {
    v4 = *(_QWORD *)(a2 + 48);
    if ( v3 >= *(unsigned __int16 *)(v4 + 2) )
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v6 = (_OWORD *)(a1 + 1000);
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1856) = 2762082;
      v7 = v5;
      if ( *(_WORD *)(v4 + 2) >= 0x3Cu )
      {
        *v6 = *(_OWORD *)v4;
        *(_OWORD *)(a1 + 1016) = *(_OWORD *)(v4 + 16);
        *(_OWORD *)(a1 + 1032) = *(_OWORD *)(v4 + 32);
        *(_QWORD *)(a1 + 1048) = *(_QWORD *)(v4 + 48);
        *(_DWORD *)(a1 + 1056) = *(_DWORD *)(v4 + 56);
      }
      else
      {
        memset((void *)(a1 + 1000), 0, 0x3CuLL);
        *v6 = *(_OWORD *)v4;
        *(_OWORD *)(a1 + 1016) = *(_OWORD *)(v4 + 16);
        *(_OWORD *)(a1 + 1032) = *(_OWORD *)(v4 + 32);
        *(_DWORD *)(a1 + 1048) = *(_DWORD *)(v4 + 48);
      }
      ndisCheckMiniportWakeUpCapable(a1);
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
    }
  }
}
