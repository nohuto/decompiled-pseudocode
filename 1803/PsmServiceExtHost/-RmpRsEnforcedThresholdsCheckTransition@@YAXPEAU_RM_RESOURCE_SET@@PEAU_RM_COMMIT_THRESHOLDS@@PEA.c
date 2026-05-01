/*
 * XREFs of ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053688
 * Callers:
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052C6C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180052F08 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271E0 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800533A4 (-RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z.c)
 *     ?RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053438 (-RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 *     ?RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x18005381C (-RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 */

void __fastcall RmpRsEnforcedThresholdsCheckTransition(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_COMMIT_THRESHOLDS *a2,
        struct _RM_RS_ENFORCEMENT_CONTEXT *a3)
{
  __int64 v6; // rdi
  void *v7; // rcx
  unsigned __int64 v8; // rax
  struct _RM_COMMIT_THRESHOLDS *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-58h]
  unsigned __int64 v15; // [rsp+38h] [rbp-50h]
  _BYTE v16[32]; // [rsp+40h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1872LL);
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 1432);
  if ( (unsigned int)RmpRsEnforcedThresholdsAreNecessary((struct _RM_RESOURCE_SET *)v6, a1, a2) )
  {
    if ( !a3 )
    {
      if ( v6 )
        a3 = *(struct _RM_RS_ENFORCEMENT_CONTEXT **)(v6 + 152);
      else
        a3 = (struct _RM_RS_ENFORCEMENT_CONTEXT *)*((_QWORD *)a1 + 19);
    }
    RtlQueryUnbiasedInterruptTime((char *)a3 + 48);
    *((_QWORD *)a3 + 6) += 10000LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 15) + 24LL) + 2396LL);
    RmpResourceSetGetEnforcedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v13);
    if ( v6 )
      RmpResourceSetGetEnforcedCommitThresholds((struct _RM_RESOURCE_SET *)v6, (struct _RM_COMMIT_THRESHOLDS *)v16);
    v8 = v15;
    v9 = (struct _RM_COMMIT_THRESHOLDS *)v16;
    v10 = v13[1];
    v11 = v13[0];
    if ( !v6 )
      v9 = a2;
    if ( *((_QWORD *)v9 + 3) > v15 )
      v8 = *((_QWORD *)v9 + 3);
    *((_QWORD *)a3 + 4) = v8;
    v12 = v14;
    if ( *((_QWORD *)v9 + 2) > v14 )
      v12 = *((_QWORD *)v9 + 2);
    *((_QWORD *)a3 + 3) = v12;
    *((_QWORD *)a3 + 2) = v10;
    *((_QWORD *)a3 + 1) = v11;
    if ( v6 && *(_QWORD *)(v6 + 152) )
    {
      *(_QWORD *)(v6 + 152) = 0LL;
      *((_QWORD *)a1 + 19) = a3;
      RmpObjectRelease(*(char **)a3);
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
        __fastfail(0xEu);
      *(_QWORD *)a3 = a1;
    }
    else if ( !*((_QWORD *)a1 + 19) )
    {
      RmpRsEnforcedThresholdsArmTimer(a3);
    }
  }
  else
  {
    if ( v6 )
      v7 = *(void **)(v6 + 152);
    else
      v7 = (void *)*((_QWORD *)a1 + 19);
    if ( v7 )
      RmpRsEnforcedThresholdsDisarmCheckDestroy(v7);
  }
}
