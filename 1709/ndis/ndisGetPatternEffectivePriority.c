/*
 * XREFs of ndisGetPatternEffectivePriority @ 0x1C0048B80
 * Callers:
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0002550 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisMiniportPostAddWOLPattern @ 0x1C0003318 (ndisMiniportPostAddWOLPattern.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0049570 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C00497B0 (ndisOidPostRemovePMProtocolOffload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetPatternEffectivePriority(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx
  unsigned int v3; // ecx

  result = 0xFFFFFFFFLL;
  v2 = (__int64 *)(a1 + 8);
  while ( v2 )
  {
    v3 = *((_DWORD *)v2 + 6);
    v2 = (__int64 *)*v2;
    if ( v3 < (unsigned int)result )
      result = v3;
  }
  return result;
}
