/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C00968D0
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C00EA1E0 (DxgkReclaimAllocations2.c)
 *     DxgkReclaimAllocations @ 0x1C0184F00 (DxgkReclaimAllocations.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0014900 (-VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3)
{
  struct _EX_RUNDOWN_REF *v6; // rbx
  ULONG64 v7; // rcx
  UINT v8; // r8d
  BOOL *v9; // rdx
  __int64 v10; // rax
  unsigned int v12; // r12d
  UINT i; // r14d
  unsigned int *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rax
  ULONG_PTR Count; // rdi
  int v21; // esi
  struct _VIDMM_MULTI_ALLOC *v22; // r9
  enum _D3DDDI_RECLAIM_RESULT *v23; // r8
  struct VIDMM_PAGING_QUEUE *v24; // r10
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r14
  _QWORD *v30; // rax
  __int64 v31; // rax
  BOOL *pDiscarded; // rax
  BOOL *v33; // rdx
  UINT j; // esi
  unsigned int *v35; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct _KTHREAD *v41; // rdi
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rax
  struct _KTHREAD *v47; // rdi
  __int64 v48; // rax
  int v49; // ebx
  __int64 v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // rbx
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  struct _VIDMM_MULTI_ALLOC *v56; // r9
  __int64 v57; // rax
  enum _D3DDDI_RECLAIM_RESULT *v58; // r8
  struct VIDMM_PAGING_QUEUE *v59; // r10
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdi
  _QWORD *v65; // rax
  BOOL *v66; // rax
  BOOL *v67; // rdx
  __int64 v68; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v70; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v75; // rax
  struct _KTHREAD *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // ebx
  __int64 v81; // r8
  __int64 v82; // rbx
  __int64 *v83; // rax
  __int64 v84; // rbx
  _QWORD *v85; // rax
  struct _EX_RUNDOWN_REF *v86; // [rsp+30h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF *v87; // [rsp+38h] [rbp-80h] BYREF
  int v88; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v89; // [rsp+44h] [rbp-74h]
  BOOL v90; // [rsp+48h] [rbp-70h] BYREF
  UINT v91; // [rsp+4Ch] [rbp-6Ch]
  _BYTE v92[16]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v93; // [rsp+60h] [rbp-58h]
  unsigned __int64 v94; // [rsp+68h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v95; // [rsp+70h] [rbp-48h] BYREF
  UINT v97; // [rsp+D8h] [rbp+20h]
  unsigned __int64 v98; // [rsp+D8h] [rbp+20h]

  v6 = 0LL;
  v86 = 0LL;
  if ( *((_BYTE *)this + 1693) )
  {
LABEL_10:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86);
    return 0LL;
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 2233) )
  {
    if ( a3->pDiscarded )
    {
      v8 = 0;
      v91 = 0;
      while ( v8 < a3->NumAllocations )
      {
        v9 = &a3->pDiscarded[v8];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (BOOL *)MmUserProbeAddress;
        *v9 = 0;
        v91 = ++v8;
      }
    }
    v10 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = 0LL;
    WdLogEvent5_WdEvent(v10);
    goto LABEL_10;
  }
  if ( a3->NumAllocations )
  {
    v12 = 0;
    if ( a3->pResources )
    {
      if ( !a3->HandleList )
      {
        for ( i = 0; ; ++i )
        {
          v97 = i;
          if ( i >= a3->NumAllocations )
            break;
          v94 = 4LL * i;
          v14 = &a3->pResources[v94 / 4];
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (unsigned int *)MmUserProbeAddress;
          v93 = *v14;
          v15 = v93;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v87, v93);
          if ( !v87 )
          {
            v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, 0LL, v17);
            v18[3] = this;
            v18[4] = v15;
            v18[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v18);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v87);
            goto LABEL_126;
          }
          if ( (DXGDEVICE *)v87[1].Count != this )
          {
            v19 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v16);
            v19[3].Count = (ULONG_PTR)this;
            v19[4].Count = v87[1].Count;
            WdLogEvent5_WdError(v19);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v87);
            goto LABEL_126;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v92, (struct DXGFASTMUTEX *const)&v87[10]);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v92);
          Count = v87[3].Count;
          v21 = 0;
          if ( Count )
          {
            while ( 1 )
            {
              v22 = *(struct _VIDMM_MULTI_ALLOC **)(Count + 24);
              if ( !v22 )
              {
                v31 = WdLogNewEntry5_WdError(0LL);
                *(_QWORD *)(v31 + 24) = Count;
                WdLogEvent5_WdError(v31);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v92);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v87);
                goto LABEL_126;
              }
              v88 = 0;
              v23 = (enum _D3DDDI_RECLAIM_RESULT *)&v88;
              if ( !a3->pDiscarded )
                v23 = 0LL;
              if ( a2 )
                v24 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 4);
              else
                v24 = 0LL;
              v25 = VIDMM_EXPORT::VidMmReclaimAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
                      v24,
                      v22,
                      &a3->PagingFenceValue,
                      v23);
              v29 = v25;
              if ( v25 < 0 )
              {
                v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
                v30[3] = this;
                v30[4] = Count;
                v30[5] = v29;
                WdLogEvent5_WdWarning(v30);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v92);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v87);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86);
                return (unsigned int)v29;
              }
              if ( v25 == 259 )
                v12 = 259;
              if ( v88 == 2 )
                break;
              if ( v88 == 1 )
                v21 = 1;
              Count = *(_QWORD *)(Count + 64);
              if ( !Count )
                goto LABEL_40;
            }
            v21 = 2;
LABEL_40:
            i = v97;
          }
          pDiscarded = a3->pDiscarded;
          if ( pDiscarded )
          {
            v33 = &pDiscarded[v94 / 4];
            if ( (unsigned __int64)&pDiscarded[v94 / 4] >= MmUserProbeAddress )
              v33 = (BOOL *)MmUserProbeAddress;
            *v33 = v21;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v92);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v87);
        }
LABEL_97:
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v7) + 203) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v70 = WdLogNewEntry5_WdAssertion(v68);
            *(_QWORD *)(v70 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v70);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v72 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v72 = *ThreadWin32Thread;
            }
            if ( v72 )
              v75 = *(_QWORD *)(v72 + 80);
            else
              v75 = 0LL;
            if ( v75 )
            {
              v76 = KeGetCurrentThread();
              if ( !v76 )
              {
                v77 = WdLogNewEntry5_WdAssertion(v73);
                *(_QWORD *)(v77 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v77);
              }
              v80 = PsGetCurrentProcessSessionId();
              if ( !v80 || (unsigned int)PsGetThreadSessionId(v76) != v80 )
                goto LABEL_120;
              v82 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v83 = (__int64 *)PsGetThreadWin32Thread(v76);
                if ( v83 )
                  v82 = *v83;
              }
              if ( v82 )
                v84 = *(_QWORD *)(v82 + 80);
              else
LABEL_120:
                v84 = 0LL;
              if ( *(_DWORD *)(v84 + 136) )
              {
                v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v79, v78, v81);
                v85[3] = 275LL;
                v85[4] = 25LL;
                v85[5] = *(int *)(v84 + 136);
                v85[6] = 0LL;
                v85[7] = 0LL;
                WdLogEvent5_WdCriticalError(v85);
              }
            }
          }
        }
        return v12;
      }
    }
    else if ( a3->HandleList )
    {
      for ( j = 0; j < a3->NumAllocations; ++j )
      {
        v98 = j;
        v35 = (unsigned int *)&a3->HandleList[v98];
        if ( (unsigned __int64)v35 >= MmUserProbeAddress )
          v35 = (unsigned int *)MmUserProbeAddress;
        v89 = *v35;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    *((_QWORD *)this + 5),
                                                    (DXGALLOCATIONREFERENCE *)&v95,
                                                    v89);
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v86, AllocationSafe);
        v37 = (__int64)v95;
        if ( v95 )
          ExReleaseRundownProtection(v95 + 11);
        v39 = *((unsigned int *)DXGGLOBAL::GetGlobal(v37) + 203);
        if ( (_DWORD)v39 )
        {
          v41 = KeGetCurrentThread();
          if ( !v41 )
          {
            v42 = WdLogNewEntry5_WdAssertion(v39);
            *(_QWORD *)(v42 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v42);
          }
          v43 = PsGetCurrentProcessSessionId();
          if ( v43 && (unsigned int)PsGetThreadSessionId(v41) == v43 )
          {
            v44 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v45 = (__int64 *)PsGetThreadWin32Thread(v41);
              if ( v45 )
                v44 = *v45;
            }
            if ( v44 )
              v46 = *(_QWORD *)(v44 + 80);
            else
              v46 = 0LL;
            if ( v46 )
            {
              v47 = KeGetCurrentThread();
              if ( !v47 )
              {
                v48 = WdLogNewEntry5_WdAssertion(v39);
                *(_QWORD *)(v48 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v48);
              }
              v49 = PsGetCurrentProcessSessionId();
              if ( !v49 || (unsigned int)PsGetThreadSessionId(v47) != v49 )
                goto LABEL_74;
              v50 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v51 = (__int64 *)PsGetThreadWin32Thread(v47);
                if ( v51 )
                  v50 = *v51;
              }
              if ( v50 )
                v52 = *(_QWORD *)(v50 + 80);
              else
LABEL_74:
                v52 = 0LL;
              if ( *(_DWORD *)(v52 + 136) )
              {
                v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38, v40);
                v53[3] = 275LL;
                v53[4] = 25LL;
                v53[5] = *(int *)(v52 + 136);
                v53[6] = 0LL;
                v53[7] = 0LL;
                WdLogEvent5_WdCriticalError(v53);
              }
            }
          }
        }
        v6 = v86;
        if ( !v86 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
          v54[3] = this;
          v54[4] = v89;
          v54[5] = -1073741811LL;
          goto LABEL_125;
        }
        if ( (DXGDEVICE *)v86[1].Count != this )
        {
          v55 = WdLogNewEntry5_WdError(v39);
          *(_QWORD *)(v55 + 24) = this;
          *(struct _EX_RUNDOWN_REF *)(v55 + 32) = v6[1];
          WdLogEvent5_WdError(v55);
          goto LABEL_126;
        }
        v56 = (struct _VIDMM_MULTI_ALLOC *)v86[3].Count;
        if ( !v56 )
        {
          v57 = WdLogNewEntry5_WdError(v39);
          *(_QWORD *)(v57 + 24) = v6;
          WdLogEvent5_WdError(v57);
          goto LABEL_126;
        }
        v90 = 0;
        v58 = (enum _D3DDDI_RECLAIM_RESULT *)&v90;
        if ( !a3->pDiscarded )
          v58 = 0LL;
        if ( a2 )
          v59 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 4);
        else
          v59 = 0LL;
        v60 = VIDMM_EXPORT::VidMmReclaimAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
                v59,
                v56,
                &a3->PagingFenceValue,
                v58);
        v64 = v60;
        if ( v60 < 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63);
          v65[3] = this;
          v65[4] = v6;
          v65[5] = v64;
          WdLogEvent5_WdWarning(v65);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86);
          return (unsigned int)v64;
        }
        v7 = 259LL;
        if ( v60 == 259 )
          v12 = 259;
        v66 = a3->pDiscarded;
        if ( v66 )
        {
          v67 = &v66[v98];
          v7 = MmUserProbeAddress;
          if ( (unsigned __int64)&v66[v98] >= MmUserProbeAddress )
            v67 = (BOOL *)MmUserProbeAddress;
          *v67 = v90;
        }
      }
      goto LABEL_97;
    }
  }
  v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3);
  v54[3] = this;
  v54[4] = -1073741811LL;
LABEL_125:
  WdLogEvent5_WdWarning(v54);
LABEL_126:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86);
  return 3221225485LL;
}
