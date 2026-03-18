/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C0182B28
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1C0184130 (DxgkGetAllocationPriority.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, const struct _D3DKMT_GETALLOCATIONPRIORITY *a2)
{
  __int64 hResource; // r8
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  UINT v10; // r14d
  ULONG_PTR j; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  _DWORD *pPriorities; // rdx
  _QWORD *v15; // rax
  UINT i; // esi
  __int64 v17; // r14
  const D3DKMT_HANDLE *v18; // rdx
  unsigned int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // rcx
  _QWORD *v26; // rax
  ULONG_PTR Count; // rdx
  UINT *v28; // rdx
  _BYTE v29[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+68h] [rbp+10h] BYREF
  UINT v31; // [rsp+70h] [rbp+18h] BYREF

  v31 = 0;
  hResource = a2->hResource;
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0LL;
        v17 = i;
        v18 = &a2->phAllocationList[v17];
        if ( (unsigned __int64)v18 >= MmUserProbeAddress )
          v18 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v19 = *v18;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v30, *v18);
        if ( !v30 )
          break;
        v24 = (_QWORD *)*((_QWORD *)this + 2);
        v25 = v24[2];
        if ( *(_QWORD *)(*(_QWORD *)(v30[1].Count + 16) + 16LL) != v25 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v26[3] = this;
          v26[4] = v30;
          v26[5] = -1073741811LL;
          goto LABEL_31;
        }
        Count = v30[3].Count;
        if ( !Count )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v26[3] = v30;
LABEL_31:
          WdLogEvent5_WdError(v26);
LABEL_28:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, UINT *))(*(_QWORD *)(v24[66] + 8LL) + 1136LL))(v24[67], Count, &v31);
        v28 = &a2->pPriorities[v17];
        if ( (unsigned __int64)v28 >= MmUserProbeAddress )
          v28 = (UINT *)MmUserProbeAddress;
        *v28 = v31;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v23[3] = this;
      v23[4] = v19;
      v23[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
      goto LABEL_28;
    }
    return 0LL;
  }
  if ( a2->AllocationCount || a2->phAllocationList )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, hResource);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v30, hResource);
  if ( !v30 || (v7 = *(unsigned int *)(v30[1].Count + 332), (_DWORD)v7 != a2->hDevice) )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v30, v8);
    v15[3] = this;
    v15[4] = a2->hResource;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
LABEL_20:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)&v30[10]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v10 = 0;
  for ( j = v30[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v12 = *(_QWORD *)(j + 24);
    if ( !v12 )
    {
      v13 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v13 + 24) = j;
      WdLogEvent5_WdError(v13);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
      goto LABEL_20;
    }
    (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 8LL)
                                                    + 1136LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
      v12,
      &v31);
    if ( v10 <= v31 )
      v10 = v31;
  }
  pPriorities = a2->pPriorities;
  if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
    pPriorities = (_DWORD *)MmUserProbeAddress;
  *pPriorities = v10;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30);
  return 0LL;
}
