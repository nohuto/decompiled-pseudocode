/*
 * XREFs of ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0
 * Callers:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EDB4 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011CCC (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180006F4C (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180007B50 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180007C00 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007F60 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008140 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000CE50 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000E7D0 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EEC0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013FCC (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014000 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014730 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001825C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x18001BE88 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F83C (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  __int64 v3; // rsi
  unsigned int (__fastcall *v4)(ExecutionModel::ResourceSet *__hidden); // r9
  __int64 v5; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // ebp
  int v13; // r13d
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  unsigned int (__fastcall *v18)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned int (__fastcall *v19)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned int (__fastcall *v20)(ExecutionModel::BaseResourceSet *__hidden); // rax
  __int64 v21; // r14
  unsigned int (__fastcall *v22)(ExecutionModel::BaseResourceSet *__hidden); // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // r15
  int v33; // ebp
  struct _RM_ACTIVITY_HOST **v34; // r14
  __int64 v35; // rbx
  int v36; // ebp
  unsigned int (__fastcall *v38)(ExecutionModel::BaseResourceSet *__hidden); // rax
  unsigned int (__fastcall *v39)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned __int64 v40; // [rsp+20h] [rbp-158h] BYREF
  unsigned __int64 v41; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v42; // [rsp+30h] [rbp-148h] BYREF
  ExecutionModel::ResourceManager *v43; // [rsp+38h] [rbp-140h]
  struct _RM_ACTIVITY_HOST **v44; // [rsp+40h] [rbp-138h]
  unsigned __int64 v45; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v46[5]; // [rsp+50h] [rbp-128h] BYREF
  int v47; // [rsp+78h] [rbp-100h]
  int v48; // [rsp+80h] [rbp-F8h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+90h] [rbp-E8h] BYREF

  v3 = *((_QWORD *)a2 + 235);
  v4 = ExecutionModel::ResourceSet::Release;
  v5 = *((_QWORD *)a2 + 180);
  v44 = a3;
  v43 = this;
  if ( v3 )
  {
    v38 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)v3 + 8LL);
    if ( v38 == ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)v3);
    else
      ((void (__fastcall *)(__int64, struct ExecutionModel::ResourceSet *, struct _RM_ACTIVITY_HOST **, unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden)))v38)(
        v3,
        a2,
        a3,
        ExecutionModel::ResourceSet::Release);
    if ( *(_DWORD *)(v3 + 1400) != 2 || !*(_BYTE *)(v3 + 12) )
    {
      v36 = -2147220218;
      goto LABEL_42;
    }
    ExecutionModel::ResourceManager::TransitionResources(this, (struct ExecutionModel::ResourceSet *)v3, a2);
    v36 = RmpResourceSetTransition(*(struct _RM_RESOURCE_SET **)(v3 + 1432), *((struct _RM_RESOURCE_SET **)a2 + 179));
    if ( v36 < 0 )
      goto LABEL_42;
    RmpActivityHostUnapplyResourceSet((struct _RM_ACTIVITY_HOST *)v5, (struct ExecutionModel::ResourceSet *)v3, 1u);
    v4 = ExecutionModel::ResourceSet::Release;
  }
  else
  {
    v8 = *(_QWORD *)(*((_QWORD *)a2 + 179) + 152LL);
    if ( v8 )
      v9 = *(_QWORD *)(v8 + 24);
    else
      v9 = *((_QWORD *)a2 + 191);
    v10 = (unsigned __int64 *)(v5 + 1144);
    v11 = *(_QWORD *)(v5 + 1144);
    if ( v11 == v9 )
      *v10 = 0LL;
    else
      RmpCommitValuesSubtract(v11, v9, v10);
  }
  if ( *(_DWORD *)(v5 + 56) == 1 )
    v12 = *(_DWORD *)(v5 + 88);
  else
    v12 = 0;
  v13 = 2;
  if ( !*((_QWORD *)a2 + 180) )
    goto LABEL_67;
  v14 = (_QWORD *)((char *)a2 + 1416);
  v15 = *((_QWORD *)a2 + 177);
  if ( *(struct ExecutionModel::ResourceSet **)(v15 + 8) != (struct ExecutionModel::ResourceSet *)((char *)a2 + 1416)
    || (v16 = (_QWORD *)*((_QWORD *)a2 + 178), (_QWORD *)*v16 != v14) )
  {
    __fastfail(3u);
  }
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *v14 = 0LL;
  *((_QWORD *)a2 + 178) = 0LL;
  --*(_DWORD *)(v5 + 832);
  v17 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 362) = 2;
  v18 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(v17 + 16);
  if ( v18 == v4 )
    ExecutionModel::ResourceSet::Release(a2);
  else
    v18(a2);
  v19 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)a2 + 16LL);
  if ( v19 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(a2);
  else
    v19(a2);
  if ( !*((_QWORD *)a2 + 180) )
  {
LABEL_67:
    RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v5);
    *((_QWORD *)a2 + 180) = v5;
  }
  v20 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)a2 + 8LL);
  if ( v20 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef(a2);
  else
    v20(a2);
  v21 = v5 + 840;
  v22 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)a2 + 8LL);
  if ( v22 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef(a2);
  else
    v22(a2);
  v23 = *(_QWORD *)v21;
  v24 = (_QWORD *)((char *)a2 + 1416);
  if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
    __fastfail(3u);
  *v24 = v23;
  *((_QWORD *)a2 + 178) = v21;
  *(_QWORD *)(v23 + 8) = v24;
  *(_QWORD *)v21 = v24;
  ++*(_DWORD *)(v5 + 856);
  *((_DWORD *)a2 + 362) = 1;
  *((_QWORD *)a2 + 18) = *(_QWORD *)(v5 + 24);
  if ( *((_QWORD *)a2 + 235) )
    ATL::AtlComPtrAssign((struct IUnknown **)a2 + 235, 0LL);
  *((_DWORD *)a2 + 2) = v12;
  *((_BYTE *)a2 + 12) = 1;
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v5, 3u);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v5, 3u);
  QueryUnbiasedInterruptTime((PULONGLONG)(v5 + 1312));
  if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v5) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v5 + 48) + 88LL));
  v25 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 968) = 0LL;
  v26 = *(_QWORD *)(v25 + 1896);
  v27 = *(_DWORD *)(v26 + 240);
  if ( (v27 & 3) == 0 )
  {
    *(_DWORD *)(v26 + 240) = v27 | 1;
    TpPostWork(*(_QWORD *)(v26 + 224));
  }
  RmpResourceSetUpdateElasticRecipient(*((struct _RM_RESOURCE_SET **)a2 + 179));
  v40 = 0LL;
  RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)v5, 0LL, &v40, &v45);
  RmpActivityHostAggregateCommitValues((struct _RM_ACTIVITY_HOST *)v5);
  memset_0(v46, 0, 0x38uLL);
  v47 = 1;
  v48 = 100;
  v28 = RmpActivityHostComputeCommitLimit((struct _RM_ACTIVITY_HOST *)v5);
  v29 = *(_QWORD *)(v5 + 1184);
  v30 = v40;
  v31 = *(_QWORD *)(v5 + 1208);
  v46[2] = v28;
  if ( v40 >= v29 )
  {
    if ( v40 < *(_QWORD *)(v5 + 1192) )
    {
      v32 = v29;
      v29 = *(_QWORD *)(v5 + 1192);
    }
    else if ( v40 < *(_QWORD *)(v5 + 1200) )
    {
      v32 = *(_QWORD *)(v5 + 1192);
      v29 = *(_QWORD *)(v5 + 1200);
    }
    else
    {
      v32 = *(_QWORD *)(v5 + 1200);
      v29 = -1LL;
    }
  }
  else
  {
    v32 = 0LL;
  }
  RmpActivityHostComputeCommitEstimate(v40, v31, &v41, &v42);
  if ( v32 <= v41 )
    v32 = v41;
  if ( v30 <= v31 && v29 >= v42 )
    v29 = v42;
  v46[0] = v32;
  v46[1] = v29;
  if ( v30 >= *(_QWORD *)(v5 + 1184) )
  {
    if ( v30 >= *(_QWORD *)(v5 + 1192) )
      v13 = 4 - (v30 < *(_QWORD *)(v5 + 1200));
  }
  else
  {
    v13 = 1;
  }
  RmpActivityHostPopulateRunnabilitySettings((struct _RM_ACTIVITY_HOST *)v5, (struct _RM_ENFORCEMENT_SETTINGS *)v46);
  RmpActivityHostUpdateCommitUseState(v5, v30, v13);
  v33 = RmpActivityHostApplyEnforcementSettings(
          (struct _RM_ACTIVITY_HOST *)v5,
          (struct _RM_ENFORCEMENT_SETTINGS *)v46,
          0);
  if ( v33 < 0 )
  {
    v36 = v33 | 0x10000000;
  }
  else
  {
    ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(v43, (struct _RM_ACTIVITY_HOST *)v5);
    v34 = v44;
    if ( v44 )
    {
      v35 = *((_QWORD *)a2 + 180);
      if ( _InterlockedIncrement((volatile signed __int32 *)(v35 + 16)) < 1 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = -1073741675;
        pExceptionRecord.ExceptionFlags = 1;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      *v34 = (struct _RM_ACTIVITY_HOST *)v35;
    }
    v36 = 0;
  }
LABEL_42:
  if ( v3 )
  {
    v39 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v3 + 16LL);
    if ( v39 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v3);
    else
      v39((ExecutionModel::ResourceSet *)v3);
  }
  return (unsigned int)v36;
}
