/*
 * XREFs of ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0005570
 * Callers:
 *     ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0002CE0 (-ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPreemptCommand(
        struct DXGADAPTER **this,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 PreemptionFenceId; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v20; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _BYTE v28[8]; // [rsp+20h] [rbp-68h] BYREF
  _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5014LL);
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 973);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_3;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v20 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
LABEL_3:
      v11 = 0;
      goto LABEL_4;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_3;
  v11 = *(_DWORD *)(v10 + 136);
LABEL_4:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v28, this[2]);
  v12 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))this[2] + 49))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( v28[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v11 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v25[3] = 275LL;
    v25[4] = 25LL;
    v26 = *(int *)(v10 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v11;
    WdLogEvent5_WdCriticalError(v25);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 973);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v13[3] = v12;
  v13[4] = a2->Flags.Value;
  PreemptionFenceId = a2->PreemptionFenceId;
  v13[5] = PreemptionFenceId;
  if ( (_DWORD)v12 )
  {
    v27 = WdLogNewEntry5_WdError(PreemptionFenceId, v14);
    *(_QWORD *)(v27 + 24) = v12;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 5014LL);
  return (unsigned int)v12;
}
