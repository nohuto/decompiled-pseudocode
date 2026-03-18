/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C00BFBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C001A4A0 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00D43E4 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 *ThreadProperty; // rax
  __int64 *v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  unsigned int v23; // eax
  ULONG_PTR Count; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  struct _EX_RUNDOWN_REF *v28; // rbx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  char v42[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v43; // [rsp+28h] [rbp-80h]
  int v44; // [rsp+30h] [rbp-78h]
  char v45[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v45);
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 167LL;
    WdLogEvent5_WdAssertion(v5);
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && !IsThreadCrossSessionAttached()
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v17 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v17 = 0LL;
  }
  v43 = v9 + 208;
  if ( v9 != -208 && *(struct _KTHREAD **)(v9 + 216) == KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v18 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v18);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v22 = *(_DWORD *)(v9 + 224);
      if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v20, &EventBlockThread, v21, v22);
    }
    ExAcquirePushLockSharedEx(v9 + 208, 0LL);
  }
  v23 = a1[1];
  Count = 0LL;
  v44 = 1;
  if ( v23 == 1 )
  {
    v25 = *a1;
    v26 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *(_DWORD *)(v9 + 248) )
    {
      v27 = *(_QWORD *)(v9 + 232);
      v21 = (unsigned int)v26;
      v25 = ((unsigned int)v25 >> 25) & 0x60;
      v20 = *(unsigned int *)(v27 + 16 * v26 + 8);
      if ( (_BYTE)v25 == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
      {
        v21 = 2LL * (unsigned int)v26;
        v20 &= 0x1Fu;
        if ( (_BYTE)v20 == 5 )
        {
          v28 = *(struct _EX_RUNDOWN_REF **)(v27 + 16LL * (unsigned int)v26);
          if ( v28 )
          {
            if ( KeGetCurrentIrql() >= 2u )
            {
              v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL) + 192LL)
                                          + 64LL)
                              + 40LL);
              if ( *(_DWORD *)(v29 + 28) >= 0x2003u )
              {
                v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
                v30[3] = 275LL;
                v30[4] = 20LL;
                v30[5] = *(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL);
                v30[6] = 0LL;
                v30[7] = 0LL;
                WdLogEvent5_WdCriticalError(v30);
              }
            }
            if ( !ExAcquireRundownProtection(v28 + 11) )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31);
              v32[3] = 275LL;
              v32[4] = 38LL;
              v32[5] = v28;
              v32[6] = 0LL;
              v32[7] = 0LL;
              WdLogEvent5_WdCriticalError(v32);
            }
            if ( v17 )
              ++*(_DWORD *)(v17 + 136);
            *a2 = v28;
            if ( (a1[2] & 1) != 0 )
              Count = v28[4].Count;
            else
              Count = *(_QWORD *)(v28[6].Count + 16);
            goto LABEL_62;
          }
        }
      }
    }
    goto LABEL_42;
  }
  if ( v23 != 2 )
  {
    v33 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    v34 = (int)a1[1];
    goto LABEL_61;
  }
  v35 = *a1;
  Current = DXGPROCESS::GetCurrent();
  v20 = (v35 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *((_DWORD *)Current + 62)
    || (v21 = *((_QWORD *)Current + 29),
        v25 = (unsigned int)v20,
        v20 = *(unsigned int *)(v21 + 16LL * (unsigned int)v20 + 8),
        ((v35 >> 25) & 0x60) != (v20 & 0x60))
    || (v20 & 0x2000) != 0
    || (v20 & 0x1F) == 0
    || (v25 *= 2LL, v20 &= 0x1Fu, (_BYTE)v20 != 4)
    || (v37 = *(_QWORD *)(v21 + 8 * v25)) == 0 )
  {
LABEL_42:
    v33 = WdLogNewEntry5_WdWarning(v20, v25, v21);
    v34 = *a1;
LABEL_61:
    *(_QWORD *)(v33 + 24) = v34;
    WdLogEvent5_WdWarning(v33);
LABEL_62:
    ExReleasePushLockSharedEx(v43, 0LL);
    goto LABEL_63;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) + 16LL) + 16LL) + 192LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v38 + 28) >= 0x2003u )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38);
      v39[3] = 275LL;
      v39[4] = 20LL;
      v39[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) + 16LL) + 16LL);
      v39[6] = 0LL;
      v39[7] = 0LL;
      WdLogEvent5_WdCriticalError(v39);
    }
  }
  DxgkReferenceDxgResource((struct DXGRESOURCE *)v37);
  if ( v17 )
    ++*(_DWORD *)(v17 + 136);
  DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v42);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v37 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v37;
  Count = *(_QWORD *)(v37 + 56);
  if ( (*(_DWORD *)(v37 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
  if ( v44 == 1 )
    goto LABEL_62;
  if ( v44 != 2 )
    goto LABEL_64;
  v40 = v43;
  *(_QWORD *)(v43 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v40, 0LL);
LABEL_63:
  KeLeaveCriticalRegion();
LABEL_64:
  if ( v45[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
