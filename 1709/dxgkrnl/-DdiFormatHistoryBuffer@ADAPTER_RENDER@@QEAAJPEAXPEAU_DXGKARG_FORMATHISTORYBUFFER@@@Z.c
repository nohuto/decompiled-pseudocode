/*
 * XREFs of ?DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C0021CCC
 * Callers:
 *     ?ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C00254C0 (-ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUF.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiFormatHistoryBuffer(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_FORMATHISTORYBUFFER *a3)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rdi
  _QWORD *v14; // rax
  unsigned __int8 v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 5057);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_14:
      v12 = 0;
      goto LABEL_15;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_14;
  v12 = *(_DWORD *)(v7 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v23,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(void *, struct _DXGKARG_FORMATHISTORYBUFFER *))(*((_QWORD *)this + 2) + 792LL))(a2, a3);
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v14[3] = 275LL;
    v14[4] = 16LL;
    v14[5] = this;
    v14[6] = CurrentIrql;
    v15 = KeGetCurrentIrql();
    v14[7] = v15;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v16[3] = 275LL;
    v16[4] = 25LL;
    v17 = *(int *)(v7 + 136);
    v16[7] = 0LL;
    v16[5] = v17;
    v16[6] = v12;
    WdLogEvent5_WdCriticalError(v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v18 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v18[3] = v13;
  v18[4] = a3->NumTimestamps;
  v18[5] = a3->Precision.PrecisionBits;
  v18[6] = a3->Offset;
  WdLogEvent5_WdEvent(v18);
  if ( (_DWORD)v13 != -1073741823 && (_DWORD)v13 != -1073741684 && (_DWORD)v13 )
  {
    v21 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v21 + 24) = v13;
    WdLogEvent5_WdError(v21);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, 5057);
  return (unsigned int)v13;
}
