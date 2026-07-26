/*
 * XREFs of ndisMiniportPMParametersUpdated @ 0x1C00C5BBC
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0014340 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C00147F0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C0020870 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMCapabilities @ 0x1C004A038 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004A200 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C004A30C (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004AB10 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00C5A04 (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00E33DC (ndisSetOpenEnableWakeUp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
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
