/*
 * XREFs of ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C0163418
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A05D0 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiSetVirtualMachineData(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETVIRTUALMACHINEDATA *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // ebp
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-78h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h]
  _BYTE v26[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v25 = 0LL;
  v24 = 5113;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5113);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 5113);
  v5 = *((_QWORD *)this + 2);
  LODWORD(v6) = 0;
  if ( *(_QWORD *)(v5 + 1200) )
  {
    DXGADAPTER::AcquireDdiSync(v5, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
    CurrentIrql = KeGetCurrentIrql();
    v9 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v11 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v11 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v11);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        if ( IsThreadCrossSessionAttached()
          || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
          || !*(_QWORD *)ThreadWin32Thread )
        {
          v9 = 0LL;
          goto LABEL_15;
        }
        v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      }
      else
      {
        v9 = 0LL;
      }
      if ( v9 )
      {
        v14 = *(_DWORD *)(v9 + 136);
        goto LABEL_16;
      }
    }
LABEL_15:
    v14 = 0;
LABEL_16:
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v26,
      *((struct DXGADAPTER **)this + 2));
    v6 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIRTUALMACHINEDATA *))(*((_QWORD *)this + 2) + 1200LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
           a2);
    if ( v26[0] )
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
    if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
      v18[3] = 275LL;
      v18[4] = 38LL;
      v19 = *(int *)(v9 + 136);
      v18[7] = 0LL;
      v18[5] = v19;
      v18[6] = v14;
      WdLogEvent5_WdCriticalError(v18);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
    if ( (_DWORD)v6 )
    {
      v20 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v20 + 24) = v6;
      WdLogEvent5_WdError(v20);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v6;
}
