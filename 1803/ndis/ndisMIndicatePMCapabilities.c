/*
 * XREFs of ndisMIndicatePMCapabilities @ 0x1C004A038
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisMiniportPMParametersUpdated @ 0x1C00C5BBC (ndisMiniportPMParametersUpdated.c)
 */

__int64 __fastcall ndisMIndicatePMCapabilities(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  KIRQL v4; // cl
  int v5; // edx

  v2 = *(_DWORD **)(a2 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2762123;
  if ( (unsigned int)(v2[12] - 2) <= 2 )
    *(_DWORD *)(a1 + 1132) = 1;
  else
    *(_DWORD *)(a1 + 1132) &= ~1u;
  v5 = *(_DWORD *)(a1 + 1124) & v2[2];
  *(_DWORD *)(a1 + 1124) = v5;
  if ( (unsigned int)(v2[10] - 2) <= 2 )
    *(_DWORD *)(a1 + 1124) = v5 | 2;
  *(_DWORD *)(a1 + 1128) &= v2[7];
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return ndisMiniportPMParametersUpdated(a1);
}
