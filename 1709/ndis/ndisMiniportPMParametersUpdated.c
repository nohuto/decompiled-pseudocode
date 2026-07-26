/*
 * XREFs of ndisMiniportPMParametersUpdated @ 0x1C00ADFCC
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0002460 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C0002F80 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMCapabilities @ 0x1C0048C24 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0048DF4 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0048EE4 (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0049570 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C00497B0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisPreSetPMParameters @ 0x1C00ADE04 (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00E1BF8 (ndisSetOpenEnableWakeUp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
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
