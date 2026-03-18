/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00FA670
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C000D438 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00D3674 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00FB0A8 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _DWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcessSessionId; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGSESSIONDATA *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v24; // rax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r15
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  int v40; // r14d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  DXGFASTMUTEX *v61; // [rsp+20h] [rbp-20h] BYREF
  char v62; // [rsp+28h] [rbp-18h]
  _QWORD v63[2]; // [rsp+30h] [rbp-10h] BYREF
  int v64; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v65; // [rsp+90h] [rbp+50h] BYREF
  __int64 v66; // [rsp+98h] [rbp+58h]

  v4 = DXGGLOBAL::m_pGlobal;
  v5 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v45 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v45 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v45);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  v8 = v4[73];
  if ( v8 )
  {
    v62 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
    v61 = (DXGFASTMUTEX *)(v8 + 80);
    if ( v8 == -80 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL, v9, v10, v11);
      *(_QWORD *)(v46 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v46);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v61 + 1) == CurrentThread )
    {
      v47 = WdLogNewEntry5_WdAssertion(CurrentThread, v9, v10, v11);
      *(_QWORD *)(v47 + 24) = 460LL;
      WdLogEvent5_WdAssertion(v47);
    }
    if ( v62 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v9, v10);
      v48[5] = &v61;
      v48[3] = 275LL;
      v48[4] = 4LL;
      v48[6] = 0LL;
      v48[7] = 0LL;
      WdLogEvent5_WdCriticalError(v48);
    }
    DXGFASTMUTEX::Acquire(v61);
    v62 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v8 + 72) )
    {
      _mm_lfence();
      v17 = *(DXGSESSIONDATA **)(*(_QWORD *)(v8 + 40) + 8 * CurrentProcessSessionId);
      v62 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v61, v14, v15, v16);
      goto LABEL_12;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v61, v14, v15, v16);
  }
  v17 = 0LL;
LABEL_12:
  if ( !v17 )
  {
    v49 = WdLogNewEntry5_WdError(this, a2);
    v5 = -1073741811;
    *(_QWORD *)(v49 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v51, v50, v52, v53);
    *(_QWORD *)(v49 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v49);
    return v5;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 120, 0LL);
  if ( *((_DWORD *)this + 44) != 1 || *((_BYTE *)this + 2205) )
    goto LABEL_23;
  v22 = *((_QWORD *)this + 286);
  if ( v22 )
  {
    Current = DXGPROCESS::GetCurrent(v19);
    v19 = *(_QWORD *)(v22 + 16);
    if ( !*(_BYTE *)(v19 + 186) )
    {
      if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                              *(VIDSCH_EXPORT **)(v22 + 408),
                              *(struct _VIDSCH_GLOBAL **)(v22 + 416),
                              Current,
                              v21) )
      {
        v54 = WdLogNewEntry5_WdEvent(v19);
        *(_QWORD *)(v54 + 24) = this;
        *(_QWORD *)(v54 + 32) = DXGPROCESS::GetCurrent(v55);
        WdLogEvent5_WdEvent(v54);
LABEL_23:
        LODWORD(v29) = 0;
        goto LABEL_24;
      }
    }
  }
  ++a2[2];
  if ( *a2 >= a2[1] )
  {
    if ( *((_QWORD *)a2 + 2) )
    {
      v56 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v56 + 24) = (unsigned int)a2[2];
      *(_QWORD *)(v56 + 32) = (unsigned int)a2[1];
      WdLogEvent5_WdWarning(v56);
    }
    goto LABEL_23;
  }
  v24 = DXGPROCESS::GetCurrent(v19);
  v26 = DXGADAPTER::CreateHandle(this, v24, &v65, v25);
  v29 = v26;
  if ( v26 >= 0 )
  {
    v30 = (unsigned int)*a2;
    v31 = *((_QWORD *)a2 + 2);
    v32 = 5 * v30;
    *a2 = v30 + 1;
    *(_DWORD *)(v31 + 4 * v32) = v65;
    *(_QWORD *)(v31 + 4 * v32 + 4) = *(_QWORD *)((char *)this + 268);
    *(_DWORD *)(v31 + 4 * v32 + 16) = 0;
    v66 = *((_QWORD *)DXGPROCESS::GetCurrent(v28) + 9);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v66 + 224))(0LL) )
    {
      v64 = 0;
      v40 = 2;
      v63[0] = 0x400000002LL;
      v63[1] = &v64;
      if ( (*(int (__fastcall **)(_QWORD *))(v66 + 368))(v63) < 0 )
      {
        v60 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
        *(_QWORD *)(v60 + 24) = 597LL;
        WdLogEvent5_WdWarning(v60);
        v64 = 2;
      }
      else
      {
        v40 = v64;
      }
      if ( v40 != 0xFFFF
        && *((_DWORD *)v17 + 4623) == *((_DWORD *)this + 67)
        && *((_DWORD *)v17 + 4624) == *((_DWORD *)this + 68) )
      {
        *(_DWORD *)(v31 + 4 * v32 + 12) = *((_DWORD *)v17 + 4625);
      }
      else
      {
        *(_DWORD *)(v31 + 4 * v32 + 12) = 0;
      }
    }
    else
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                 v17,
                                 (const struct _LUID *)((char *)this + 268));
      if ( SessionAdapterFromLuid )
        v38 = *((_DWORD *)SessionAdapterFromLuid + 19);
      else
        v38 = 0;
      *(_DWORD *)(v31 + 4 * v32 + 12) = v38;
      if ( !*((_QWORD *)this + 286) )
      {
        v58 = *((_QWORD *)this + 285);
        if ( *(_QWORD *)(*(_QWORD *)(v58 + 16) + 2288LL) )
        {
          v59 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
          *(_QWORD *)(v59 + 24) = 5354LL;
          WdLogEvent5_WdAssertion(v59);
        }
        *(_DWORD *)(v31 + 4 * v32 + 16) = *(_DWORD *)(v58 + 244);
      }
    }
    goto LABEL_27;
  }
  v57 = WdLogNewEntry5_WdError(v28, v27);
  *(_QWORD *)(v57 + 24) = this;
  *(_QWORD *)(v57 + 32) = v29;
  WdLogEvent5_WdError(v57);
LABEL_24:
  v5 = v29;
LABEL_27:
  ExReleasePushLockSharedEx((char *)this + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  return v5;
}
