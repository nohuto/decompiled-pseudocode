/*
 * XREFs of ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180004F84
 * Callers:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180005B98 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     ?_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180004EF4 (-_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(HMODULE *pv)
{
  signed int started; // edi
  _DWORD *v3; // rax
  HMODULE v4; // rsi
  HMODULE v5; // rcx
  int v6; // r9d
  int v7; // r8d
  signed int LastError; // eax
  _QWORD *v9; // rsi
  __int64 v10; // rcx

  started = Windows::Internal::ComTaskPool::CThread::_StartThreadCommon((Windows::Internal::ComTaskPool::CThread *)pv);
  if ( started < 0 )
    return (unsigned int)started;
  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (HMODULE)v3;
  if ( v3 )
  {
    v5 = pv[18];
    v6 = *((_DWORD *)pv + 34);
    v7 = *((_DWORD *)pv + 33);
    *v3 = *((_DWORD *)pv + 32);
    v3[1] = v7;
    v3[2] = v6;
    *((_QWORD *)v3 + 2) = v5;
    if ( v5 )
      (*(void (__fastcall **)(HMODULE))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)v4 + 3) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  pv[8] = v4;
  started = v4 == 0LL ? 0x8007000E : 0;
  if ( !v4 )
    goto LABEL_20;
  _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
  (*((void (__fastcall **)(HMODULE *))*pv + 1))(pv);
  if ( !TrySubmitThreadpoolCallback(Windows::Internal::ComTaskPool::CThread::s_ThreadPoolCallback, pv, 0LL) )
  {
    LastError = GetLastError();
    started = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      started = LastError;
    if ( started >= 0 )
      started = -2147467259;
    (*((void (__fastcall **)(HMODULE *))*pv + 2))(pv);
  }
  if ( started < 0 )
  {
    v9 = pv[8];
    if ( v9 )
    {
      v10 = v9[2];
      if ( v10 )
      {
        v9[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      operator delete(v9);
    }
    pv[8] = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
LABEL_20:
    if ( started < 0 )
    {
      FreeLibrary(pv[9]);
      pv[9] = 0LL;
    }
  }
  return (unsigned int)started;
}
