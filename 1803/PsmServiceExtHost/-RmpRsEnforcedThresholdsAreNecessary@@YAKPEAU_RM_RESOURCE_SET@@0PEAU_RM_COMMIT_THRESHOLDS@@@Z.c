/*
 * XREFs of ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800533A4
 * Callers:
 *     ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053564 (-RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053688 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 * Callees:
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271E0 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpRsEnforcedThresholdsAreNecessary(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_RESOURCE_SET *a2,
        struct _RM_COMMIT_THRESHOLDS *a3)
{
  unsigned int v5; // ebx
  struct _RM_COMMIT_THRESHOLDS *v6; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+30h] [rbp-48h]
  unsigned __int64 v10; // [rsp+38h] [rbp-40h]
  _BYTE v11[32]; // [rsp+40h] [rbp-38h] BYREF

  RmpResourceSetGetReportedCommitThresholds(a2, (struct _RM_COMMIT_THRESHOLDS *)v8);
  v5 = 0;
  if ( a1 )
    RmpResourceSetGetEnforcedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v11);
  v6 = (struct _RM_COMMIT_THRESHOLDS *)v11;
  if ( !a1 )
    v6 = a3;
  if ( v10 < *((_QWORD *)v6 + 3) )
    return 1LL;
  LOBYTE(v5) = v9 < *((_QWORD *)v6 + 2);
  return v5;
}
