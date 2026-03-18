/*
 * XREFs of ?DdiWriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C01784A4
 * Callers:
 *     ?WriteVirtualFunctionConfig@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C017A2A0 (-WriteVirtualFunctionConfig@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiWriteVirtualFunctionConfig(
        ADAPTER_RENDER *this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  bool v19; // sf
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+28h] [rbp-70h]
  _BYTE v27[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v26 = 0LL;
  v25 = 5087;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5087);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 5087);
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
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 920LL)
                                                                                    + 40LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 920LL) + 8LL),
          a2);
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14);
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14);
    v17[3] = 275LL;
    v17[4] = 38LL;
    v18 = *(int *)(v7 + 136);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v12;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  if ( (_DWORD)v13 != -1073741811 )
  {
    v19 = (int)v13 < 0;
    if ( !(_DWORD)v13 )
      goto LABEL_26;
    v20 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v20 + 24) = v13;
    WdLogEvent5_WdError(v20);
  }
  v19 = (int)v13 < 0;
LABEL_26:
  if ( v19 )
  {
    v21 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v21 + 24) = v13;
    WdLogEvent5_WdError(v21);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return (unsigned int)v13;
}
