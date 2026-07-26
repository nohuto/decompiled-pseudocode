/*
 * XREFs of ndisEnablePMParamForProtocolOffload @ 0x1C0049E14
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0014340 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004B894 (ndisUpdateWmiPMParamsForProtocolOffloads.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisEnablePMParamForProtocolOffload(__int64 a1, __int64 a2)
{
  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 1:
      *(_DWORD *)(a2 + 8) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 8) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 8) |= 0x80u;
      break;
  }
}
