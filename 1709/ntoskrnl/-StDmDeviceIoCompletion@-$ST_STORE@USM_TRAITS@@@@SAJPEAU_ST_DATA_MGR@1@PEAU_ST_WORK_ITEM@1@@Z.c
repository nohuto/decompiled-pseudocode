/*
 * XREFs of ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026C84C
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14026CCA4 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026E5F8 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14026F080 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140006E2C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwEnabled @ 0x14012F570 (SmEtwEnabled.c)
 *     ?StDeviceIoIsFailed@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z @ 0x14026B494 (-StDeviceIoIsFailed@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026B66C (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14026C70C (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x14026CBA4 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14026D650 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140271048 (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmEtwLogRegionOp @ 0x140272A7C (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v5; // eax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 k; // r14
  __int64 v9; // r15
  __int64 m; // rbp
  LARGE_INTEGER v11; // rax
  __int64 v12; // rcx
  int v13; // r10d
  int v14; // ebp
  _DWORD *v15; // rax
  __int16 v16; // r8
  int v17; // r15d
  ULONGLONG *v18; // rax
  __int64 v19; // r8
  int v20; // r10d
  unsigned int v21; // r12d
  __int64 v22; // r9
  unsigned int IsCurrentRegion; // eax
  unsigned int v24; // eax
  __int64 v25; // r14
  unsigned int v26; // eax
  __int64 i; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v29; // rcx
  __int64 v30; // r9
  _DWORD *v31; // rax
  LARGE_INTEGER v32; // rax
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 j; // rcx
  __int64 v39; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v40; // [rsp+88h] [rbp+10h]
  __int64 v41; // [rsp+90h] [rbp+18h]

  v3 = a2 + 8;
  v5 = *(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 812);
  v6 = *(_QWORD *)(a1 + 1032);
  v41 = v6;
  v40 = v5;
  v7 = v5;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v24 = *(_DWORD *)(a2 + 28);
    if ( (v24 & 8) != 0 )
    {
      v25 = *(_QWORD *)(a1 + 1000);
      v26 = v24 >> 5;
      for ( i = *(_QWORD *)(v25 + 16); *(_DWORD *)i < v26; i += 32LL )
        ;
      if ( v3 == *(_QWORD *)(i + 24) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v29 = 7LL * *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 24) |= 1uLL;
        *(_QWORD *)(i + 8) = (unsigned __int64)(PerformanceCounter.QuadPart + v29 - *(_QWORD *)(i + 16)) >> 3;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v25 + 8));
    }
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v3, &v39) )
    {
      v14 = v39;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v39);
    }
    else
    {
      v14 = ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(a1, v30, v3);
      v31 = *(_DWORD **)(a1 + 1816);
      if ( v31 )
      {
        if ( v14 >= 0 )
          ++*v31;
        if ( (*(_DWORD *)(v3 + 20) & 4) == 0 )
        {
          v32 = KeQueryPerformanceCounter(0LL);
          v33 = *(_QWORD *)(v3 + 8);
          LODWORD(v39) = *(_DWORD *)(v33 + 4);
          v34 = *(_DWORD *)(v33 + 8);
          v35 = *(_QWORD *)(a1 + 1816);
          HIDWORD(v39) = v34;
          v36 = v32.QuadPart - v39;
          j = *(_QWORD *)(v35 + 1328);
          if ( *(_QWORD *)j < v36 || j != *(_QWORD *)(v35 + 1344) && *(_QWORD *)(j - 16) >= v36 )
          {
            for ( j = *(_QWORD *)(v35 + 1344); *(_QWORD *)j < v36; j += 16LL )
              ;
            *(_QWORD *)(v35 + 1328) = j;
          }
          ++*(_DWORD *)(j + 8);
        }
      }
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup((_DWORD *)a1, a2);
  }
  else
  {
    for ( k = a1 + 1104; *(_DWORD *)k != v5; k += 24LL )
      ;
    v9 = *(_QWORD *)(a1 + 1000);
    for ( m = *(_QWORD *)(v9 + 24); *(_DWORD *)m < *(_DWORD *)(a1 + 784); m += 32LL )
      ;
    if ( v3 == *(_QWORD *)(m + 24) )
    {
      v11 = KeQueryPerformanceCounter(0LL);
      v12 = 7LL * *(_QWORD *)(m + 8);
      *(_QWORD *)(m + 24) |= 1uLL;
      *(_QWORD *)(m + 8) = (unsigned __int64)(v11.QuadPart + v12 - *(_QWORD *)(m + 16)) >> 3;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 8));
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v3, &v39) )
    {
      v14 = v39;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v39);
      v13 = 0;
    }
    else
    {
      v15 = *(_DWORD **)(a1 + 1816);
      v14 = v13;
      if ( v15 )
        ++*v15;
    }
    v16 = *(_WORD *)(v6 + 2 * v7);
    if ( v16 >= 0 )
    {
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1892);
        v17 = 1;
      }
      else
      {
        v17 = v13;
      }
      v21 = v40;
      ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v40);
    }
    else
    {
      *(_WORD *)(v6 + 2 * v7) = v16 & 0x7FFF;
      v17 = 1;
      v18 = SmEtwEnabled(0);
      v21 = v40;
      v22 = 0x1FFFLL;
      if ( v18 )
      {
        SmEtwLogRegionOp((_DWORD)v18, 4, a1, v40, v14, v19, *(_BYTE *)(*(_QWORD *)(a1 + 1048) + v7));
        v20 = 0;
        v22 = 0x1FFFLL;
      }
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1888);
        if ( (*(_WORD *)(v41 + 2 * v7) & 0x1FFF) != 0 )
          v17 = v20;
      }
    }
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    if ( v17 )
    {
      if ( *(_DWORD *)k != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(k + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(k + 16), 0);
      }
      *(_QWORD *)k = 0LL;
      *(_QWORD *)(k + 8) = 0LL;
      *(_QWORD *)(k + 16) = 0LL;
      *(_DWORD *)k = -1;
      IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v21, v19, v22);
      if ( IsCurrentRegion != 8 )
        ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, IsCurrentRegion, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v14;
}
