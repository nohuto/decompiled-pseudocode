/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C00C3A10
 * Callers:
 *     DxgkOfferAllocations @ 0x1C0091F00 (DxgkOfferAllocations.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0013BA0 (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFF.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_OFFERALLOCATIONS *a2,
        __int64 a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  UINT i; // r12d
  D3DKMT_HANDLE *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  struct _VIDMM_MULTI_ALLOC *v21; // r8
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rax
  UINT j; // r14d
  const D3DKMT_HANDLE *v29; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _EX_RUNDOWN_REF *v34; // rcx
  _DWORD *v35; // rax
  __int64 v36; // rax
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rax
  struct _KTHREAD *v43; // rdi
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rbx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  struct _VIDMM_MULTI_ALLOC *v52; // r8
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdi
  _QWORD *v56; // rax
  _DWORD *v57; // rax
  __int64 v58; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v60; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v62; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  struct _KTHREAD *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // ebx
  __int64 v74; // r8
  __int64 v75; // rbx
  __int64 *v76; // rax
  __int64 v77; // rbx
  _QWORD *v78; // rax
  __int64 v79; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v80; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v81[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v82; // [rsp+A0h] [rbp+18h]
  DXGDEVICE **v83; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  v83 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 2209) )
  {
    v8 = WdLogNewEntry5_WdEvent(this);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = 0LL;
    WdLogEvent5_WdEvent(v8);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83);
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
          v11 = &a2->pResources[i];
          if ( (unsigned __int64)v11 >= MmUserProbeAddress )
            v11 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          v12 = *v11;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v79, v12);
          if ( !v79 )
          {
            v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, 0LL, v14, v15);
            v16[3] = this;
            v16[4] = v12;
            v16[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v16);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v79);
            goto LABEL_91;
          }
          if ( *(DXGDEVICE **)(v79 + 8) != this )
          {
            v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v79);
            v17[3] = this;
            v17[4] = v79;
            v17[5] = -1073741811LL;
            WdLogEvent5_WdError(v17);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v79);
            goto LABEL_91;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v81, (struct DXGFASTMUTEX *const)(v79 + 80), v14, v15);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v81);
          v20 = *(_QWORD *)(v79 + 24);
          if ( v20 )
          {
            while ( 1 )
            {
              v21 = *(struct _VIDMM_MULTI_ALLOC **)(v20 + 24);
              if ( !v21 )
                break;
              v22 = VIDMM_EXPORT::VidMmOfferAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
                      v21,
                      a2->Priority,
                      a2->Flags);
              v25 = v22;
              if ( v22 < 0 )
              {
                v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v23, v24);
                v26[3] = this;
                v26[4] = v20;
                v26[5] = v25;
                WdLogEvent5_WdWarning(v26);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v81);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v79);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83);
                return (unsigned int)v25;
              }
              v20 = *(_QWORD *)(v20 + 64);
              if ( !v20 )
                goto LABEL_21;
            }
            v27 = WdLogNewEntry5_WdError(v19, v18);
            *(_QWORD *)(v27 + 24) = v20;
            WdLogEvent5_WdError(v27);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v81);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v79);
            goto LABEL_91;
          }
LABEL_21:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v81);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v79);
        }
LABEL_62:
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v57 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v58 = WdLogNewEntry5_WdAssertion(this, a2, v7, a4);
          *(_QWORD *)(v58 + 24) = 1815LL;
          WdLogEvent5_WdAssertion(v58);
          v57 = DXGGLOBAL::m_pGlobal;
        }
        if ( v57[203] )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v60 = WdLogNewEntry5_WdAssertion(this, a2, v7, a4);
            *(_QWORD *)(v60 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v60);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, v7, a4);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v62 = 0LL;
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v62 = *ThreadWin32Thread;
            if ( v62 )
              v68 = *(_QWORD *)(v62 + 80);
            else
              v68 = 0LL;
            if ( v68 )
            {
              v69 = KeGetCurrentThread();
              if ( !v69 )
              {
                v70 = WdLogNewEntry5_WdAssertion(v65, v64, v66, v67);
                *(_QWORD *)(v70 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v70);
              }
              v73 = PsGetCurrentProcessSessionId(v65, v64, v66, v67);
              if ( !v73 || (unsigned int)PsGetThreadSessionId(v69) != v73 )
                goto LABEL_85;
              v75 = 0LL;
              v76 = (__int64 *)PsGetThreadWin32Thread(v69);
              if ( v76 )
                v75 = *v76;
              if ( v75 )
                v77 = *(_QWORD *)(v75 + 80);
              else
LABEL_85:
                v77 = 0LL;
              if ( *(_DWORD *)(v77 + 136) )
              {
                v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v71, v74);
                v78[3] = 275LL;
                v78[4] = 25LL;
                v78[5] = *(int *)(v77 + 136);
                v78[6] = 0LL;
                v78[7] = 0LL;
                WdLogEvent5_WdCriticalError(v78);
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
        v29 = &a2->HandleList[j];
        if ( (unsigned __int64)v29 >= MmUserProbeAddress )
          v29 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v82 = *v29;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    *((_QWORD *)this + 5),
                                                    (DXGALLOCATIONREFERENCE *)&v80,
                                                    *v29);
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v83, AllocationSafe);
        v34 = v80;
        if ( v80 )
          ExReleaseRundownProtection(v80 + 11);
        v35 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v36 = WdLogNewEntry5_WdAssertion(v34, v31, v32, v33);
          *(_QWORD *)(v36 + 24) = 1815LL;
          WdLogEvent5_WdAssertion(v36);
          v35 = DXGGLOBAL::m_pGlobal;
        }
        if ( v35[203] )
        {
          v37 = KeGetCurrentThread();
          if ( !v37 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v34, v31, v32, v33);
            *(_QWORD *)(v38 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v38);
          }
          v39 = PsGetCurrentProcessSessionId(v34, v31, v32, v33);
          if ( v39 && (unsigned int)PsGetThreadSessionId(v37) == v39 )
          {
            v40 = 0LL;
            v41 = (__int64 *)PsGetThreadWin32Thread(v37);
            if ( v41 )
              v40 = *v41;
            if ( v40 )
              v42 = *(_QWORD *)(v40 + 80);
            else
              v42 = 0LL;
            if ( v42 )
            {
              v43 = KeGetCurrentThread();
              if ( !v43 )
              {
                v44 = WdLogNewEntry5_WdAssertion(v34, v31, v32, v33);
                *(_QWORD *)(v44 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v44);
              }
              v45 = PsGetCurrentProcessSessionId(v34, v31, v32, v33);
              if ( !v45 || (unsigned int)PsGetThreadSessionId(v43) != v45 )
                goto LABEL_50;
              v46 = 0LL;
              v47 = (__int64 *)PsGetThreadWin32Thread(v43);
              if ( v47 )
                v46 = *v47;
              if ( v46 )
                v48 = *(_QWORD *)(v46 + 80);
              else
LABEL_50:
                v48 = 0LL;
              if ( *(_DWORD *)(v48 + 136) )
              {
                v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v31, v32);
                v49[3] = 275LL;
                v49[4] = 25LL;
                v49[5] = *(int *)(v48 + 136);
                v49[6] = 0LL;
                v49[7] = 0LL;
                WdLogEvent5_WdCriticalError(v49);
              }
            }
          }
        }
        v6 = (struct _EX_RUNDOWN_REF *)v83;
        if ( !v83 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v31, v32, v33);
          v50[3] = this;
          v50[4] = v82;
          v50[5] = -1073741811LL;
          goto LABEL_90;
        }
        if ( v83[1] != this )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v34, v31);
          v51[3] = this;
          v51[4] = v6;
          v51[5] = -1073741811LL;
          WdLogEvent5_WdError(v51);
          goto LABEL_91;
        }
        v52 = v83[3];
        if ( !v52 )
        {
          v53 = WdLogNewEntry5_WdError(v34, v31);
          *(_QWORD *)(v53 + 24) = v6;
          WdLogEvent5_WdError(v53);
          goto LABEL_91;
        }
        v54 = VIDMM_EXPORT::VidMmOfferAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
                v52,
                a2->Priority,
                a2->Flags);
        v55 = v54;
        if ( v54 < 0 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v7, a4);
          v56[3] = this;
          v56[4] = v6;
          v56[5] = v55;
          WdLogEvent5_WdWarning(v56);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83);
          return (unsigned int)v55;
        }
      }
      goto LABEL_62;
    }
  }
  v50 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v7, a4);
  v50[3] = this;
  v50[4] = -1073741811LL;
LABEL_90:
  WdLogEvent5_WdWarning(v50);
LABEL_91:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83);
  return 3221225485LL;
}
