/*
 * XREFs of ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C0179A6C
 * Callers:
 *     ?ADAPTER_RENDER_DdiStopCapture@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C0034380 (-ADAPTER_RENDER_DdiStopCapture@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiStopCapture(ADAPTER_RENDER *this, struct _DXGKARG_STOPCAPTURE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v15; // esi
  __int64 v16; // rdx
  void *v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  struct _DXGKARG_STOPCAPTURE *v25; // rax
  void *v26; // rdx
  HANDLE hAllocation; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE v32[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5039);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
LABEL_13:
      v15 = 0;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_13;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_14:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v32,
    *((struct DXGADAPTER **)this + 2));
  v17 = (void *)(*(int (__fastcall **)(_QWORD, struct _DXGKARG_STOPCAPTURE *))(*((_QWORD *)this + 2) + 552LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
                  a2);
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v23[3] = 275LL;
    v23[4] = 25LL;
    v24 = *(int *)(v10 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v15;
    WdLogEvent5_WdCriticalError(v23);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v25 = (struct _DXGKARG_STOPCAPTURE *)WdLogNewEntry5_WdTrace(v20, v16, v18, v19);
  v25[3].hAllocation = v17;
  v26 = *(void **)(*((_QWORD *)this + 2) + 240LL);
  v25[4].hAllocation = v26;
  hAllocation = a2->hAllocation;
  v25[5].hAllocation = a2->hAllocation;
  if ( (_DWORD)v17 )
  {
    v28 = WdLogNewEntry5_WdError(hAllocation, v26);
    *(_QWORD *)(v28 + 24) = v17;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 5039);
  return (unsigned int)v17;
}
