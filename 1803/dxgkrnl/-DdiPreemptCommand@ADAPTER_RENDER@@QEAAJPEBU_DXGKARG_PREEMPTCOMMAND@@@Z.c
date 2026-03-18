/*
 * XREFs of ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0001E0C
 * Callers:
 *     ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0001D30 (-ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPreemptCommand(
        struct DXGADAPTER **this,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v10; // eax
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rdi
  struct _KTHREAD *v13; // rdi
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rbp
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  _BYTE v31[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  v3 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(this, &EventProfilerEnter, a3, 5014LL);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v7 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v7);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v3 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v10 = *(_DWORD *)(v3 + 140);
      if ( !v10 )
        *(_DWORD *)(v3 + 144) = 5014;
      *(_DWORD *)(v3 + 140) = v10 + 1;
    }
  }
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1042);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_28;
  v13 = KeGetCurrentThread();
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = PsGetCurrentProcessSessionId();
  if ( v15 && (unsigned int)PsGetThreadSessionId(v13) == v15 )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached() || (v16 = PsGetThreadWin32Thread(v13)) == 0 || !*(_QWORD *)v16 )
    {
      v12 = 0LL;
LABEL_28:
      v17 = 0;
      goto LABEL_29;
    }
    v12 = *(_QWORD *)(*(_QWORD *)v16 + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    goto LABEL_28;
  v17 = *(_DWORD *)(v12 + 136);
LABEL_29:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v31, this[2]);
  v18 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))this[2] + 49))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v21[3] = 275LL;
    v21[4] = 38LL;
    v22 = *(int *)(v12 + 136);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v17;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1042);
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v23[3] = v18;
  v23[4] = a2->Flags.Value;
  v23[5] = a2->PreemptionFenceId;
  if ( (_DWORD)v18 )
  {
    v24 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v24 + 24) = v18;
    WdLogEvent5_WdError(v24);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( v3 )
  {
    v27 = *(_DWORD *)(v3 + 140);
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v28 + 24) = 229LL;
      WdLogEvent5_WdAssertion(v28);
      v27 = *(_DWORD *)(v3 + 140);
    }
    v29 = v27 - 1;
    *(_DWORD *)(v3 + 140) = v29;
    if ( !v29 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, 5014LL);
  return (unsigned int)v18;
}
