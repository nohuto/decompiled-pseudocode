/*
 * XREFs of ?RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1_K2@Z @ 0x180025CD4
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024FD0 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053C20 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18001A320 (-RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180025C9C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 */

void __fastcall RmpActivityHostSetAggregateCommitValues(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_COMMIT_THRESHOLDS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // rdi
  _OWORD *v9; // r11
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  struct _RM_COMMIT_THRESHOLDS *v12; // r10
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v5 = a5;
  RmpCommitValuesAdd(a4, a5, &v13);
  v10 = v13;
  *((_OWORD *)a1 + 81) = *v9;
  *((_OWORD *)a1 + 82) = v9[1];
  *((_OWORD *)a1 + 83) = *(_OWORD *)a3;
  *((_OWORD *)a1 + 84) = *((_OWORD *)a3 + 1);
  RmpCommitThresholdsSubtractValue((struct _RM_ACTIVITY_HOST *)((char *)a1 + 1296), v10);
  RmpCommitThresholdsSubtractValue(v12, v11);
  *((_QWORD *)a1 + 160) = a4;
  *((_QWORD *)a1 + 159) = v5;
}
