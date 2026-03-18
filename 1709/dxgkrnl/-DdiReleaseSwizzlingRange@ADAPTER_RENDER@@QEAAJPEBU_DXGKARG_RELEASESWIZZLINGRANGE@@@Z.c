/*
 * XREFs of ?DdiReleaseSwizzlingRange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z @ 0x1C017B484
 * Callers:
 *     ?ADAPTER_RENDER_DdiReleaseSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z @ 0x1C0025560 (-ADAPTER_RENDER_DdiReleaseSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_RELEASESWIZZLINGRA.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiReleaseSwizzlingRange(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_RELEASESWIZZLINGRANGE *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 PrivateDriverData; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  _BYTE v27[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5007);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
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
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)this + 2));
  v14 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)this + 2) + 368LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v27[0] )
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
    v20 = *(int *)(v7 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v12;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v13);
  v21[3] = v14;
  v21[4] = a2->hAllocation;
  v21[5] = a2->RangeId;
  PrivateDriverData = a2->PrivateDriverData;
  v21[6] = PrivateDriverData;
  if ( (_DWORD)v14 )
  {
    v23 = WdLogNewEntry5_WdError(PrivateDriverData);
    *(_QWORD *)(v23 + 24) = v14;
    WdLogEvent5_WdError(v23);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, 5007);
  return (unsigned int)v14;
}
