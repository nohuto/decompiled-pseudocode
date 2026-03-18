/*
 * XREFs of CmpIsMasterHive @ 0x140569B5C
 * Callers:
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmpVEExecuteCreateLogic @ 0x140569AAC (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpIsKeyDeleted @ 0x140569BB0 (CmpIsKeyDeleted.c)
 */

bool __fastcall CmpIsMasterHive(__int64 a1)
{
  _DWORD *v1; // rdi

  v1 = *(_DWORD **)(a1 + 24);
  return v1 == CmpMasterHive
      || !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)
      && (v1[1340] & 0x10) == 0
      && (*(_DWORD *)(a1 + 176) & 0x2000000) == 0;
}
