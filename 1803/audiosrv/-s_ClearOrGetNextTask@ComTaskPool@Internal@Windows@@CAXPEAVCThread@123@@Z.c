/*
 * XREFs of ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x180112A20
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180112454 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x18010FB64 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z @ 0x18011010C (-Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z.c)
 *     ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x1801113A8 (-PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x180111F34 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180112954 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::s_ClearOrGetNextTask(
        struct Windows::Internal::ComTaskPool::CThread *a1)
{
  char v2; // di
  Windows::Internal::ComTaskPool::TaskData *v3; // rsi
  DWORD TickCount; // eax
  __int64 v5; // rax
  struct Windows::Internal::ComTaskPool::TaskData *v6; // rsi
  int *v7; // rax
  Windows::Internal::ComTaskPool::TaskData *v8; // rdi
  DWORD v9; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = 0;
  AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  v3 = Windows::Internal::ComTaskPool::TaskList::PopFront((struct Windows::Internal::ComTaskPool::CThread *)((char *)a1 + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( v3 )
  {
    TickCount = GetTickCount();
    Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)a1, (__int64)v3, TickCount, 0LL, &v10);
    Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v3);
  }
  else
  {
    *((_BYTE *)a1 + 97) = 0;
    v2 = 1;
    v5 = *((_QWORD *)a1 + 18);
    *((_QWORD *)a1 + 18) = 0LL;
    v10 = v5;
    *((_BYTE *)a1 + 49) = 1;
  }
  ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( v2 )
  {
    v6 = 0LL;
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    *((_BYTE *)a1 + 49) = 0;
    v7 = (int *)Windows::Internal::ComTaskPool::TaskList::PopFront((Windows::Internal::ComTaskPool::TaskList *)&Windows::Internal::ComTaskPool::s_taskFloodingList);
    v8 = (Windows::Internal::ComTaskPool::TaskData *)v7;
    if ( v7
      && v7[2] == *((_DWORD *)a1 + 34)
      && Windows::Internal::ComTaskPool::CThread::Eligible((__int64)a1, *v7, v7[1]) )
    {
      v9 = GetTickCount();
      Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)a1, (__int64)v8, v9, 0LL, 0LL);
      Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v8);
    }
    else
    {
      v6 = v8;
    }
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( v6 )
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v6);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
}
