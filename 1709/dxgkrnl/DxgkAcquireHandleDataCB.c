/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C00BF520
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00144B8 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00F3558 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 *ThreadProperty; // rax
  __int64 *v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  unsigned int v25; // eax
  ULONG_PTR Count; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  struct _EX_RUNDOWN_REF *v30; // rbx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  char v46[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v47; // [rsp+28h] [rbp-80h]
  int v48; // [rsp+30h] [rbp-78h]
  char v49[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v49);
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 167LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v8);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v13 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v13;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && !IsThreadCrossSessionAttached()
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v19 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v19 = 0LL;
  }
  v47 = v11 + 200;
  if ( v11 != -200 && *(struct _KTHREAD **)(v11 + 208) == KeGetCurrentThread() )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v20 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v20);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v24 = *(_DWORD *)(v11 + 216);
      if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v22, &EventBlockThread, v23, v24);
    }
    ExAcquirePushLockSharedEx(v11 + 200, 0LL);
  }
  v25 = a1[1];
  Count = 0LL;
  v48 = 1;
  if ( v25 == 1 )
  {
    v27 = *a1;
    v28 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v11 + 240) )
    {
      v29 = *(_QWORD *)(v11 + 224);
      v21 = (unsigned int)v28;
      v27 = ((unsigned int)v27 >> 25) & 0x60;
      v23 = *(unsigned int *)(v29 + 16 * v28 + 8);
      if ( (_BYTE)v27 == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
      {
        v21 = 2LL * (unsigned int)v28;
        if ( (*(_BYTE *)(v29 + 16LL * (unsigned int)v28 + 8) & 0x1F) == 5 )
        {
          v30 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * (unsigned int)v28);
          if ( v30 )
          {
            if ( KeGetCurrentIrql() >= 2u )
            {
              v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30[1].Count + 16) + 16LL) + 192LL)
                                          + 64LL)
                              + 40LL);
              if ( *(_DWORD *)(v31 + 28) >= 0x2003u )
              {
                v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v21, v23);
                v32[3] = 275LL;
                v32[4] = 20LL;
                v32[5] = *(_QWORD *)(*(_QWORD *)(v30[1].Count + 16) + 16LL);
                v32[6] = 0LL;
                v32[7] = 0LL;
                WdLogEvent5_WdCriticalError(v32);
              }
            }
            if ( !ExAcquireRundownProtection(v30 + 11) )
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33, v35);
              v36[3] = 275LL;
              v36[4] = 25LL;
              v36[5] = v30;
              v36[6] = 0LL;
              v36[7] = 0LL;
              WdLogEvent5_WdCriticalError(v36);
            }
            if ( v19 )
              ++*(_DWORD *)(v19 + 136);
            *a2 = v30;
            if ( (a1[2] & 1) != 0 )
              Count = v30[4].Count;
            else
              Count = *(_QWORD *)(v30[6].Count + 16);
            goto LABEL_63;
          }
        }
      }
    }
    goto LABEL_42;
  }
  if ( v25 != 2 )
  {
    v37 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    v38 = (int)a1[1];
    goto LABEL_62;
  }
  v39 = *a1;
  Current = DXGPROCESS::GetCurrent(v22, v21);
  v27 = (v39 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 >= *((_DWORD *)Current + 60)
    || (v23 = *((_QWORD *)Current + 28),
        v21 = (unsigned int)v27,
        v27 = *(unsigned int *)(v23 + 16LL * (unsigned int)v27 + 8),
        ((v39 >> 25) & 0x60) != (v27 & 0x60))
    || (v27 & 0x2000) != 0
    || (v27 & 0x1F) == 0
    || (v21 *= 2LL, (*(_BYTE *)(v23 + 8 * v21 + 8) & 0x1F) != 4)
    || (v41 = *(_QWORD *)(v23 + 8 * v21)) == 0 )
  {
LABEL_42:
    v37 = WdLogNewEntry5_WdWarning(v27, v21, v23);
    v38 = *a1;
LABEL_62:
    *(_QWORD *)(v37 + 24) = v38;
    WdLogEvent5_WdWarning(v37);
LABEL_63:
    ExReleasePushLockSharedEx(v47, 0LL);
    goto LABEL_64;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) + 16LL) + 16LL) + 192LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v42 + 28) >= 0x2003u )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v21, v23);
      v43[3] = 275LL;
      v43[4] = 20LL;
      v43[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) + 16LL) + 16LL);
      v43[6] = 0LL;
      v43[7] = 0LL;
      WdLogEvent5_WdCriticalError(v43);
    }
  }
  DxgkReferenceDxgResource((struct DXGRESOURCE *)v41);
  if ( v19 )
    ++*(_DWORD *)(v19 + 136);
  DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v46);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v41 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v41;
  if ( (*(_DWORD *)(v41 + 4) & 1) != 0 )
    Count = *(_QWORD *)(*(_QWORD *)(v41 + 56) + 16LL);
  else
    Count = *(_QWORD *)(v41 + 56);
  if ( v48 == 1 )
    goto LABEL_63;
  if ( v48 != 2 )
    goto LABEL_65;
  v44 = v47;
  *(_QWORD *)(v47 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v44, 0LL);
LABEL_64:
  KeLeaveCriticalRegion();
LABEL_65:
  if ( v49[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
