/*
 * XREFs of ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800D77D8
 * Callers:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800D85E0 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0TaskData@ComTaskPool@Internal@Windows@@QEAA@W4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800D4C64 (--0TaskData@ComTaskPool@Internal@Windows@@QEAA@W4TaskApartment@23@W4TaskOptions@23@KPEAUIComPool.c)
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x1800D53F4 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800D7398 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800D7AE8 (-_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(PVOID pv)
{
  signed int started; // edi
  LPVOID v3; // rax
  __int64 v4; // rcx
  Windows::Internal::ComTaskPool::TaskData *v5; // rcx

  started = Windows::Internal::ComTaskPool::CThread::_StartThreadCommon((Windows::Internal::ComTaskPool::CThread *)pv);
  if ( started < 0 )
    return (unsigned int)started;
  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::TaskData::TaskData(
           (__int64)v3,
           *((_DWORD *)pv + 32),
           *((_DWORD *)pv + 33),
           *((_DWORD *)pv + 34),
           *((_QWORD *)pv + 18));
  else
    v4 = 0LL;
  *((_QWORD *)pv + 8) = v4;
  started = v4 == 0 ? 0x8007000E : 0;
  if ( !v4 )
    goto LABEL_12;
  _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)pv + 8LL))(pv);
  if ( !TrySubmitThreadpoolCallback(Windows::Internal::ComTaskPool::CThread::s_ThreadPoolCallback, pv, 0LL) )
  {
    started = ResultFromKnownLastError();
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
  }
  if ( started < 0 )
  {
    v5 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)pv + 8);
    if ( v5 )
      Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v5);
    *((_QWORD *)pv + 8) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
LABEL_12:
    if ( started < 0 )
    {
      FreeLibrary(*((HMODULE *)pv + 9));
      *((_QWORD *)pv + 9) = 0LL;
    }
  }
  return (unsigned int)started;
}
