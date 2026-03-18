/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C00EB330
 * Callers:
 *     DxgkOfferAllocations @ 0x1C00C7F60 (DxgkOfferAllocations.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C001A4C8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C001A8E8 (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFF.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(DXGDEVICE *this, struct _D3DKMT_OFFERALLOCATIONS *a2)
{
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  const D3DKMT_HANDLE *HandleList; // rax
  UINT i; // r12d
  D3DKMT_HANDLE *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  ULONG_PTR Count; // rdi
  struct _VIDMM_MULTI_ALLOC *v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rax
  UINT j; // r14d
  const D3DKMT_HANDLE *v26; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KTHREAD *v32; // rdi
  __int64 v33; // rax
  int v34; // ebx
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rax
  struct _KTHREAD *v38; // rdi
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rbx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  struct _VIDMM_MULTI_ALLOC *v47; // r8
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rdi
  _QWORD *v53; // rax
  __int64 v54; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v56; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v61; // rax
  struct _KTHREAD *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // ebx
  __int64 v66; // rbx
  __int64 *v67; // rax
  __int64 v68; // rbx
  _QWORD *v69; // rax
  struct _EX_RUNDOWN_REF *v70; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v71; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v72[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v73; // [rsp+A0h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v74; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v74 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v5 + 2377) )
  {
    v6 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = 0LL;
    WdLogEvent5_WdEvent(v6);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
    return 0LL;
  }
  if ( a2->NumAllocations )
  {
    HandleList = a2->HandleList;
    if ( a2->pResources )
    {
      if ( !HandleList )
      {
        for ( i = 0; i < a2->NumAllocations; ++i )
        {
          v10 = &a2->pResources[i];
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          v11 = *v10;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v70, v11);
          if ( !v70 )
          {
            v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, 0LL, v13);
            v14[3] = this;
            v14[4] = v11;
            v14[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v14);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v70);
            goto LABEL_90;
          }
          if ( (DXGDEVICE *)v70[1].Count != this )
          {
            v15 = (_QWORD *)WdLogNewEntry5_WdError(v12);
            v15[3] = this;
            v15[4] = v70;
            v15[5] = -1073741811LL;
            WdLogEvent5_WdError(v15);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v70);
            goto LABEL_90;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v72, (struct DXGFASTMUTEX *const)&v70[10], 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v72);
          Count = v70[3].Count;
          if ( Count )
          {
            while ( 1 )
            {
              v18 = *(struct _VIDMM_MULTI_ALLOC **)(Count + 24);
              if ( !v18 )
                break;
              v19 = VIDMM_EXPORT::VidMmOfferAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                      v18,
                      a2->Priority,
                      a2->Flags);
              v22 = v19;
              if ( v19 < 0 )
              {
                v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v20, v21);
                v23[3] = this;
                v23[4] = Count;
                v23[5] = v22;
                WdLogEvent5_WdWarning(v23);
                DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v72);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v70);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
                return (unsigned int)v22;
              }
              Count = *(_QWORD *)(Count + 64);
              if ( !Count )
                goto LABEL_18;
            }
            v24 = WdLogNewEntry5_WdError(v16);
            *(_QWORD *)(v24 + 24) = Count;
            WdLogEvent5_WdError(v24);
            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v72);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v70);
            goto LABEL_90;
          }
LABEL_18:
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v72);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v70);
        }
LABEL_61:
        if ( v4 )
          ExReleaseRundownProtection(v4 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 223) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v56 = WdLogNewEntry5_WdAssertion(v54);
            *(_QWORD *)(v56 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v56);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v54);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v58 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v58 = *ThreadWin32Thread;
            }
            if ( v58 )
              v61 = *(_QWORD *)(v58 + 80);
            else
              v61 = 0LL;
            if ( v61 )
            {
              v62 = KeGetCurrentThread();
              if ( !v62 )
              {
                v63 = WdLogNewEntry5_WdAssertion(v59);
                *(_QWORD *)(v63 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v63);
              }
              v65 = PsGetCurrentProcessSessionId(v59);
              if ( !v65 || (unsigned int)PsGetThreadSessionId(v62) != v65 )
                goto LABEL_84;
              v66 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v67 = (__int64 *)PsGetThreadWin32Thread(v62);
                if ( v67 )
                  v66 = *v67;
              }
              if ( v66 )
                v68 = *(_QWORD *)(v66 + 80);
              else
LABEL_84:
                v68 = 0LL;
              if ( *(_DWORD *)(v68 + 136) )
              {
                v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64);
                v69[3] = 275LL;
                v69[4] = 38LL;
                v69[5] = *(int *)(v68 + 136);
                v69[6] = 0LL;
                v69[7] = 0LL;
                WdLogEvent5_WdCriticalError(v69);
              }
            }
          }
        }
        return 0LL;
      }
    }
    else if ( HandleList )
    {
      for ( j = 0; j < a2->NumAllocations; ++j )
      {
        v26 = &a2->HandleList[j];
        if ( (unsigned __int64)v26 >= MmUserProbeAddress )
          v26 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v73 = *v26;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    *((_QWORD *)this + 5),
                                                    (DXGALLOCATIONREFERENCE *)&v71,
                                                    *v26);
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v74, AllocationSafe);
        v28 = (__int64)v71;
        if ( v71 )
          ExReleaseRundownProtection(v71 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v28) + 223) )
        {
          v32 = KeGetCurrentThread();
          if ( !v32 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v30);
            *(_QWORD *)(v33 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v33);
          }
          v34 = PsGetCurrentProcessSessionId(v30);
          if ( v34 && (unsigned int)PsGetThreadSessionId(v32) == v34 )
          {
            v35 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v36 = (__int64 *)PsGetThreadWin32Thread(v32);
              if ( v36 )
                v35 = *v36;
            }
            if ( v35 )
              v37 = *(_QWORD *)(v35 + 80);
            else
              v37 = 0LL;
            if ( v37 )
            {
              v38 = KeGetCurrentThread();
              if ( !v38 )
              {
                v39 = WdLogNewEntry5_WdAssertion(v30);
                *(_QWORD *)(v39 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v39);
              }
              v40 = PsGetCurrentProcessSessionId(v30);
              if ( !v40 || (unsigned int)PsGetThreadSessionId(v38) != v40 )
                goto LABEL_49;
              v41 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v42 = (__int64 *)PsGetThreadWin32Thread(v38);
                if ( v42 )
                  v41 = *v42;
              }
              if ( v41 )
                v43 = *(_QWORD *)(v41 + 80);
              else
LABEL_49:
                v43 = 0LL;
              if ( *(_DWORD *)(v43 + 136) )
              {
                v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
                v44[3] = 275LL;
                v44[4] = 38LL;
                v44[5] = *(int *)(v43 + 136);
                v44[6] = 0LL;
                v44[7] = 0LL;
                WdLogEvent5_WdCriticalError(v44);
              }
            }
          }
        }
        v4 = v74;
        if ( !v74 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
          v45[3] = this;
          v45[4] = v73;
          v45[5] = -1073741811LL;
          goto LABEL_89;
        }
        if ( (DXGDEVICE *)v74[1].Count != this )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v30);
          v46[3] = this;
          v46[4] = v4;
          v46[5] = -1073741811LL;
          WdLogEvent5_WdError(v46);
          goto LABEL_90;
        }
        v47 = (struct _VIDMM_MULTI_ALLOC *)v74[3].Count;
        if ( !v47 )
        {
          v48 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v48 + 24) = v4;
          WdLogEvent5_WdError(v48);
          goto LABEL_90;
        }
        v49 = VIDMM_EXPORT::VidMmOfferAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                v47,
                a2->Priority,
                a2->Flags);
        v52 = v49;
        if ( v49 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdWarning(this, v50, v51);
          v53[3] = this;
          v53[4] = v4;
          v53[5] = v52;
          WdLogEvent5_WdWarning(v53);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
          return (unsigned int)v52;
        }
      }
      goto LABEL_61;
    }
  }
  v45 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v5);
  v45[3] = this;
  v45[4] = -1073741811LL;
LABEL_89:
  WdLogEvent5_WdWarning(v45);
LABEL_90:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
  return 3221225485LL;
}
