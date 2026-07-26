/*
 * XREFs of ndisGetPatternEffectivePriority @ 0x1C0049F90
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0014340 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C00147F0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisMiniportPostAddWOLPattern @ 0x1C0020C08 (ndisMiniportPostAddWOLPattern.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C004A9B4 (ndisMiniportPostRemoveWoLPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetPatternEffectivePriority(__int64 a1)
{
  __int64 result; // rax
  __int64 **v2; // rdx
  unsigned int v3; // ecx

  result = 0xFFFFFFFFLL;
  v2 = (__int64 **)(a1 + 8);
  while ( v2 )
  {
    v3 = result;
    result = *((unsigned int *)v2 + 6);
    v2 = (__int64 **)*v2;
    if ( (unsigned int)result >= v3 )
      result = v3;
  }
  return result;
}
