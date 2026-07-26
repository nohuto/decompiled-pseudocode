/*
 * XREFs of ndisMIndicatePMCapabilities @ 0x1C004B1C8
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMIndicatePMCapabilities(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  KIRQL v4; // cl

  v2 = *(_DWORD **)(a2 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2762120;
  if ( (unsigned int)(v2[12] - 2) <= 2 )
    *(_DWORD *)(a1 + 1132) = 1;
  else
    *(_DWORD *)(a1 + 1132) &= ~1u;
  *(_DWORD *)(a1 + 1124) &= v2[2];
  if ( (unsigned int)(v2[10] - 2) <= 2 )
    *(_DWORD *)(a1 + 1124) |= 2u;
  *(_DWORD *)(a1 + 1128) &= v2[7];
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return ndisMiniportPMParametersUpdated(a1);
}
