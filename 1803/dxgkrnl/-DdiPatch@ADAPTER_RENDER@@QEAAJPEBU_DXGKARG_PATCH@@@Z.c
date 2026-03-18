/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C009B7E0
 * Callers:
 *     ?ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z @ 0x1C00011A0 (-ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 PatchLocationListSize; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 Value; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  int v43; // [rsp+20h] [rbp-78h] BYREF
  __int64 v44; // [rsp+28h] [rbp-70h]
  _BYTE v45[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v44 = 0LL;
  v43 = 5008;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5008);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 5008);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
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
    (DXGVALIDATIONPROCESSATTACH *)v45,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PATCH *))(*((_QWORD *)this + 2) + 376LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v45[0] )
    KeUnstackDetachProcess(&ApcState);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v20[3] = 275LL;
    v20[4] = 38LL;
    v21 = *(int *)(v7 + 136);
    v20[7] = 0LL;
    v20[5] = v21;
    v20[6] = v12;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v13, v14, v15);
  v22[3] = v16;
  v22[4] = a2->hDevice;
  v22[5] = a2->DmaBufferSegmentId;
  v22[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v22[7] = DmaBufferSize;
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v24, v25, v26);
  v27[3] = a2->DmaBufferSubmissionStartOffset;
  v27[4] = a2->DmaBufferSubmissionEndOffset;
  v27[5] = a2->pDmaBufferPrivateData;
  v27[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v27[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v32 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v29, v30, v31);
  v32[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v32[4] = a2->pAllocationList;
  v32[5] = a2->AllocationListSize;
  v32[6] = a2->pPatchLocationList;
  PatchLocationListSize = a2->PatchLocationListSize;
  v32[7] = PatchLocationListSize;
  v37 = (_QWORD *)WdLogNewEntry5_WdTrace(PatchLocationListSize, v34, v35, v36);
  v37[3] = a2->PatchLocationListSubmissionStart;
  v37[4] = a2->PatchLocationListSubmissionLength;
  v37[5] = a2->SubmissionFenceId;
  Value = a2->Flags.Value;
  v37[6] = Value;
  if ( (_DWORD)v16 )
  {
    v39 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v39 + 24) = v16;
    WdLogEvent5_WdError(v39);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v43);
  return (unsigned int)v16;
}
