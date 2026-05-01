/*
 * XREFs of ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024FD0
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18005405C (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18002511C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180025180 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COMMIT_THRESHOLDS@@1PEA_K2@Z @ 0x180025B90 (-RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COM.c)
 *     ?RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1_K2@Z @ 0x180025CD4 (-RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800528FC (-RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053C20 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18005AB34 (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 */

void __fastcall RmpActivityHostAggregateCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  struct ExecutionModel::ResourceSet *Next; // rax
  struct _RM_ACTIVITY_HOST *v3; // rdx
  ExecutionModel::ResourceSet *v4; // r10
  struct ExecutionModel::ResourceSet *i; // rax
  struct ExecutionModel::ResourceSet *v6; // rax
  int v7; // ecx
  int v8; // r11d
  _QWORD *v9; // r15
  ExecutionModel::ResourceSet *v10; // rsi
  unsigned __int64 EnforcedMemoryCap; // r14
  unsigned __int64 v12; // rax
  struct ExecutionModel::ResourceSet *v13; // r10
  __int128 v14; // xmm0
  int v15; // r11d
  struct ExecutionModel::ResourceSet *v16; // r12
  int v17; // edi
  int v18; // r11d
  unsigned __int64 v19; // rax
  struct ExecutionModel::ResourceSet *v20; // r10
  int v21; // r11d
  int v22; // ecx
  __int128 v23; // [rsp+30h] [rbp-29h] BYREF
  __int128 v24; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v26[32]; // [rsp+70h] [rbp+17h] BYREF
  unsigned __int64 v27; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp+6Fh] BYREF

  if ( (*((_BYTE *)a1 + 804) & 1) != 0 )
  {
    RmpActivityHostAggregateHamCommitValues(a1);
    return;
  }
  memset_0(v26, 0, sizeof(v26));
  memset_0(v25, 0, sizeof(v25));
  v27 = 0LL;
  v28 = 0LL;
  *((_QWORD *)&v23 + 1) = 1LL;
  *(_QWORD *)&v23 = RmpActivityHostEnumerateResourceSetGetFirst(a1, 1LL, 0LL);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v23);
    v4 = Next;
    if ( !Next )
      break;
    v8 = *((_DWORD *)Next + 363);
    if ( (v8 & 0x20) == 0 )
    {
      if ( *((_DWORD *)Next + 350) == 1 )
        goto LABEL_17;
      v9 = (_QWORD *)((char *)Next + 1872);
      v10 = (ExecutionModel::ResourceSet *)*((_QWORD *)Next + 234);
      if ( v10 )
      {
        if ( RmpResourceSetIsValidPredecessor(*((struct ExecutionModel::ResourceSet **)Next + 234), v3) )
        {
          EnforcedMemoryCap = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(v4);
          v12 = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(v10);
          v14 = v23;
          *((_DWORD *)v13 + 363) = v15 | 0x20;
          v16 = v13;
          *((_DWORD *)v10 + 363) |= 0x20u;
          v17 = (*((_DWORD *)v13 + 363) >> 6) & 1;
          v24 = v14;
          if ( EnforcedMemoryCap <= v12 )
          {
            v16 = v10;
            EnforcedMemoryCap = v12;
          }
          do
          {
            v18 = *((_DWORD *)v13 + 363);
            if ( (v18 & 0x40) != 0 )
              v17 = 1;
            if ( (v18 & 0x20) == 0 && *((_DWORD *)v13 + 350) != 1 && *((_QWORD *)v13 + 234) == *v9 )
            {
              v19 = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(v13);
              *((_DWORD *)v20 + 363) = v21 | 0x20;
              if ( v19 <= EnforcedMemoryCap )
              {
                v20 = v16;
                v19 = EnforcedMemoryCap;
              }
              v16 = v20;
              EnforcedMemoryCap = v19;
            }
            v13 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v24);
          }
          while ( v13 );
          if ( !v17 )
            RmpActivityHostAggregateResourceSetCommitValues(
              v16,
              (struct _RM_COMMIT_THRESHOLDS *)v26,
              (struct _RM_COMMIT_THRESHOLDS *)v25,
              &v28,
              &v27);
        }
        else if ( (v8 & 0x40) == 0 )
        {
LABEL_17:
          *((_DWORD *)v4 + 363) = v8 | 0x20;
        }
      }
    }
  }
  *((_QWORD *)&v23 + 1) = 1LL;
  *(_QWORD *)&v23 = RmpActivityHostEnumerateResourceSetGetFirst(a1, 1LL, 0LL);
  for ( i = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v23);
        i;
        i = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v23) )
  {
    v22 = *((_DWORD *)i + 363);
    if ( (v22 & 0x20) != 0 )
    {
      *((_DWORD *)i + 363) = v22 & 0xFFFFFFDF;
    }
    else if ( (v22 & 0x40) == 0 || *((_QWORD *)i + 234) )
    {
      RmpActivityHostAggregateResourceSetCommitValues(
        i,
        (struct _RM_COMMIT_THRESHOLDS *)v26,
        (struct _RM_COMMIT_THRESHOLDS *)v25,
        &v28,
        &v27);
    }
  }
  *((_QWORD *)&v23 + 1) = 2LL;
  *(_QWORD *)&v23 = RmpActivityHostEnumerateResourceSetGetFirst(a1, 2LL, 0LL);
  while ( 1 )
  {
    v6 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v23);
    if ( !v6 )
      break;
    v7 = *((_DWORD *)v6 + 363);
    if ( (v7 & 0x20) != 0 )
      *((_DWORD *)v6 + 363) = v7 & 0xFFFFFFDF;
    else
      RmpActivityHostAggregateResourceSetCommitValues(
        v6,
        (struct _RM_COMMIT_THRESHOLDS *)v26,
        (struct _RM_COMMIT_THRESHOLDS *)v25,
        &v28,
        &v27);
  }
  RmpActivityHostSetAggregateCommitValues(
    a1,
    (struct _RM_COMMIT_THRESHOLDS *)v26,
    (struct _RM_COMMIT_THRESHOLDS *)v25,
    v28,
    v27);
}
