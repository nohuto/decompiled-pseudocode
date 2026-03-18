/*
 * XREFs of CmpIsMasterHive @ 0x1404D3FBC
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     CmpIsKeyDeleted @ 0x1404D4010 (CmpIsKeyDeleted.c)
 */

bool __fastcall CmpIsMasterHive(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  return v1 == CmpMasterHive
      || !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)
      && (*(_DWORD *)(v1 + 5360) & 0x10) == 0
      && (*(_DWORD *)(a1 + 176) & 0x2000000) == 0;
}
