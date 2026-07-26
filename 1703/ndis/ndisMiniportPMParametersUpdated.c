/*
 * XREFs of ndisMiniportPMParametersUpdated @ 0x1C00BB04C
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C001F0E0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMCapabilities @ 0x1C004B1C8 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004B398 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C004B488 (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C004BB50 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004BD90 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C004BF00 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisPreSetPMParameters @ 0x1C00BAE84 (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00D77AC (ndisSetOpenEnableWakeUp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMiniportPMParametersUpdated(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 0x80u) != 0LL )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 3784) + 360LL) + 104LL))(
             *(_QWORD *)(a1 + 24),
             a1 + 1120);
  return result;
}
