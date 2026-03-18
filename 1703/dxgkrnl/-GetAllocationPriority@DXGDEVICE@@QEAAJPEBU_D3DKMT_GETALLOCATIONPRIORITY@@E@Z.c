/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C017F1E4
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1C0180060 (DxgkGetAllocationPriority.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(
        DXGDEVICE *this,
        const struct _D3DKMT_GETALLOCATIONPRIORITY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 hResource; // r8
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  UINT v13; // r14d
  ULONG_PTR j; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  _DWORD *pPriorities; // rdx
  _QWORD *v18; // rax
  UINT i; // esi
  __int64 v20; // r14
  const D3DKMT_HANDLE *v21; // rdx
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG_PTR Count; // rcx
  __int64 v32; // rdx
  _QWORD *v33; // r9
  _QWORD *v34; // rax
  ULONG_PTR v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  UINT *v38; // rdx
  _BYTE v39[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+68h] [rbp+10h] BYREF
  UINT v41; // [rsp+70h] [rbp+18h] BYREF

  v41 = 0;
  hResource = a2->hResource;
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0LL;
        v20 = i;
        v21 = &a2->phAllocationList[v20];
        if ( (unsigned __int64)v21 >= MmUserProbeAddress )
          v21 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v22 = *v21;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v40, *v21);
        if ( !v40 )
          break;
        Count = v40[1].Count;
        v32 = *(_QWORD *)(Count + 16);
        v33 = (_QWORD *)*((_QWORD *)this + 2);
        if ( *(_QWORD *)(v32 + 16) != v33[2] )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdError(Count, v32);
          v34[3] = this;
          v34[4] = v40;
          v34[5] = -1073741811LL;
          goto LABEL_31;
        }
        v35 = v40[3].Count;
        if ( !v35 )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdError(Count, 0LL);
          v34[3] = v40;
LABEL_31:
          WdLogEvent5_WdError(v34);
LABEL_28:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40, v28, v29, v30);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, UINT *))(*(_QWORD *)(v33[54] + 8LL) + 1136LL))(v33[55], v35, &v41);
        v38 = &a2->pPriorities[v20];
        if ( (unsigned __int64)v38 >= MmUserProbeAddress )
          v38 = (UINT *)MmUserProbeAddress;
        *v38 = v41;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40, (__int64)v38, v36, v37);
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      v27[3] = this;
      v27[4] = v22;
      v27[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      goto LABEL_28;
    }
    return 0LL;
  }
  if ( a2->AllocationCount || a2->phAllocationList )
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
    *(_QWORD *)(v7 + 24) = this;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v40, hResource);
  if ( !v40 || (v9 = *(unsigned int *)(v40[1].Count + 332), (_DWORD)v9 != a2->hDevice) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v40, v10, v11);
    v18[3] = this;
    v18[4] = a2->hResource;
    v18[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_20:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v40);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v39, (struct DXGFASTMUTEX *const)&v40[10], v10, v11);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
  v13 = 0;
  for ( j = v40[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v15 = *(_QWORD *)(j + 24);
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdError(v12, 0LL);
      *(_QWORD *)(v16 + 24) = j;
      WdLogEvent5_WdError(v16);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
      goto LABEL_20;
    }
    (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 432LL) + 8LL)
                                                    + 1136LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 440LL),
      v15,
      &v41);
    if ( v13 <= v41 )
      v13 = v41;
  }
  pPriorities = a2->pPriorities;
  if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
    pPriorities = (_DWORD *)MmUserProbeAddress;
  *pPriorities = v13;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v40);
  return 0LL;
}
