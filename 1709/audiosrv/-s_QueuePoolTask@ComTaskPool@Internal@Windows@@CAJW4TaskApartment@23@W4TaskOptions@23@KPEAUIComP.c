/*
 * XREFs of ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800E5D58
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x1800E59B4 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800E2ED4 (-Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E4E88 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?WaitForThreadStart@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800E52B8 (-WaitForThreadStart@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800E5F10 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_QueuePoolTask(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  HANDLE *v5; // rbx
  HANDLE v9; // rax
  int Error; // edi
  int v11; // eax
  HANDLE v12; // rax
  HANDLE hHandle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE *v15; // [rsp+48h] [rbp-18h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF
  DWORD dwindex; // [rsp+98h] [rbp+38h] BYREF

  hHandle = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  if ( (a2 & 0x60) == 0 )
    goto LABEL_6;
  v9 = Windows::Internal::ComTaskPool::s_hEventCache;
  if ( Windows::Internal::ComTaskPool::s_hEventCache )
  {
    Windows::Internal::ComTaskPool::s_hEventCache = 0LL;
    hHandle = v9;
LABEL_6:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
    v11 = Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(hHandle, a1, a2, a3, a4, &v16, &v15);
    v5 = v15;
    Error = v11;
    goto LABEL_7;
  }
  hHandle = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( hHandle )
    goto LABEL_6;
  Error = ResultFromKnownLastError();
  if ( Error >= 0 )
    goto LABEL_6;
LABEL_7:
  ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  Windows::Internal::ComTaskPool::TaskList::Clear((Windows::Internal::ComTaskPool::TaskList *)&v16);
  if ( Error >= 0 && v5 )
    Error = Windows::Internal::ComTaskPool::CThread::WaitForThreadStart(v5);
  if ( hHandle )
  {
    if ( Error >= 0 )
    {
      if ( (a2 & 0x40) != 0 )
      {
        while ( CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &hHandle, &dwindex) < 0 && WaitForSingleObject(hHandle, 0) )
          Sleep(1u);
      }
      else if ( (a2 & 0x20) != 0 )
      {
        WaitForSingleObject(hHandle, 0xFFFFFFFF);
      }
    }
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( !Windows::Internal::ComTaskPool::s_hEventCache )
    {
      v12 = hHandle;
      hHandle = 0LL;
      Windows::Internal::ComTaskPool::s_hEventCache = v12;
    }
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( hHandle )
      CloseHandle(hHandle);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
  return (unsigned int)Error;
}
