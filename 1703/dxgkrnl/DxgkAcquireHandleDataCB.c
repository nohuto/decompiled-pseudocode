/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C00FF810
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0013724 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C009F354 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 *ThreadProperty; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int CurrentProcessSessionId; // edi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r9d
  unsigned int v33; // eax
  ULONG_PTR Count; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _EX_RUNDOWN_REF *v37; // rbx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v48; // rbx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  char v53[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v54; // [rsp+28h] [rbp-80h]
  int v55; // [rsp+30h] [rbp-78h]
  char v56[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v56);
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 167LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v10);
  v16 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v16 = *ThreadProperty;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v19 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v19 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12, v14, v15);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v26 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v26 = 0LL;
  }
  v54 = v16 + 168;
  if ( v16 != -168 && *(struct _KTHREAD **)(v16 + 176) == KeGetCurrentThread() )
  {
    v27 = WdLogNewEntry5_WdAssertion(v21, v20, v23, v24);
    *(_QWORD *)(v27 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v27);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v32 = *(_DWORD *)(v16 + 184);
      if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v29, &EventBlockThread, v30, v32);
    }
    ExAcquirePushLockSharedEx(v16 + 168, 0LL);
  }
  v33 = a1[1];
  Count = 0LL;
  v55 = 1;
  if ( v33 == 1 )
  {
    v35 = *a1;
    v36 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v36 < *(_DWORD *)(v16 + 208) )
    {
      v31 = *(_QWORD *)(v16 + 192);
      v35 = ((unsigned int)v35 >> 26) & 0x30;
      v30 = *(unsigned int *)(v31 + 16LL * (unsigned int)v36 + 8);
      if ( (_BYTE)v35 == (*(_BYTE *)(v31 + 16LL * (unsigned int)v36 + 8) & 0x30)
        && (v30 & 0x1000) == 0
        && (v30 & 0xF) != 0
        && (*(_BYTE *)(v31 + 16LL * (unsigned int)v36 + 8) & 0xF) == 5 )
      {
        v37 = *(struct _EX_RUNDOWN_REF **)(v31 + 16LL * (unsigned int)v36);
        if ( v37 )
        {
          if ( KeGetCurrentIrql() >= 2u )
          {
            v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37[1].Count + 16) + 16LL) + 192LL) + 64LL)
                            + 40LL);
            if ( *(_DWORD *)(v38 + 28) >= 0x2003u )
            {
              v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v35, v30);
              v39[3] = 275LL;
              v39[4] = 20LL;
              v39[5] = *(_QWORD *)(*(_QWORD *)(v37[1].Count + 16) + 16LL);
              v39[6] = 0LL;
              v39[7] = 0LL;
              WdLogEvent5_WdCriticalError(v39);
            }
          }
          if ( !ExAcquireRundownProtection(v37 + 11) )
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40, v42);
            v43[3] = 275LL;
            v43[4] = 25LL;
            v43[5] = v37;
            v43[6] = 0LL;
            v43[7] = 0LL;
            WdLogEvent5_WdCriticalError(v43);
          }
          if ( v26 )
            ++*(_DWORD *)(v26 + 136);
          *a2 = v37;
          if ( (a1[2] & 1) != 0 )
            Count = v37[4].Count;
          else
            Count = *(_QWORD *)(v37[6].Count + 16);
          goto LABEL_62;
        }
      }
    }
    goto LABEL_41;
  }
  if ( v33 != 2 )
  {
    v44 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    v45 = (int)a1[1];
    goto LABEL_61;
  }
  v46 = *a1;
  Current = DXGPROCESS::GetCurrent(v29);
  v36 = (v46 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v36 >= *((_DWORD *)Current + 52)
    || (v30 = *((_QWORD *)Current + 24),
        v35 = *(unsigned int *)(v30 + 16LL * (unsigned int)v36 + 8),
        ((v46 >> 26) & 0x30) != (*(_BYTE *)(v30 + 16LL * (unsigned int)v36 + 8) & 0x30))
    || (v35 & 0x1000) != 0
    || (v35 & 0xF) == 0
    || (*(_BYTE *)(v30 + 16LL * (unsigned int)v36 + 8) & 0xF) != 4
    || (v48 = *(_QWORD *)(v30 + 16LL * (unsigned int)v36)) == 0 )
  {
LABEL_41:
    v44 = WdLogNewEntry5_WdWarning(v36, v35, v30, v31);
    v45 = *a1;
LABEL_61:
    *(_QWORD *)(v44 + 24) = v45;
    WdLogEvent5_WdWarning(v44);
LABEL_62:
    ExReleasePushLockSharedEx(v54, 0LL);
    goto LABEL_63;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) + 16LL) + 16LL) + 192LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v49 + 28) >= 0x2003u )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49, v35, v30);
      v50[3] = 275LL;
      v50[4] = 20LL;
      v50[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) + 16LL) + 16LL);
      v50[6] = 0LL;
      v50[7] = 0LL;
      WdLogEvent5_WdCriticalError(v50);
    }
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v48);
  if ( v26 )
    ++*(_DWORD *)(v26 + 136);
  DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v53);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v48 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v48;
  if ( (*(_DWORD *)(v48 + 4) & 1) != 0 )
    Count = *(_QWORD *)(*(_QWORD *)(v48 + 56) + 16LL);
  else
    Count = *(_QWORD *)(v48 + 56);
  if ( v55 == 1 )
    goto LABEL_62;
  if ( v55 != 2 )
    goto LABEL_64;
  v51 = v54;
  *(_QWORD *)(v54 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v51, 0LL);
LABEL_63:
  KeLeaveCriticalRegion();
LABEL_64:
  if ( v56[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
