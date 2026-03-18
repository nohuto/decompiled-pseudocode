/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A27B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00A2578 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00A5780 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00F50F8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 CurrentProcessSessionId; // r15
  struct _KTHREAD *CurrentThread; // rcx
  DXGSESSIONDATA *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ADAPTER_RENDER *v14; // r15
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r15
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v24; // rcx
  int v25; // eax
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-20h] BYREF
  char v42; // [rsp+28h] [rbp-18h]
  _QWORD v43[2]; // [rsp+30h] [rbp-10h] BYREF
  int v44; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v45; // [rsp+90h] [rbp+50h] BYREF
  __int64 v46; // [rsp+98h] [rbp+58h]

  v4 = 0;
  v6 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 74);
  if ( !v6 )
    goto LABEL_31;
  v42 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v5);
  v41 = v6 + 80;
  if ( v6 == -80 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v31 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v31);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v41 + 8) == CurrentThread )
  {
    v32 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v32 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v32);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v41);
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v6 + 72) )
  {
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v41);
LABEL_31:
    v10 = 0LL;
    goto LABEL_9;
  }
  _mm_lfence();
  v10 = *(DXGSESSIONDATA **)(*(_QWORD *)(v6 + 40) + 8 * CurrentProcessSessionId);
  if ( v42 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41);
LABEL_9:
  if ( !v10 )
  {
    v33 = WdLogNewEntry5_WdError(v5);
    v4 = -1073741811;
    *(_QWORD *)(v33 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v34);
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    return v4;
  }
  _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)a1 + 120, 0LL);
  if ( *((_DWORD *)a1 + 44) != 1 || *((_BYTE *)a1 + 2373) )
    goto LABEL_19;
  v14 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 308);
  if ( v14 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( ADAPTER_RENDER::IsProcessGpuAccessBlocked(v14, Current) )
    {
      v35 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v35 + 24) = a1;
      *(_QWORD *)(v35 + 32) = DXGPROCESS::GetCurrent();
      WdLogEvent5_WdEvent(v35);
LABEL_19:
      LODWORD(v19) = 0;
      goto LABEL_20;
    }
  }
  ++a2[2];
  if ( *a2 >= a2[1] )
  {
    if ( *((_QWORD *)a2 + 2) )
    {
      v36 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v36 + 24) = (unsigned int)a2[2];
      *(_QWORD *)(v36 + 32) = (unsigned int)a2[1];
      WdLogEvent5_WdWarning(v36);
    }
    goto LABEL_19;
  }
  v16 = DXGPROCESS::GetCurrent();
  v17 = DXGADAPTER::CreateHandle(a1, v16, &v45);
  v19 = v17;
  if ( v17 >= 0 )
  {
    v20 = (unsigned int)*a2;
    v21 = *((_QWORD *)a2 + 2);
    v22 = 5 * v20;
    *a2 = v20 + 1;
    *(_DWORD *)(v21 + 4 * v22) = v45;
    *(_QWORD *)(v21 + 4 * v22 + 4) = *(_QWORD *)((char *)a1 + 268);
    *(_DWORD *)(v21 + 4 * v22 + 16) = 0;
    v46 = *((_QWORD *)DXGPROCESS::GetCurrent() + 13);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v46 + 224))(0LL) )
    {
      v44 = 0;
      v27 = 2;
      v43[0] = 0x400000002LL;
      v43[1] = &v44;
      if ( (*(int (__fastcall **)(_QWORD *))(v46 + 360))(v43) < 0 )
      {
        v40 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        *(_QWORD *)(v40 + 24) = 629LL;
        WdLogEvent5_WdWarning(v40);
        v44 = 2;
      }
      else
      {
        v27 = v44;
      }
      if ( v27 != 0xFFFF
        && *((_DWORD *)v10 + 4623) == *((_DWORD *)a1 + 67)
        && *((_DWORD *)v10 + 4624) == *((_DWORD *)a1 + 68) )
      {
        *(_DWORD *)(v21 + 4 * v22 + 12) = *((_DWORD *)v10 + 4625);
      }
      else
      {
        *(_DWORD *)(v21 + 4 * v22 + 12) = 0;
      }
    }
    else
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(v10, (const struct _LUID *)((char *)a1 + 268));
      if ( SessionAdapterFromLuid )
        v25 = *((_DWORD *)SessionAdapterFromLuid + 21);
      else
        v25 = 0;
      *(_DWORD *)(v21 + 4 * v22 + 12) = v25;
      if ( !*((_QWORD *)a1 + 308) )
      {
        v38 = *((_QWORD *)a1 + 307);
        if ( *(_QWORD *)(*(_QWORD *)(v38 + 16) + 2464LL) )
        {
          v39 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v39 + 24) = 5977LL;
          WdLogEvent5_WdAssertion(v39);
        }
        *(_DWORD *)(v21 + 4 * v22 + 16) = *(_DWORD *)(v38 + 244);
      }
    }
    goto LABEL_23;
  }
  v37 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v37 + 24) = a1;
  *(_QWORD *)(v37 + 32) = v19;
  WdLogEvent5_WdError(v37);
LABEL_20:
  v4 = v19;
LABEL_23:
  ExReleasePushLockSharedEx((char *)a1 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)a1 + 2), a1);
  return v4;
}
