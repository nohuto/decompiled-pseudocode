/*
 * XREFs of CmpFreeValue @ 0x140476A50
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14044BA6C (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14044BABC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14044BF50 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x140477B34 (CmpSetValueKeyNew.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeKeyValues @ 0x1405A67A8 (CmpFreeKeyValues.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405A6C70 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSetValueKeyTombstone @ 0x14068EFD0 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFreeValueData @ 0x14047692C (CmpFreeValueData.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  bool v5; // zf
  void (__fastcall *v6)(ULONG_PTR, int *); // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v2 = BugCheckParameter3;
  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v8);
  if ( v4 )
  {
    v5 = CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(v4 + 8), *(_DWORD *)(v4 + 4)) == 0;
    v6 = *(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16);
    if ( !v5 )
    {
      v6(BugCheckParameter2, &v8);
      HvFreeCell(BugCheckParameter2, v2);
      return 1;
    }
    v6(BugCheckParameter2, &v8);
  }
  return 0;
}
