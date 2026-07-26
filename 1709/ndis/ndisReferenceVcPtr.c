/*
 * XREFs of ndisReferenceVcPtr @ 0x1C01128A4
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B6DF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00B7E2C (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00C526C (ndisWmiQueryAllData.c)
 *     ndisWmiFindInstanceName @ 0x1C00EC8E4 (ndisWmiFindInstanceName.c)
 *     NdisClCloseCall @ 0x1C010F0C0 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C010F3C0 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C010FD50 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_SF_qDDLq @ 0x1C005201C (WPP_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al

  v2 = 0;
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qDDLq(0x29u, *(_QWORD *)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( *(int *)(a1 + 4) >= 0 )
  {
    ++*(_DWORD *)a1;
    v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v3);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qDDLq(0x2Au, **(unsigned int **)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  return v2;
}
