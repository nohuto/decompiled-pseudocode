/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C00C3140
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C0091C30 (DxgkReclaimAllocations2.c)
 *     DxgkReclaimAllocations @ 0x1C0180B00 (DxgkReclaimAllocations.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0013C34 (-VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3,
        __int64 a4)
{
  struct DXGPAGINGQUEUE *v5; // r14
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // rcx
  UINT v9; // r8d
  BOOL *v10; // rdx
  __int64 v11; // rax
  unsigned int v13; // r12d
  UINT i; // r14d
  unsigned int *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // esi
  struct _VIDMM_MULTI_ALLOC *v25; // r9
  enum _D3DDDI_RECLAIM_RESULT *v26; // r8
  struct VIDMM_PAGING_QUEUE *v27; // r10
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  _QWORD *v33; // rax
  __int64 v34; // rax
  BOOL *pDiscarded; // rax
  BOOL *v36; // rdx
  UINT j; // esi
  unsigned int *v38; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _EX_RUNDOWN_REF *v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rax
  struct _KTHREAD *v46; // rdi
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rbx
  __int64 *v50; // rax
  __int64 v51; // rax
  struct _KTHREAD *v52; // rdi
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 v57; // rbx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  struct _VIDMM_MULTI_ALLOC *v61; // r9
  __int64 v62; // rax
  enum _D3DDDI_RECLAIM_RESULT *v63; // r8
  struct VIDMM_PAGING_QUEUE *v64; // r10
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rdi
  _QWORD *v68; // rax
  BOOL *v69; // rax
  _DWORD *v70; // rax
  __int64 v71; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v73; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v75; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  struct _KTHREAD *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // ebx
  __int64 v87; // r8
  __int64 v88; // rbx
  __int64 *v89; // rax
  __int64 v90; // rbx
  _QWORD *v91; // rax
  DXGDEVICE **v92; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v93; // [rsp+38h] [rbp-80h] BYREF
  int v94; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v95; // [rsp+44h] [rbp-74h]
  int v96; // [rsp+48h] [rbp-70h] BYREF
  UINT v97; // [rsp+4Ch] [rbp-6Ch]
  _BYTE v98[16]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v99; // [rsp+60h] [rbp-58h]
  unsigned __int64 v100; // [rsp+68h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v101; // [rsp+70h] [rbp-48h] BYREF
  struct DXGPAGINGQUEUE *v102; // [rsp+C8h] [rbp+10h]
  UINT v103; // [rsp+D8h] [rbp+20h]
  unsigned __int64 v104; // [rsp+D8h] [rbp+20h]

  v102 = a2;
  v5 = a2;
  v7 = 0LL;
  v92 = 0LL;
  if ( *((_BYTE *)this + 1821) )
  {
LABEL_10:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92);
    return 0LL;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v8 + 2209) )
  {
    if ( a3->pDiscarded )
    {
      v9 = 0;
      v97 = 0;
      while ( v9 < a3->NumAllocations )
      {
        v8 = v9;
        v10 = &a3->pDiscarded[v9];
        if ( (unsigned __int64)v10 >= MmUserProbeAddress )
          v10 = (BOOL *)MmUserProbeAddress;
        *v10 = 0;
        v97 = ++v9;
      }
    }
    v11 = WdLogNewEntry5_WdEvent(v8);
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = 0LL;
    WdLogEvent5_WdEvent(v11);
    goto LABEL_10;
  }
  if ( a3->NumAllocations )
  {
    v13 = 0;
    if ( a3->pResources )
    {
      if ( !a3->HandleList )
      {
        for ( i = 0; ; ++i )
        {
          v103 = i;
          if ( i >= a3->NumAllocations )
            break;
          v100 = 4LL * i;
          v15 = &a3->pResources[v100 / 4];
          if ( (unsigned __int64)v15 >= MmUserProbeAddress )
            v15 = (unsigned int *)MmUserProbeAddress;
          v99 = *v15;
          v16 = v99;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v93, v99);
          if ( !v93 )
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, 0LL, v18, v19);
            v20[3] = this;
            v20[4] = v16;
            v20[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v20);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v93);
            goto LABEL_126;
          }
          if ( (DXGDEVICE *)v93[1] != this )
          {
            v21 = WdLogNewEntry5_WdError(v17, v93);
            *(_QWORD *)(v21 + 24) = this;
            *(_QWORD *)(v21 + 32) = v93[1];
            WdLogEvent5_WdError(v21);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v93);
            goto LABEL_126;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v98, (struct DXGFASTMUTEX *const)(v93 + 10), v18, v19);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v98);
          v23 = v93[3];
          v24 = 0;
          if ( v23 )
          {
            while ( 1 )
            {
              v25 = *(struct _VIDMM_MULTI_ALLOC **)(v23 + 24);
              if ( !v25 )
              {
                v34 = WdLogNewEntry5_WdError(0LL, v22);
                *(_QWORD *)(v34 + 24) = v23;
                WdLogEvent5_WdError(v34);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v98);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v93);
                goto LABEL_126;
              }
              v94 = 0;
              v26 = (enum _D3DDDI_RECLAIM_RESULT *)&v94;
              if ( !a3->pDiscarded )
                v26 = 0LL;
              if ( v102 )
                v27 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)v102 + 4);
              else
                v27 = 0LL;
              v28 = VIDMM_EXPORT::VidMmReclaimAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
                      v27,
                      v25,
                      &a3->PagingFenceValue,
                      v26);
              v32 = v28;
              if ( v28 < 0 )
              {
                v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v22, v30, v31);
                v33[3] = this;
                v33[4] = v23;
                v33[5] = v32;
                WdLogEvent5_WdWarning(v33);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v98);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v93);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92);
                return (unsigned int)v32;
              }
              if ( v28 == 259 )
                v13 = 259;
              if ( v94 == 2 )
                break;
              if ( v94 == 1 )
                v24 = 1;
              v23 = *(_QWORD *)(v23 + 64);
              if ( !v23 )
                goto LABEL_40;
            }
            v24 = 2;
LABEL_40:
            i = v103;
          }
          pDiscarded = a3->pDiscarded;
          if ( pDiscarded )
          {
            v36 = &pDiscarded[v100 / 4];
            if ( (unsigned __int64)&pDiscarded[v100 / 4] >= MmUserProbeAddress )
              v36 = (BOOL *)MmUserProbeAddress;
            *v36 = v24;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v98);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v93);
        }
LABEL_97:
        if ( v7 )
          ExReleaseRundownProtection(v7 + 11);
        v70 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v71 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
          *(_QWORD *)(v71 + 24) = 1815LL;
          WdLogEvent5_WdAssertion(v71);
          v70 = DXGGLOBAL::m_pGlobal;
        }
        if ( v70[203] )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v73 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
            *(_QWORD *)(v73 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v73);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, a2, a3, a4);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v75 = 0LL;
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v75 = *ThreadWin32Thread;
            if ( v75 )
              v81 = *(_QWORD *)(v75 + 80);
            else
              v81 = 0LL;
            if ( v81 )
            {
              v82 = KeGetCurrentThread();
              if ( !v82 )
              {
                v83 = WdLogNewEntry5_WdAssertion(v78, v77, v79, v80);
                *(_QWORD *)(v83 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v83);
              }
              v86 = PsGetCurrentProcessSessionId(v78, v77, v79, v80);
              if ( !v86 || (unsigned int)PsGetThreadSessionId(v82) != v86 )
                goto LABEL_120;
              v88 = 0LL;
              v89 = (__int64 *)PsGetThreadWin32Thread(v82);
              if ( v89 )
                v88 = *v89;
              if ( v88 )
                v90 = *(_QWORD *)(v88 + 80);
              else
LABEL_120:
                v90 = 0LL;
              if ( *(_DWORD *)(v90 + 136) )
              {
                v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v85, v84, v87);
                v91[3] = 275LL;
                v91[4] = 25LL;
                v91[5] = *(int *)(v90 + 136);
                v91[6] = 0LL;
                v91[7] = 0LL;
                WdLogEvent5_WdCriticalError(v91);
              }
            }
          }
        }
        return v13;
      }
    }
    else if ( a3->HandleList )
    {
      for ( j = 0; j < a3->NumAllocations; ++j )
      {
        v104 = j;
        v38 = (unsigned int *)&a3->HandleList[v104];
        if ( (unsigned __int64)v38 >= MmUserProbeAddress )
          v38 = (unsigned int *)MmUserProbeAddress;
        v95 = *v38;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    *((_QWORD *)this + 5),
                                                    (DXGALLOCATIONREFERENCE *)&v101,
                                                    v95);
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v92, AllocationSafe);
        v43 = v101;
        if ( v101 )
          ExReleaseRundownProtection(v101 + 11);
        v44 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v45 = WdLogNewEntry5_WdAssertion(v43, v40, v41, v42);
          *(_QWORD *)(v45 + 24) = 1815LL;
          WdLogEvent5_WdAssertion(v45);
          v44 = DXGGLOBAL::m_pGlobal;
        }
        if ( v44[203] )
        {
          v46 = KeGetCurrentThread();
          if ( !v46 )
          {
            v47 = WdLogNewEntry5_WdAssertion(v43, v40, v41, v42);
            *(_QWORD *)(v47 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v47);
          }
          v48 = PsGetCurrentProcessSessionId(v43, v40, v41, v42);
          if ( v48 && (unsigned int)PsGetThreadSessionId(v46) == v48 )
          {
            v49 = 0LL;
            v50 = (__int64 *)PsGetThreadWin32Thread(v46);
            if ( v50 )
              v49 = *v50;
            if ( v49 )
              v51 = *(_QWORD *)(v49 + 80);
            else
              v51 = 0LL;
            if ( v51 )
            {
              v52 = KeGetCurrentThread();
              if ( !v52 )
              {
                v53 = WdLogNewEntry5_WdAssertion(v43, v40, v41, v42);
                *(_QWORD *)(v53 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v53);
              }
              v54 = PsGetCurrentProcessSessionId(v43, v40, v41, v42);
              if ( !v54 || (unsigned int)PsGetThreadSessionId(v52) != v54 )
                goto LABEL_74;
              v55 = 0LL;
              v56 = (__int64 *)PsGetThreadWin32Thread(v52);
              if ( v56 )
                v55 = *v56;
              if ( v55 )
                v57 = *(_QWORD *)(v55 + 80);
              else
LABEL_74:
                v57 = 0LL;
              if ( *(_DWORD *)(v57 + 136) )
              {
                v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v40, v41);
                v58[3] = 275LL;
                v58[4] = 25LL;
                v58[5] = *(int *)(v57 + 136);
                v58[6] = 0LL;
                v58[7] = 0LL;
                WdLogEvent5_WdCriticalError(v58);
              }
            }
          }
        }
        v7 = (struct _EX_RUNDOWN_REF *)v92;
        if ( !v92 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v40, v41, v42);
          v59[3] = this;
          v59[4] = v95;
          v59[5] = -1073741811LL;
          goto LABEL_125;
        }
        if ( v92[1] != this )
        {
          v60 = WdLogNewEntry5_WdError(v43, v40);
          *(_QWORD *)(v60 + 24) = this;
          *(struct _EX_RUNDOWN_REF *)(v60 + 32) = v7[1];
          WdLogEvent5_WdError(v60);
          goto LABEL_126;
        }
        v61 = v92[3];
        if ( !v61 )
        {
          v62 = WdLogNewEntry5_WdError(v43, v40);
          *(_QWORD *)(v62 + 24) = v7;
          WdLogEvent5_WdError(v62);
          goto LABEL_126;
        }
        v96 = 0;
        v63 = (enum _D3DDDI_RECLAIM_RESULT *)&v96;
        if ( !a3->pDiscarded )
          v63 = 0LL;
        if ( v5 )
          v64 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)v5 + 4);
        else
          v64 = 0LL;
        v65 = VIDMM_EXPORT::VidMmReclaimAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
                v64,
                v61,
                &a3->PagingFenceValue,
                v63);
        v67 = v65;
        if ( v65 < 0 )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, a2, a3, a4);
          v68[3] = this;
          v68[4] = v7;
          v68[5] = v67;
          WdLogEvent5_WdWarning(v68);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92);
          return (unsigned int)v67;
        }
        v8 = 259LL;
        if ( v65 == 259 )
          v13 = 259;
        v69 = a3->pDiscarded;
        if ( v69 )
        {
          a2 = (struct DXGPAGINGQUEUE *)&v69[v104];
          if ( (unsigned __int64)&v69[v104] >= MmUserProbeAddress )
            a2 = (struct DXGPAGINGQUEUE *)MmUserProbeAddress;
          *(_DWORD *)a2 = v96;
        }
      }
      goto LABEL_97;
    }
  }
  v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3, a4);
  v59[3] = this;
  v59[4] = -1073741811LL;
LABEL_125:
  WdLogEvent5_WdWarning(v59);
LABEL_126:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92);
  return 3221225485LL;
}
