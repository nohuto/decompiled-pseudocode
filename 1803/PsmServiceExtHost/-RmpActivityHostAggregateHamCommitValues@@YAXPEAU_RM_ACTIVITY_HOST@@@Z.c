/*
 * XREFs of ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053C20
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024FD0 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18002511C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180025180 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COMMIT_THRESHOLDS@@1PEA_K2@Z @ 0x180025B90 (-RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COM.c)
 *     ?RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1_K2@Z @ 0x180025CD4 (-RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1.c)
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271E0 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18005AB34 (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 */

void __fastcall RmpActivityHostAggregateHamCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  struct ExecutionModel::ResourceSet *Next; // r10
  __int64 v7; // rsi
  __int64 v8; // r10
  unsigned __int64 EnforcedMemoryCap; // r11
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  BOOL v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v19[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v20; // [rsp+80h] [rbp+7h] BYREF
  __int128 v21; // [rsp+90h] [rbp+17h]

  memset_0(&v20, 0, 0x20uLL);
  memset_0(v18, 0, sizeof(v18));
  v2 = 0LL;
  v16 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  v4 = 0LL;
  *((_QWORD *)&v19[0] + 1) = 2LL;
  v5 = 0LL;
  *(_QWORD *)&v19[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 2, 0);
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v19);
  if ( !Next )
    goto LABEL_29;
  v7 = 0x24704100001LL;
  do
  {
    if ( (*((_BYTE *)Next + 1500) & 0x20) != 0 )
    {
      EnforcedMemoryCap = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(Next);
      if ( !v4 )
        goto LABEL_19;
      if ( (*(_BYTE *)(v4 + 1498) & 0x20) != 0
        || (v10 = *(int *)(v4 + 1456), (unsigned int)v10 <= 0x29) && _bittest64(&v7, v10) )
      {
        if ( (*(_BYTE *)(v8 + 1498) & 0x20) != 0 )
          goto LABEL_15;
        v11 = *(int *)(v8 + 1456);
        if ( (unsigned int)v11 > 0x29 || !_bittest64(&v7, v11) )
        {
          v12 = 0;
LABEL_20:
          if ( !v12 )
          {
            EnforcedMemoryCap = v3;
            v8 = v4;
          }
          v3 = EnforcedMemoryCap;
          v4 = v8;
          goto LABEL_25;
        }
      }
      if ( (*(_BYTE *)(v8 + 1498) & 0x20) == 0 )
      {
        v13 = *(int *)(v8 + 1456);
        if ( (unsigned int)v13 > 0x29 || !_bittest64(&v7, v13) )
          goto LABEL_18;
      }
LABEL_15:
      if ( (*(_BYTE *)(v4 + 1498) & 0x20) != 0
        || (v14 = *(int *)(v4 + 1456), (unsigned int)v14 <= 0x29) && _bittest64(&v7, v14) )
      {
LABEL_18:
        v12 = EnforcedMemoryCap > v3;
        goto LABEL_20;
      }
LABEL_19:
      v12 = 1;
      goto LABEL_20;
    }
    if ( !v4 )
      RmpActivityHostAggregateResourceSetCommitValues(
        Next,
        (struct _RM_COMMIT_THRESHOLDS *)&v20,
        (struct _RM_COMMIT_THRESHOLDS *)v18,
        &v16,
        &v17);
LABEL_25:
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v19);
  }
  while ( Next );
  if ( !v4 )
  {
    v2 = v16;
    v5 = v17;
LABEL_29:
    v19[0] = v20;
    v19[1] = v21;
    v20 = v18[0];
    v21 = v18[1];
    goto LABEL_30;
  }
  v15 = *(_QWORD *)(v4 + 1432);
  RmpResourceSetGetEnforcedCommitThresholds((struct _RM_RESOURCE_SET *)v15, (struct _RM_COMMIT_THRESHOLDS *)v19);
  RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v15, (struct _RM_COMMIT_THRESHOLDS *)&v20);
  v2 = *(_QWORD *)(v15 + 72);
  v5 = *(_QWORD *)(v15 + 64);
LABEL_30:
  RmpActivityHostSetAggregateCommitValues(
    a1,
    (struct _RM_COMMIT_THRESHOLDS *)v19,
    (struct _RM_COMMIT_THRESHOLDS *)&v20,
    v2,
    v5);
}
