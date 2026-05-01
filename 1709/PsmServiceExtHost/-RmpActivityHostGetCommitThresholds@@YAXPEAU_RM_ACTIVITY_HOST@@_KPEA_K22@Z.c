/*
 * XREFs of ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z @ 0x180007A94
 * Callers:
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005BC4 (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180007B50 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 */

void __fastcall RmpActivityHostGetCommitThresholds(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = *((_QWORD *)a1 + 148);
  v7 = *((_QWORD *)a1 + 151);
  if ( a2 >= v5 )
  {
    if ( a2 < *((_QWORD *)a1 + 149) )
    {
      v10 = *((_QWORD *)a1 + 148);
      v5 = *((_QWORD *)a1 + 149);
    }
    else if ( a2 < *((_QWORD *)a1 + 150) )
    {
      v10 = *((_QWORD *)a1 + 149);
      v5 = *((_QWORD *)a1 + 150);
    }
    else
    {
      v10 = *((_QWORD *)a1 + 150);
      v5 = -1LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  RmpActivityHostComputeCommitEstimate(a2, *((_QWORD *)a1 + 151), &v13, &v14);
  v11 = v14;
  if ( v10 <= v13 )
    v10 = v13;
  if ( a2 <= v7 && v5 >= v14 )
    v5 = v14;
  v12 = a5;
  *a3 = v10;
  *a4 = v5;
  *v12 = v11;
}
