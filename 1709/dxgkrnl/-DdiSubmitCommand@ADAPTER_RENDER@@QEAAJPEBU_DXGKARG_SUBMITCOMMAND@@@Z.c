/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C000166C
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0001100 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(struct DXGADAPTER **this, const struct _DXGKARG_SUBMITCOMMAND *a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v10; // esi
  __int64 v11; // r15
  _QWORD *v12; // rax
  unsigned __int8 v13; // cl
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _BYTE v22[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(this, &EventProfilerEnter);
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 981);
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v7 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v7);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v5 = 0LL;
LABEL_14:
      v10 = 0;
      goto LABEL_15;
    }
    v5 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    goto LABEL_14;
  v10 = *(_DWORD *)(v5 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22, this[2]);
  v11 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))this[2] + 48))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( v22[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v12[3] = 275LL;
    v12[4] = 16LL;
    v12[5] = this;
    v12[6] = CurrentIrql;
    v13 = KeGetCurrentIrql();
    v12[7] = v13;
    WdLogEvent5_WdCriticalError(v12);
  }
  if ( v5 && *(_DWORD *)(v5 + 136) != v10 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v14[3] = 275LL;
    v14[4] = 25LL;
    v15 = *(int *)(v5 + 136);
    v14[7] = 0LL;
    v14[5] = v15;
    v14[6] = v10;
    WdLogEvent5_WdCriticalError(v14);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 981);
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v16[3] = v11;
  v16[4] = a2->hDevice;
  v16[5] = a2->DmaBufferSegmentId;
  v16[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v16[7] = a2->DmaBufferSize;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v17[3] = a2->DmaBufferSubmissionStartOffset;
  v17[4] = a2->DmaBufferSubmissionEndOffset;
  v17[5] = a2->pDmaBufferPrivateData;
  v17[6] = a2->DmaBufferPrivateDataSize;
  v17[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v18[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v18[4] = a2->SubmissionFenceId;
  v18[5] = a2->NodeOrdinal;
  v18[6] = a2->Flags.Value;
  if ( (_DWORD)v11 )
  {
    v19 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v19 + 24) = v11;
    WdLogEvent5_WdError(v19);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit);
  return (unsigned int)v11;
}
