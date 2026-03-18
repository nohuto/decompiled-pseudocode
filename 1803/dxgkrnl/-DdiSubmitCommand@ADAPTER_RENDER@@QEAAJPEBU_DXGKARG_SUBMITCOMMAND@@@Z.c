/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0002134
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0001D10 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        struct DXGADAPTER **this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // esi
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  int v13; // esi
  __int64 v14; // r15
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 Value; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  unsigned int v32; // [rsp+20h] [rbp-78h] BYREF
  __int64 v33; // [rsp+28h] [rbp-70h]
  _BYTE v34[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v33 = 0LL;
  v32 = 5013;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(this, &EventProfilerEnter, a3, 5013LL);
  DXGETWPROFILER_BASE_PushProfilerEntry(&v32, 5013LL);
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1042);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached(v11)
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_14:
      v13 = 0;
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
  v13 = *(_DWORD *)(v7 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v34, this[2]);
  v14 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))this[2] + 48))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( v34[0] )
    KeUnstackDetachProcess(&ApcState);
  v15 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v15 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v16[3] = 275LL;
    v16[4] = 16LL;
    v16[5] = this;
    v16[6] = CurrentIrql;
    v17 = KeGetCurrentIrql();
    v16[7] = v17;
    WdLogEvent5_WdCriticalError(v16);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v13 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v18[3] = 275LL;
    v18[4] = 38LL;
    v19 = *(int *)(v7 + 136);
    v18[7] = 0LL;
    v18[5] = v19;
    v18[6] = v13;
    WdLogEvent5_WdCriticalError(v18);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1042);
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v20[3] = v14;
  v20[4] = a2->hDevice;
  v20[5] = a2->DmaBufferSegmentId;
  v20[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v20[7] = a2->DmaBufferSize;
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v21[3] = a2->DmaBufferSubmissionStartOffset;
  v21[4] = a2->DmaBufferSubmissionEndOffset;
  v21[5] = a2->pDmaBufferPrivateData;
  v21[6] = a2->DmaBufferPrivateDataSize;
  v21[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v22[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v22[4] = a2->SubmissionFenceId;
  v22[5] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v22[6] = Value;
  if ( (_DWORD)v14 )
  {
    v24 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v24 + 24) = v14;
    WdLogEvent5_WdError(v24);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  v27 = v33;
  if ( v33 )
  {
    v28 = *(_DWORD *)(v33 + 140);
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v29 + 24) = 229LL;
      WdLogEvent5_WdAssertion(v29);
      v28 = *(_DWORD *)(v27 + 140);
    }
    v30 = v28 - 1;
    *(_DWORD *)(v27 + 140) = v30;
    if ( !v30 )
      *(_DWORD *)(v27 + 144) = -1;
  }
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v32);
  return (unsigned int)v14;
}
