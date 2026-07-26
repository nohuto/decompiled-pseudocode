/*
 * XREFs of ndisReferenceVcPtr @ 0x1C0109894
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     ndisWmiFindInstanceName @ 0x1C00A7120 (ndisWmiFindInstanceName.c)
 *     ndisWmiQueryAllData @ 0x1C00A72F4 (ndisWmiQueryAllData.c)
 *     NdisClCloseCall @ 0x1C01060C0 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C01063C0 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C0106D40 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_SF_qDDLq @ 0x1C00531E0 (WPP_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al

  v2 = 0;
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qDDLq(0x29u, *(_QWORD *)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( *(int *)(a1 + 4) >= 0 )
  {
    ++*(_DWORD *)a1;
    v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v3);
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qDDLq(0x2Au, **(unsigned int **)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  return v2;
}
