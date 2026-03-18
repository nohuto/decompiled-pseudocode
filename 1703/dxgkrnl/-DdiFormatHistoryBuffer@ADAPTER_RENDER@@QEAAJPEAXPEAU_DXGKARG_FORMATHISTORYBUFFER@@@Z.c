/*
 * XREFs of ?DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C0023928
 * Callers:
 *     ?ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C0034300 (-ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUF.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiFormatHistoryBuffer(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_FORMATHISTORYBUFFER *a3,
        __int64 a4)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // esi
  __int64 v14; // rdi
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  _BYTE v25[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5057);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
LABEL_13:
      v13 = 0;
      goto LABEL_14;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_13;
  v13 = *(_DWORD *)(v8 + 136);
LABEL_14:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v14 = (*(int (__fastcall **)(void *, struct _DXGKARG_FORMATHISTORYBUFFER *))(*((_QWORD *)this + 2) + 792LL))(a2, a3);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v17[3] = 275LL;
    v17[4] = 25LL;
    v18 = *(int *)(v8 + 136);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v13;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v19[3] = v14;
  v19[4] = a3->NumTimestamps;
  v19[5] = a3->Precision.PrecisionBits;
  v19[6] = a3->Offset;
  WdLogEvent5_WdEvent(v19);
  if ( (_DWORD)v14 != -1073741823 && (_DWORD)v14 != -1073741684 && (_DWORD)v14 )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v23 + 24) = v14;
    WdLogEvent5_WdError(v23);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 5057);
  return (unsigned int)v14;
}
