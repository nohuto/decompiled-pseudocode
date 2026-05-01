/*
 * XREFs of ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800183E0
 * Callers:
 *     ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800182E8 (-RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180018344 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 * Callees:
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001847C (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpRsEnforcedThresholdsAreNecessary(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_RESOURCE_SET *a2,
        struct _RM_COMMIT_THRESHOLDS *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int128 v8; // xmm1
  _OWORD v9[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-28h]
  unsigned __int64 v12; // [rsp+58h] [rbp-20h]

  RmpResourceSetGetReportedCommitThresholds(a2, (struct _RM_COMMIT_THRESHOLDS *)v10);
  v5 = 0;
  if ( a1 )
  {
    v6 = *((_QWORD *)a1 + 18);
    if ( v6 )
    {
      v8 = *(_OWORD *)(v6 + 24);
      v9[0] = *(_OWORD *)(v6 + 8);
      v9[1] = v8;
    }
    else
    {
      RmpResourceSetGetReportedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v9);
    }
    a3 = (struct _RM_COMMIT_THRESHOLDS *)v9;
  }
  if ( v12 < *((_QWORD *)a3 + 3) )
    return 1LL;
  LOBYTE(v5) = v11 < *((_QWORD *)a3 + 2);
  return v5;
}
