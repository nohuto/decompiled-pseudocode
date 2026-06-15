/*
 * XREFs of ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800D76F4
 * Callers:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800D85E0 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800D7398 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800D7AE8 (-_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::StartThread(HMODULE *this)
{
  signed int started; // ebx
  HMODULE Event; // rax
  HANDLE v4; // rsi
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

  started = Windows::Internal::ComTaskPool::CThread::_StartThreadCommon((Windows::Internal::ComTaskPool::CThread *)this);
  if ( started >= 0 )
  {
    Event = (HMODULE)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    this[7] = Event;
    if ( Event || (started = ResultFromKnownLastError(), started >= 0) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
      (*((void (__fastcall **)(HMODULE *))*this + 1))(this);
      v4 = CreateThread(0LL, 0LL, Windows::Internal::ComTaskPool::CThread::s_ThreadProc, this, 0, &ThreadId);
      if ( v4 )
      {
        started = 0;
      }
      else
      {
        started = ResultFromKnownLastError();
        if ( started < 0 )
        {
          (*((void (__fastcall **)(HMODULE *))*this + 2))(this);
          FreeLibrary(this[9]);
          this[9] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
          return (unsigned int)started;
        }
      }
      CloseHandle(v4);
    }
  }
  return (unsigned int)started;
}
