/*
 * XREFs of ?DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015CAB4
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C015BF48 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiBeginExclusiveAccess(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-78h] BYREF
  int v25; // [rsp+28h] [rbp-70h] BYREF
  __int64 v26; // [rsp+30h] [rbp-68h]
  _BYTE v27[8]; // [rsp+38h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  v26 = 0LL;
  v25 = 5130;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5130);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 5130);
  v4 = *((_QWORD *)this + 2);
  LODWORD(v5) = 0;
  if ( *(_QWORD *)(v4 + 1208) )
  {
    DXGADAPTER::AcquireDdiSync(v4, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
    CurrentIrql = KeGetCurrentIrql();
    v8 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v10 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v10 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v10);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        if ( IsThreadCrossSessionAttached()
          || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
          || !*(_QWORD *)ThreadWin32Thread )
        {
          v8 = 0LL;
          goto LABEL_15;
        }
        v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v13 = *(_DWORD *)(v8 + 136);
        goto LABEL_16;
      }
    }
LABEL_15:
    v13 = 0;
LABEL_16:
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v27,
      *((struct DXGADAPTER **)this + 2));
    v14 = *((_QWORD *)this + 2);
    v24 = 0;
    v5 = (*(int (__fastcall **)(_QWORD, int *))(v14 + 1208))(*(_QWORD *)(v14 + 240), &v24);
    if ( v27[0] )
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
    if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
      v18[3] = 275LL;
      v18[4] = 38LL;
      v19 = *(int *)(v8 + 136);
      v18[7] = 0LL;
      v18[5] = v19;
      v18[6] = v13;
      WdLogEvent5_WdCriticalError(v18);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
    if ( (_DWORD)v5 )
    {
      v20 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v20 + 24) = v5;
      WdLogEvent5_WdError(v20);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v25);
  return (unsigned int)v5;
}
