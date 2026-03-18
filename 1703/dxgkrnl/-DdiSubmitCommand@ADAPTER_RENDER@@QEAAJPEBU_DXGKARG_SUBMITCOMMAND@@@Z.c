/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0005688
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0002DF0 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        struct DXGADAPTER **this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 Value; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v22; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v25; // rax
  unsigned __int8 v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5013LL);
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 973);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_3;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v22 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v22);
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
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v30, this[2]);
  v12 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))this[2] + 48))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v25[3] = 275LL;
    v25[4] = 16LL;
    v25[5] = this;
    v25[6] = CurrentIrql;
    v26 = KeGetCurrentIrql();
    v25[7] = v26;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v11 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v27[3] = 275LL;
    v27[4] = 25LL;
    v28 = *(int *)(v10 + 136);
    v27[7] = 0LL;
    v27[5] = v28;
    v27[6] = v11;
    WdLogEvent5_WdCriticalError(v27);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 973);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v13[3] = v12;
  v13[4] = a2->hDevice;
  v13[5] = a2->DmaBufferSegmentId;
  v13[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v13[7] = a2->DmaBufferSize;
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v14[3] = a2->DmaBufferSubmissionStartOffset;
  v14[4] = a2->DmaBufferSubmissionEndOffset;
  v14[5] = a2->pDmaBufferPrivateData;
  v14[6] = a2->DmaBufferPrivateDataSize;
  v14[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v15[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v15[4] = a2->SubmissionFenceId;
  v15[5] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v15[6] = Value;
  if ( (_DWORD)v12 )
  {
    v29 = WdLogNewEntry5_WdError(Value, v16);
    *(_QWORD *)(v29 + 24) = v12;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 5013LL);
  return (unsigned int)v12;
}
