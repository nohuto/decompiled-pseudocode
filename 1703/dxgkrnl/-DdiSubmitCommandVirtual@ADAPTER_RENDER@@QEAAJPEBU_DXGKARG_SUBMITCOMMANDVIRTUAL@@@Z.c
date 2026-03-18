/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C00CE380
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0005430 (-ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUA.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  int CurrentProcessSessionId; // ebp
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 Value; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v32; // rax
  unsigned __int8 v33; // cl
  _QWORD *v34; // rax
  __int64 v35; // rax
  _BYTE v36[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5063);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v30 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v30 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v30);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v10 = 0LL;
LABEL_7:
    v13 = 0;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v10 )
    goto LABEL_7;
  v13 = *(_DWORD *)(v10 + 136);
LABEL_8:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 808LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v32[3] = 275LL;
    v32[4] = 16LL;
    v32[5] = this;
    v32[6] = CurrentIrql;
    v33 = KeGetCurrentIrql();
    v32[7] = v33;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v13 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v34[3] = 275LL;
    v34[4] = 25LL;
    v34[5] = *(int *)(v10 + 136);
    v34[6] = v13;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v14, v16, v17);
  v19[3] = v15;
  v19[4] = a2->hContext;
  v19[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v19[6] = DmaBufferSize;
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v21, v22, v23);
  v24[3] = a2->pDmaBufferPrivateData;
  v24[4] = a2->DmaBufferPrivateDataSize;
  v24[5] = a2->SubmissionFenceId;
  v24[6] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v24[7] = Value;
  if ( (_DWORD)v15 != -1073741811 && (_DWORD)v15 )
  {
    v35 = WdLogNewEntry5_WdError(Value, v25);
    *(_QWORD *)(v35 + 24) = v15;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 5063);
  return (unsigned int)v15;
}
