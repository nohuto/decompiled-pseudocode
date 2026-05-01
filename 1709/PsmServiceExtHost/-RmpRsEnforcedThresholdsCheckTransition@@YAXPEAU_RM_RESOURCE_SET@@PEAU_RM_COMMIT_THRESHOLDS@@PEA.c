/*
 * XREFs of ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180018344
 * Callers:
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001825C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180034DD8 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800183E0 (-RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z.c)
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001BC28 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800350A4 (-RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 *     ?RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800351CC (-RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 */

void __fastcall RmpRsEnforcedThresholdsCheckTransition(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_COMMIT_THRESHOLDS *a2,
        struct _RM_RS_ENFORCEMENT_CONTEXT *a3)
{
  struct _RM_COMMIT_THRESHOLDS *v4; // rbp
  __int64 v6; // rdi
  void *v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-58h]
  unsigned __int64 v14; // [rsp+38h] [rbp-50h]
  _BYTE v15[32]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 1880LL);
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 1432);
  if ( RmpRsEnforcedThresholdsAreNecessary((struct _RM_RESOURCE_SET *)v6, a1, a2) )
  {
    if ( !a3 )
    {
      if ( v6 )
        a3 = *(struct _RM_RS_ENFORCEMENT_CONTEXT **)(v6 + 144);
      else
        a3 = (struct _RM_RS_ENFORCEMENT_CONTEXT *)*((_QWORD *)a1 + 18);
    }
    RtlQueryUnbiasedInterruptTime((char *)a3 + 48);
    *((_QWORD *)a3 + 6) += 10000LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 24LL) + 2060LL);
    RmpResourceSetGetEnforcedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v12);
    if ( v6 )
    {
      RmpResourceSetGetEnforcedCommitThresholds((struct _RM_RESOURCE_SET *)v6, (struct _RM_COMMIT_THRESHOLDS *)v15);
      v4 = (struct _RM_COMMIT_THRESHOLDS *)v15;
    }
    v8 = v14;
    v9 = v12[1];
    if ( *((_QWORD *)v4 + 3) > v14 )
      v8 = *((_QWORD *)v4 + 3);
    v10 = v12[0];
    *((_QWORD *)a3 + 4) = v8;
    v11 = v13;
    if ( *((_QWORD *)v4 + 2) > v13 )
      v11 = *((_QWORD *)v4 + 2);
    *((_QWORD *)a3 + 3) = v11;
    *((_QWORD *)a3 + 2) = v9;
    *((_QWORD *)a3 + 1) = v10;
    if ( v6 && *(_QWORD *)(v6 + 144) )
    {
      *(_QWORD *)(v6 + 144) = 0LL;
      *((_QWORD *)a1 + 18) = a3;
      RmpObjectRelease(*(char **)a3);
      RmpObjectAddRef(a1);
      *(_QWORD *)a3 = a1;
    }
    else if ( !*((_QWORD *)a1 + 18) )
    {
      RmpRsEnforcedThresholdsArmTimer(a3);
    }
  }
  else
  {
    if ( v6 )
      v7 = *(void **)(v6 + 144);
    else
      v7 = (void *)*((_QWORD *)a1 + 18);
    if ( v7 )
      RmpRsEnforcedThresholdsDisarmCheckDestroy(v7);
  }
}
