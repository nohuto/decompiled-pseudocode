/*
 * XREFs of CmpFreeValue @ 0x1405154A4
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x1405155F8 (CmpSetValueKeyNew.c)
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14054F244 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14054F694 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405DF734 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSetValueKeyTombstone @ 0x1406F31B8 (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValues @ 0x1406FDD28 (CmpFreeKeyValues.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1407042E8 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpFreeValueData @ 0x140516980 (CmpFreeValueData.c)
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
    v5 = (unsigned __int8)CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(v4 + 8)) == 0;
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
