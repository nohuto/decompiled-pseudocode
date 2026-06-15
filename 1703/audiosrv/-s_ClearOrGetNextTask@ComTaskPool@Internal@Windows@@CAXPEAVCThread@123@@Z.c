/*
 * XREFs of ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x1800D8150
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x1800D7B44 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18002DFEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x1800D53F4 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z @ 0x1800D58E8 (-Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z.c)
 *     ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x1800D6AA8 (-PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x1800D7620 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x1800D8084 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::s_ClearOrGetNextTask(
        struct Windows::Internal::ComTaskPool::CThread *a1)
{
  struct Windows::Internal::ComTaskPool::TaskData *v2; // rsi
  int *v3; // rbx
  __int64 v4; // rax
  DWORD TickCount; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v6 = 0LL;
  AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  v3 = (int *)Windows::Internal::ComTaskPool::TaskList::PopFront((struct Windows::Internal::ComTaskPool::CThread *)((char *)a1 + 24));
  if ( v3 )
    goto LABEL_8;
  v3 = (int *)Windows::Internal::ComTaskPool::TaskList::PopFront((Windows::Internal::ComTaskPool::TaskList *)&Windows::Internal::ComTaskPool::s_taskFloodingList);
  if ( !v3 )
    goto LABEL_7;
  if ( v3[2] != *((_DWORD *)a1 + 34) || !Windows::Internal::ComTaskPool::CThread::Eligible((__int64)a1, *v3, v3[1]) )
  {
    v2 = (struct Windows::Internal::ComTaskPool::TaskData *)v3;
    v3 = 0LL;
  }
  if ( v3 )
  {
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v6);
    TickCount = GetTickCount();
    Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)a1, (__int64)v3, TickCount, 0LL, &v6);
    if ( v3 )
      Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'((Windows::Internal::ComTaskPool::TaskData *)v3);
  }
  else
  {
LABEL_7:
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v6);
    *((_BYTE *)a1 + 97) = 0;
    v4 = *((_QWORD *)a1 + 18);
    *((_QWORD *)a1 + 18) = 0LL;
    v6 = v4;
  }
  ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v6);
  if ( v2 )
    Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v2);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v6);
}
