/*
 * XREFs of ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024B13C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005D274 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14024B58C (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14024C5F4 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14024CF30 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14001F170 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwEnabled @ 0x1400587E0 (SmEtwEnabled.c)
 *     ?StDeviceIoIsFailed@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z @ 0x14024ABAC (-StDeviceIoIsFailed@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024AD84 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14024AFFC (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x14024B48C (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14024BC4C (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14024CE8C (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmEtwLogRegionOp @ 0x14024D7AC (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v5; // eax
  bool v6; // zf
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 i; // r14
  __int64 v10; // r15
  __int64 j; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // rcx
  int v14; // ebp
  _DWORD *v15; // rax
  unsigned __int16 v16; // r8
  int v17; // r15d
  ULONGLONG *v18; // rax
  char v19; // r8
  unsigned int v20; // r12d
  unsigned int IsCurrentRegion; // eax
  unsigned int v22; // eax
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 k; // rbp
  LARGE_INTEGER v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  _DWORD *v29; // rax
  LARGE_INTEGER v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 m; // rcx
  __int64 v37; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+90h] [rbp+18h]

  v3 = a2 + 8;
  v5 = *(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 812);
  v6 = *(_QWORD *)(a2 + 16) == 0LL;
  v7 = *(_QWORD *)(a1 + 1016);
  v39 = v7;
  v38 = v5;
  v8 = v5;
  if ( v6 )
  {
    for ( i = a1 + 1088; *(_DWORD *)i != v5; i += 24LL )
      ;
    v10 = *(_QWORD *)(a1 + 984);
    for ( j = *(_QWORD *)(v10 + 24); *(_DWORD *)j < *(_DWORD *)(a1 + 784); j += 32LL )
      ;
    if ( v3 == *(_QWORD *)(j + 24) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v13 = 7LL * *(_QWORD *)(j + 8);
      *(_QWORD *)(j + 24) |= 1uLL;
      *(_QWORD *)(j + 8) = (unsigned __int64)(PerformanceCounter.QuadPart + v13 - *(_QWORD *)(j + 16)) >> 3;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 8));
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v3, &v37) )
    {
      v14 = v37;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v37);
    }
    else
    {
      v15 = *(_DWORD **)(a1 + 1800);
      v14 = 0;
      if ( v15 )
        ++*v15;
    }
    v16 = *(_WORD *)(v7 + 2 * v8);
    if ( v16 < 0x8000u )
    {
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1876);
        v17 = 1;
      }
      else
      {
        v17 = 0;
      }
      v20 = v38;
      ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v38);
    }
    else
    {
      *(_WORD *)(v7 + 2 * v8) = v16 & 0x7FFF;
      v17 = 1;
      v18 = SmEtwEnabled(0);
      v20 = v38;
      if ( v18 )
        SmEtwLogRegionOp((_DWORD)v18, 4, a1, v38, v14, v19, *(_BYTE *)(*(_QWORD *)(a1 + 1032) + v8));
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1872);
        if ( (*(_WORD *)(v39 + 2 * v8) & 0x1FFF) != 0 )
          v17 = 0;
      }
    }
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    if ( v17 )
    {
      if ( *(_DWORD *)i != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(i + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(i + 16), 0);
      }
      *(_QWORD *)i = 0LL;
      *(_QWORD *)(i + 8) = 0LL;
      *(_QWORD *)(i + 16) = 0LL;
      *(_DWORD *)i = -1;
      IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v20);
      if ( IsCurrentRegion != 8 )
        ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, IsCurrentRegion, 0xFFFFFFFF);
    }
  }
  else
  {
    v22 = *(_DWORD *)(a2 + 28);
    if ( (v22 & 8) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 984);
      v24 = v22 >> 5;
      for ( k = *(_QWORD *)(v23 + 16); *(_DWORD *)k < v24; k += 32LL )
        ;
      if ( v3 == *(_QWORD *)(k + 24) )
      {
        v26 = KeQueryPerformanceCounter(0LL);
        v27 = 7LL * *(_QWORD *)(k + 8);
        *(_QWORD *)(k + 24) |= 1uLL;
        *(_QWORD *)(k + 8) = (unsigned __int64)(v26.QuadPart + v27 - *(_QWORD *)(k + 16)) >> 3;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 8));
    }
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v3, &v37) )
    {
      v14 = v37;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v37);
    }
    else
    {
      v14 = ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(a1, v28, v3);
      v29 = *(_DWORD **)(a1 + 1800);
      if ( v29 )
      {
        if ( v14 >= 0 )
          ++*v29;
        if ( (*(_DWORD *)(v3 + 20) & 4) == 0 )
        {
          v30 = KeQueryPerformanceCounter(0LL);
          v31 = *(_QWORD *)(v3 + 8);
          LODWORD(v37) = *(_DWORD *)(v31 + 4);
          v32 = *(_DWORD *)(v31 + 8);
          v33 = *(_QWORD *)(a1 + 1800);
          HIDWORD(v37) = v32;
          v34 = v30.QuadPart - v37;
          m = *(_QWORD *)(v33 + 1328);
          if ( *(_QWORD *)m < v34 || m != *(_QWORD *)(v33 + 1344) && *(_QWORD *)(m - 16) >= v34 )
          {
            for ( m = *(_QWORD *)(v33 + 1344); *(_QWORD *)m < v34; m += 16LL )
              ;
            *(_QWORD *)(v33 + 1328) = m;
          }
          ++*(_DWORD *)(m + 8);
        }
      }
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup((_DWORD *)a1, a2);
  }
  return (unsigned int)v14;
}
