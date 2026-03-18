/*
 * XREFs of ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00CE210
 * Callers:
 *     ?ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005440 (-ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00CDB00 (-DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildPagingBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // esi
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  ADAPTER_RENDER *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5016);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v24 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v24);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread), !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread) )
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
    (DXGVALIDATIONPROCESSATTACH *)v30,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDPAGINGBUFFER *))(*((_QWORD *)this + 2) + 400LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = (ADAPTER_RENDER *)KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = this;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v13 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v28[3] = 275LL;
    v28[4] = 25LL;
    v28[5] = *(int *)(v10 + 136);
    v28[6] = v13;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(v18, (unsigned int)v15, a2, v17);
  if ( (_DWORD)v15 && (_DWORD)v15 != -1071775743 && (_DWORD)v15 != -1071775486 )
  {
    v29 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v29 + 24) = v15;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 5016);
  return (unsigned int)v15;
}
