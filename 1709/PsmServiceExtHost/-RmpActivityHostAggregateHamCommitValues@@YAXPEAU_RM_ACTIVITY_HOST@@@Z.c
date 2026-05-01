/*
 * XREFs of ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035650
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008140 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x1800018E0 (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COMMIT_THRESHOLDS@@1PEA_K2@Z @ 0x180006210 (-RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COM.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001847C (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001BC28 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1_K2@Z @ 0x180036518 (-RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1.c)
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
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v17[2]; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v18[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v19; // [rsp+80h] [rbp+7h] BYREF
  __int128 v20; // [rsp+90h] [rbp+17h]

  memset_0(&v19, 0, 0x20uLL);
  memset_0(v17, 0, sizeof(v17));
  v2 = 0LL;
  v15 = 0LL;
  v3 = 0LL;
  v16 = 0LL;
  v4 = 0LL;
  *((_QWORD *)&v18[0] + 1) = 2LL;
  v5 = 0LL;
  *(_QWORD *)&v18[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 2, 0);
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v18);
  if ( !Next )
    goto LABEL_25;
  v7 = 0x24704100001LL;
  do
  {
    if ( (*((_BYTE *)Next + 1500) & 0x20) != 0 )
    {
      EnforcedMemoryCap = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(Next);
      if ( !v4 )
        goto LABEL_18;
      if ( (*(_BYTE *)(v4 + 1498) & 0x20) == 0 )
      {
        v10 = *(int *)(v4 + 1456);
        if ( (unsigned int)v10 > 0x29 || !_bittest64(&v7, v10) )
          goto LABEL_29;
      }
      if ( (*(_BYTE *)(v8 + 1498) & 0x20) != 0 )
        goto LABEL_14;
      v11 = *(int *)(v8 + 1456);
      if ( (unsigned int)v11 <= 0x29 )
      {
        if ( _bittest64(&v7, v11) )
        {
LABEL_29:
          if ( (*(_BYTE *)(v8 + 1498) & 0x20) == 0 )
          {
            v12 = *(int *)(v8 + 1456);
            if ( (unsigned int)v12 > 0x29 || !_bittest64(&v7, v12) )
              goto LABEL_17;
          }
LABEL_14:
          if ( (*(_BYTE *)(v4 + 1498) & 0x20) != 0
            || (v13 = *(int *)(v4 + 1456), (unsigned int)v13 <= 0x29) && _bittest64(&v7, v13) )
          {
LABEL_17:
            if ( EnforcedMemoryCap <= v3 )
              goto LABEL_21;
          }
LABEL_18:
          v4 = v8;
          v3 = EnforcedMemoryCap;
        }
      }
    }
    else if ( !v4 )
    {
      RmpActivityHostAggregateResourceSetCommitValues(
        Next,
        (struct _RM_COMMIT_THRESHOLDS *)&v19,
        (struct _RM_COMMIT_THRESHOLDS *)v17,
        &v15,
        &v16);
    }
LABEL_21:
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v18);
  }
  while ( Next );
  if ( !v4 )
  {
    v2 = v15;
    v5 = v16;
LABEL_25:
    v18[0] = v19;
    v18[1] = v20;
    v19 = v17[0];
    v20 = v17[1];
    goto LABEL_26;
  }
  v14 = *(_QWORD *)(v4 + 1432);
  RmpResourceSetGetEnforcedCommitThresholds((struct _RM_RESOURCE_SET *)v14, (struct _RM_COMMIT_THRESHOLDS *)v18);
  RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v14, (struct _RM_COMMIT_THRESHOLDS *)&v19);
  v2 = *(_QWORD *)(v14 + 64);
  v5 = *(_QWORD *)(v14 + 56);
LABEL_26:
  RmpActivityHostSetAggregateCommitValues(
    a1,
    (struct _RM_COMMIT_THRESHOLDS *)v18,
    (struct _RM_COMMIT_THRESHOLDS *)&v19,
    v2,
    v5);
}
