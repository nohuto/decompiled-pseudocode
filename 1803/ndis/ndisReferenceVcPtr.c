/*
 * XREFs of ndisReferenceVcPtr @ 0x1C01148E4
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQueryAllData @ 0x1C00AC238 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00AD358 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiFindInstanceName @ 0x1C00EF618 (ndisWmiFindInstanceName.c)
 *     NdisClCloseCall @ 0x1C01110C0 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C01113C0 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C0111D60 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_SF_qDDLq @ 0x1C005298C (WPP_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al

  v2 = 0;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qDDLq(0x29u, *(_QWORD *)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( *(int *)(a1 + 4) >= 0 )
  {
    ++*(_DWORD *)a1;
    v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v3);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qDDLq(0x2Au, **(unsigned int **)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  return v2;
}
