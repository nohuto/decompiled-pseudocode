/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C00816F0
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C00013A0 (-ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUA.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 Value; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  _BYTE v29[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5063);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v9 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v7 )
      {
        v12 = *(_DWORD *)(v7 + 136);
        goto LABEL_16;
      }
    }
    else
    {
      v7 = 0LL;
    }
  }
  v12 = 0;
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v29,
    *((struct DXGADAPTER **)this + 2));
  v14 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 808LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v13, v15);
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v13, v15);
    v19[3] = 275LL;
    v19[4] = 25LL;
    v19[5] = *(int *)(v7 + 136);
    v19[6] = v12;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v13);
  v20[3] = v14;
  v20[4] = a2->hContext;
  v20[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v20[6] = DmaBufferSize;
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v22);
  v23[3] = a2->pDmaBufferPrivateData;
  v23[4] = a2->DmaBufferPrivateDataSize;
  v23[5] = a2->SubmissionFenceId;
  v23[6] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v23[7] = Value;
  if ( (_DWORD)v14 != -1073741811 && (_DWORD)v14 )
  {
    v25 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v25 + 24) = v14;
    WdLogEvent5_WdError(v25);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, 5063);
  return (unsigned int)v14;
}
