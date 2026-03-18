/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C01F24BC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C01F8334 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C01F8580 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01FB7CC (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoRemovePdoObjects @ 0x1C020DA08 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoCreateGdiObjects @ 0x1C020E0A8 (DpiGdoCreateGdiObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C020E550 (DpiGdoDestroyGdiObjects.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C021350C (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v9; // rbx
  unsigned int v10; // r14d
  _QWORD *v11; // r15
  _QWORD *v12; // rsi
  unsigned __int16 v13; // ax
  PVOID PoolWithTag; // rax
  __int64 v15; // rcx
  int AdapterInfoIntegratedDisplay2; // eax
  __int64 v17; // rcx
  int AdapterInfoIntegratedDisplay; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v28; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  LODWORD(v9) = 0;
  if ( (*(_BYTE *)(v4 + 3737) & 4) == 0 )
  {
LABEL_26:
    LODWORD(v9) = DpiFdoInvalidateChildRelations(a1, 6LL, v5);
    if ( (int)v9 < 0 )
      goto LABEL_32;
    if ( (*(_BYTE *)(v4 + 3736) & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
      v9 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3728));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3728));
      if ( (int)v9 >= 0 )
      {
        LODWORD(v9) = DpiGdoCreateGdiObjects(a1, v7, v6);
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v25 + 24) = v9;
        WdLogEvent5_WdError(v25);
      }
    }
    if ( (int)v9 < 0 )
    {
LABEL_32:
      DpiGdoDestroyGdiObjects(a1);
      LOBYTE(v26) = 1;
      DpiPdoRemovePdoObjects(a1, v26, v5);
    }
    return (unsigned int)v9;
  }
  v10 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3168), 1u);
  v11 = *(_QWORD **)(v4 + 3328);
  if ( v11 == (_QWORD *)(v4 + 3328) )
    goto LABEL_22;
  while ( 1 )
  {
    v12 = v11 - 4;
    v11 = (_QWORD *)*v11;
    v13 = *((_WORD *)v12 + 46);
    if ( !v13 )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13 + 128LL, 0x74727044u);
    v12[12] = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, *((unsigned __int16 *)v12 + 46) + 128LL);
    v12[13] = v12[12] + 128LL;
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v4 + 3728)) >= 2400 )
    {
      AdapterInfoIntegratedDisplay2 = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v12);
      v9 = AdapterInfoIntegratedDisplay2;
      if ( AdapterInfoIntegratedDisplay2 == -1073741637 || AdapterInfoIntegratedDisplay2 == -1073741822 )
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_QueryAdapterInfoIntegrated2__private_propertyCache,
          12859558LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005F98C,
          0,
          v28);
      if ( (int)v9 < 0 )
        goto LABEL_17;
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v4 + 3728)) <= 2300 )
    {
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v12);
      v9 = AdapterInfoIntegratedDisplay;
      if ( AdapterInfoIntegratedDisplay < 0 )
      {
LABEL_17:
        v20 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v20 + 24) = v9;
LABEL_18:
        WdLogEvent5_WdError(v20);
        goto LABEL_21;
      }
    }
    LODWORD(v9) = DpiFdoValidateIntegratedDisplayDescriptor(v4, v12);
    if ( (int)v9 < 0 )
      goto LABEL_21;
    LOBYTE(v19) = *(_BYTE *)(v12[12] + 122LL);
    if ( ((1 << v19) & v10) != 0 )
    {
      LODWORD(v9) = -1073741811;
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = *(unsigned __int8 *)(v12[12] + 122LL);
      *(_QWORD *)(v20 + 32) = *((unsigned int *)v12 + 6);
      goto LABEL_18;
    }
    v10 |= 1 << v19;
LABEL_15:
    if ( v11 == (_QWORD *)(v4 + 3328) )
      goto LABEL_21;
  }
  v21 = WdLogNewEntry5_WdLowResource(v15);
  *(_QWORD *)(v21 + 24) = (int)v9;
  WdLogEvent5_WdLowResource(v21);
  LODWORD(v9) = -1073741670;
LABEL_21:
  v5 = a4;
LABEL_22:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3168));
  KeLeaveCriticalRegion();
  if ( ((v10 + 1) & v10) != 0 )
  {
    LODWORD(v9) = -1073741811;
    v23 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v23 + 24) = v10;
    WdLogEvent5_WdError(v23);
  }
  if ( (int)v9 >= 0 )
  {
    v6 = a3;
    v7 = a2;
    goto LABEL_26;
  }
  return (unsigned int)v9;
}
