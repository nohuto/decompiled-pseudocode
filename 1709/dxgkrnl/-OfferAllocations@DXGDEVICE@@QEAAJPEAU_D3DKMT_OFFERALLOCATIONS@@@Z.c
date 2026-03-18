/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C0097180
 * Callers:
 *     DxgkOfferAllocations @ 0x1C00EA4B0 (DxgkOfferAllocations.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C001486C (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFF.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(DXGDEVICE *this, struct _D3DKMT_OFFERALLOCATIONS *a2)
{
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  UINT i; // r12d
  D3DKMT_HANDLE *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  ULONG_PTR Count; // rdi
  struct _VIDMM_MULTI_ALLOC *v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rax
  UINT j; // r14d
  const D3DKMT_HANDLE *v25; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rax
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  struct _VIDMM_MULTI_ALLOC *v46; // r8
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdi
  _QWORD *v52; // rax
  __int64 v53; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v55; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v60; // rax
  struct _KTHREAD *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // ebx
  __int64 v66; // r8
  __int64 v67; // rbx
  __int64 *v68; // rax
  __int64 v69; // rbx
  _QWORD *v70; // rax
  struct _EX_RUNDOWN_REF *v71; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v72; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v73[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v74; // [rsp+A0h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v75 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v5 + 2233) )
  {
    v6 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = 0LL;
    WdLogEvent5_WdEvent(v6);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
    return 0LL;
  }
  if ( a2->NumAllocations )
  {
    if ( a2->pResources )
    {
      if ( !a2->HandleList )
      {
        for ( i = 0; i < a2->NumAllocations; ++i )
        {
          v9 = &a2->pResources[i];
          if ( (unsigned __int64)v9 >= MmUserProbeAddress )
            v9 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          v10 = *v9;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v71, v10);
          if ( !v71 )
          {
            v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, 0LL, v12);
            v13[3] = this;
            v13[4] = v10;
            v13[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v13);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71);
            goto LABEL_91;
          }
          if ( (DXGDEVICE *)v71[1].Count != this )
          {
            v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
            v14[3] = this;
            v14[4] = v71;
            v14[5] = -1073741811LL;
            WdLogEvent5_WdError(v14);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71);
            goto LABEL_91;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v73, (struct DXGFASTMUTEX *const)&v71[10]);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v73);
          Count = v71[3].Count;
          if ( Count )
          {
            while ( 1 )
            {
              v17 = *(struct _VIDMM_MULTI_ALLOC **)(Count + 24);
              if ( !v17 )
                break;
              v18 = VIDMM_EXPORT::VidMmOfferAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
                      v17,
                      a2->Priority,
                      a2->Flags);
              v21 = v18;
              if ( v18 < 0 )
              {
                v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v19, v20);
                v22[3] = this;
                v22[4] = Count;
                v22[5] = v21;
                WdLogEvent5_WdWarning(v22);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v73);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
                return (unsigned int)v21;
              }
              Count = *(_QWORD *)(Count + 64);
              if ( !Count )
                goto LABEL_21;
            }
            v23 = WdLogNewEntry5_WdError(v15);
            *(_QWORD *)(v23 + 24) = Count;
            WdLogEvent5_WdError(v23);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v73);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71);
            goto LABEL_91;
          }
LABEL_21:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v73);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71);
        }
LABEL_62:
        if ( v4 )
          ExReleaseRundownProtection(v4 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 203) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v55 = WdLogNewEntry5_WdAssertion(v53);
            *(_QWORD *)(v55 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v55);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v57 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v57 = *ThreadWin32Thread;
            }
            if ( v57 )
              v60 = *(_QWORD *)(v57 + 80);
            else
              v60 = 0LL;
            if ( v60 )
            {
              v61 = KeGetCurrentThread();
              if ( !v61 )
              {
                v62 = WdLogNewEntry5_WdAssertion(v58);
                *(_QWORD *)(v62 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v62);
              }
              v65 = PsGetCurrentProcessSessionId();
              if ( !v65 || (unsigned int)PsGetThreadSessionId(v61) != v65 )
                goto LABEL_85;
              v67 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v68 = (__int64 *)PsGetThreadWin32Thread(v61);
                if ( v68 )
                  v67 = *v68;
              }
              if ( v67 )
                v69 = *(_QWORD *)(v67 + 80);
              else
LABEL_85:
                v69 = 0LL;
              if ( *(_DWORD *)(v69 + 136) )
              {
                v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63, v66);
                v70[3] = 275LL;
                v70[4] = 25LL;
                v70[5] = *(int *)(v69 + 136);
                v70[6] = 0LL;
                v70[7] = 0LL;
                WdLogEvent5_WdCriticalError(v70);
              }
            }
          }
        }
        return 0LL;
      }
    }
    else if ( a2->HandleList )
    {
      for ( j = 0; j < a2->NumAllocations; ++j )
      {
        v25 = &a2->HandleList[j];
        if ( (unsigned __int64)v25 >= MmUserProbeAddress )
          v25 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v74 = *v25;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    *((_QWORD *)this + 5),
                                                    (DXGALLOCATIONREFERENCE *)&v72,
                                                    *v25);
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v75, AllocationSafe);
        v27 = (__int64)v72;
        if ( v72 )
          ExReleaseRundownProtection(v72 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v27) + 203) )
        {
          v31 = KeGetCurrentThread();
          if ( !v31 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v29);
            *(_QWORD *)(v32 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v32);
          }
          v33 = PsGetCurrentProcessSessionId();
          if ( v33 && (unsigned int)PsGetThreadSessionId(v31) == v33 )
          {
            v34 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v35 = (__int64 *)PsGetThreadWin32Thread(v31);
              if ( v35 )
                v34 = *v35;
            }
            if ( v34 )
              v36 = *(_QWORD *)(v34 + 80);
            else
              v36 = 0LL;
            if ( v36 )
            {
              v37 = KeGetCurrentThread();
              if ( !v37 )
              {
                v38 = WdLogNewEntry5_WdAssertion(v29);
                *(_QWORD *)(v38 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v38);
              }
              v39 = PsGetCurrentProcessSessionId();
              if ( !v39 || (unsigned int)PsGetThreadSessionId(v37) != v39 )
                goto LABEL_50;
              v40 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v41 = (__int64 *)PsGetThreadWin32Thread(v37);
                if ( v41 )
                  v40 = *v41;
              }
              if ( v40 )
                v42 = *(_QWORD *)(v40 + 80);
              else
LABEL_50:
                v42 = 0LL;
              if ( *(_DWORD *)(v42 + 136) )
              {
                v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
                v43[3] = 275LL;
                v43[4] = 25LL;
                v43[5] = *(int *)(v42 + 136);
                v43[6] = 0LL;
                v43[7] = 0LL;
                WdLogEvent5_WdCriticalError(v43);
              }
            }
          }
        }
        v4 = v75;
        if ( !v75 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
          v44[3] = this;
          v44[4] = v74;
          v44[5] = -1073741811LL;
          goto LABEL_90;
        }
        if ( (DXGDEVICE *)v75[1].Count != this )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v45[3] = this;
          v45[4] = v4;
          v45[5] = -1073741811LL;
          WdLogEvent5_WdError(v45);
          goto LABEL_91;
        }
        v46 = (struct _VIDMM_MULTI_ALLOC *)v75[3].Count;
        if ( !v46 )
        {
          v47 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v47 + 24) = v4;
          WdLogEvent5_WdError(v47);
          goto LABEL_91;
        }
        v48 = VIDMM_EXPORT::VidMmOfferAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
                v46,
                a2->Priority,
                a2->Flags);
        v51 = v48;
        if ( v48 < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdWarning(this, v49, v50);
          v52[3] = this;
          v52[4] = v4;
          v52[5] = v51;
          WdLogEvent5_WdWarning(v52);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
          return (unsigned int)v51;
        }
      }
      goto LABEL_62;
    }
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v5);
  v44[3] = this;
  v44[4] = -1073741811LL;
LABEL_90:
  WdLogEvent5_WdWarning(v44);
LABEL_91:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
  return 3221225485LL;
}
