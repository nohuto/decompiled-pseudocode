/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B1EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C0008050 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0084CB0 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00B2D7C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 CurrentProcessSessionId; // r15
  struct _KTHREAD *CurrentThread; // rcx
  DXGSESSIONDATA *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r15
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r15
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v29; // rbx
  int v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  DXGFASTMUTEX *v46; // [rsp+20h] [rbp-20h] BYREF
  char v47; // [rsp+28h] [rbp-18h]
  _QWORD v48[2]; // [rsp+30h] [rbp-10h] BYREF
  int v49; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v50; // [rsp+90h] [rbp+50h] BYREF
  __int64 v51; // [rsp+98h] [rbp+58h]

  v4 = 0;
  v6 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
  if ( v6 )
  {
    v47 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v5);
    v46 = (DXGFASTMUTEX *)(v6 + 80);
    if ( v6 == -80 )
    {
      v34 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v34 + 24) = 464LL;
      WdLogEvent5_WdAssertion(v34);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v46 + 1) == CurrentThread )
    {
      v35 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v35 + 24) = 471LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v47 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v7, v8);
      v36[5] = &v46;
      v36[3] = 275LL;
      v36[4] = 4LL;
      v36[6] = 0LL;
      v36[7] = 0LL;
      WdLogEvent5_WdCriticalError(v36);
    }
    DXGFASTMUTEX::Acquire(v46);
    v47 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v6 + 72) )
    {
      _mm_lfence();
      v11 = *(DXGSESSIONDATA **)(*(_QWORD *)(v6 + 40) + 8 * CurrentProcessSessionId);
      v47 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v46);
      goto LABEL_10;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v46);
  }
  v11 = 0LL;
LABEL_10:
  if ( !v11 )
  {
    v37 = WdLogNewEntry5_WdError(v5);
    v4 = -1073741811;
    *(_QWORD *)(v37 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v38);
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    return v4;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 120, 0LL);
  if ( *((_DWORD *)this + 44) != 1 || *((_BYTE *)this + 2229) )
    goto LABEL_21;
  v15 = *((_QWORD *)this + 289);
  if ( v15 )
  {
    Current = DXGPROCESS::GetCurrent(v13, v12);
    v13 = *(_QWORD *)(v15 + 16);
    if ( !*(_BYTE *)(v13 + 185) )
    {
      if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                              *(VIDSCH_EXPORT **)(v15 + 504),
                              *(struct _VIDSCH_GLOBAL **)(v15 + 512),
                              Current) )
      {
        v39 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v39 + 24) = this;
        *(_QWORD *)(v39 + 32) = DXGPROCESS::GetCurrent(v41, v40);
        WdLogEvent5_WdEvent(v39);
LABEL_21:
        LODWORD(v21) = 0;
        goto LABEL_22;
      }
    }
  }
  ++a2[2];
  if ( *a2 >= a2[1] )
  {
    if ( *((_QWORD *)a2 + 2) )
    {
      v42 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v42 + 24) = (unsigned int)a2[2];
      *(_QWORD *)(v42 + 32) = (unsigned int)a2[1];
      WdLogEvent5_WdWarning(v42);
    }
    goto LABEL_21;
  }
  v17 = DXGPROCESS::GetCurrent(v13, v12);
  v18 = DXGADAPTER::CreateHandle(this, v17, &v50);
  v21 = v18;
  if ( v18 >= 0 )
  {
    v22 = (unsigned int)*a2;
    v23 = *((_QWORD *)a2 + 2);
    v24 = 5 * v22;
    *a2 = v22 + 1;
    *(_DWORD *)(v23 + 4 * v24) = v50;
    *(_QWORD *)(v23 + 4 * v24 + 4) = *(_QWORD *)((char *)this + 268);
    *(_DWORD *)(v23 + 4 * v24 + 16) = 0;
    v51 = *((_QWORD *)DXGPROCESS::GetCurrent(v20, v19) + 12);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v51 + 224))(0LL) )
    {
      v49 = 0;
      v30 = 2;
      v48[0] = 0x400000002LL;
      v48[1] = &v49;
      if ( (*(int (__fastcall **)(_QWORD *))(v51 + 368))(v48) < 0 )
      {
        v45 = WdLogNewEntry5_WdWarning(v32, v31, v33);
        *(_QWORD *)(v45 + 24) = 597LL;
        WdLogEvent5_WdWarning(v45);
        v49 = 2;
      }
      else
      {
        v30 = v49;
      }
      if ( v30 != 0xFFFF
        && *((_DWORD *)v11 + 4623) == *((_DWORD *)this + 67)
        && *((_DWORD *)v11 + 4624) == *((_DWORD *)this + 68) )
      {
        *(_DWORD *)(v23 + 4 * v24 + 12) = *((_DWORD *)v11 + 4625);
      }
      else
      {
        *(_DWORD *)(v23 + 4 * v24 + 12) = 0;
      }
    }
    else
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                 v11,
                                 (const struct _LUID *)((char *)this + 268));
      if ( SessionAdapterFromLuid )
        v27 = *((_DWORD *)SessionAdapterFromLuid + 19);
      else
        v27 = 0;
      *(_DWORD *)(v23 + 4 * v24 + 12) = v27;
      if ( !*((_QWORD *)this + 289) )
      {
        v29 = *((_QWORD *)this + 288);
        if ( *(_QWORD *)(*(_QWORD *)(v29 + 16) + 2312LL) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v44 + 24) = 5556LL;
          WdLogEvent5_WdAssertion(v44);
        }
        *(_DWORD *)(v23 + 4 * v24 + 16) = *(_DWORD *)(v29 + 244);
      }
    }
    goto LABEL_25;
  }
  v43 = WdLogNewEntry5_WdError(v20);
  *(_QWORD *)(v43 + 24) = this;
  *(_QWORD *)(v43 + 32) = v21;
  WdLogEvent5_WdError(v43);
LABEL_22:
  v4 = v21;
LABEL_25:
  ExReleasePushLockSharedEx((char *)this + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  return v4;
}
