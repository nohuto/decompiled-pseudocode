/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006DB8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001CBEC (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180003258 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180006D54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800548F8 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18005C5BC (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(struct _RM_ACTIVITY_HOST *a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  struct _RM_ACTIVITY_HOST *v4; // rcx
  _DWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rsi
  HANDLE *v10; // rsi
  struct _RM_ACTIVITY_HOST *v11; // rcx
  _QWORD *v12; // rdx

  v2 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 2232LL) + 112LL);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v10 = (HANDLE *)v3[4];
    (*((void (__fastcall **)(HANDLE *))*v10 + 1))(v10);
    v11 = (struct _RM_ACTIVITY_HOST *)v10[182];
    v3 = (_QWORD *)*v3;
    if ( a1 == v11 )
    {
      if ( v11 )
      {
        RmpObjectRelease(v11);
        v10[182] = 0LL;
      }
      if ( (*((unsigned __int8 (__fastcall **)(HANDLE *))*v10 + 7))(v10) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v10);
      else
        ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v10, 1);
    }
    (*((void (__fastcall **)(HANDLE *))*v10 + 2))(v10);
  }
  v4 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 129);
  v5 = 0LL;
  if ( v4 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1032) )
    v5 = (_DWORD *)((char *)v4 - 1416);
  if ( v5 )
  {
    do
    {
      v8 = *((_QWORD *)v5 + 177);
      v9 = 0LL;
      if ( v8 != *((_QWORD *)v5 + 180) + 24 * ((int)v5[362] + 42LL) )
        v9 = (_DWORD *)(v8 - 1416);
      if ( (v5[363] & 4) != 0 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
        ExecutionModel::ResourceSet::PerformReleaseResources((ExecutionModel::ResourceSet *)v5, 0);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v5 = v9;
    }
    while ( v9 );
  }
  *((_QWORD *)a1 + 161) = 0LL;
  *((_QWORD *)a1 + 170) = 0LL;
  *((_QWORD *)a1 + 171) = 0LL;
  *((_DWORD *)a1 + 344) = 0;
  RmpActivityHostResourceSetsChanged(a1, 2u);
  if ( (*((_BYTE *)a1 + 804) & 1) == 0 )
    RmpActivityHostComputeAndApplyEnforcementSettings(a1);
  v6 = (_QWORD *)((char *)a1 + 1200);
  v7 = *((_QWORD *)a1 + 150);
  if ( v7 )
  {
    if ( *(_QWORD **)(v7 + 8) != v6 || (v12 = (_QWORD *)*((_QWORD *)a1 + 151), (_QWORD *)*v12 != v6) )
      __fastfail(3u);
    *v12 = v7;
    *(_QWORD *)(v7 + 8) = v12;
    *v6 = 0LL;
    *((_QWORD *)a1 + 151) = 0LL;
    RmpObjectRelease(a1);
  }
  if ( *((_QWORD *)a1 + 178) )
    RmpActivityHostRemoveFromRemediationGroup(a1, 1u);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 7) + 80LL));
  RmpActivityHostCheckQueueDelete(a1);
}
