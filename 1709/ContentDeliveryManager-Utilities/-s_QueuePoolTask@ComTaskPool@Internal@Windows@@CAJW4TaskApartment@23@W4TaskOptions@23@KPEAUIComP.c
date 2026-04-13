/*
 * XREFs of ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180005750
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004378 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180005FA4 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 * Callees:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800059DC (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::s_QueuePoolTask(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rbx
  HANDLE Event; // rax
  signed int LastError; // eax
  signed int v11; // edi
  _QWORD *v12; // rsi
  _QWORD *v13; // r14
  _QWORD *v14; // r15
  unsigned __int128 v15; // kr00_16
  __int64 v16; // rcx
  _QWORD *v17; // rax
  signed int v18; // eax
  HANDLE hHandle; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int128 v22; // [rsp+58h] [rbp-18h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+38h] BYREF

  v21[1] = -2LL;
  hHandle = 0LL;
  v8 = 0LL;
  v21[0] = 0LL;
  v22 = 0LL;
  AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  if ( (a2 & 0x60) != 0 )
  {
    Event = Windows::Internal::ComTaskPool::s_hEventCache;
    if ( Windows::Internal::ComTaskPool::s_hEventCache )
    {
      hHandle = Windows::Internal::ComTaskPool::s_hEventCache;
      Windows::Internal::ComTaskPool::s_hEventCache = 0LL;
    }
    else
    {
      Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
      hHandle = Event;
      if ( !Event )
      {
        LastError = GetLastError();
        v11 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v11 = LastError;
        if ( v11 >= 0 )
          v11 = -2147467259;
        goto LABEL_12;
      }
    }
  }
  else
  {
    Event = hHandle;
  }
  v11 = Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(Event, a1, a2, a3, a4, &v22, v21);
  v8 = v21[0];
LABEL_12:
  ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  v15 = v22;
  v14 = (_QWORD *)(v15 >> 64);
  v13 = (_QWORD *)v15;
  v12 = (_QWORD *)v22;
  if ( !(_QWORD)v22 )
    goto LABEL_20;
  v13 = *(_QWORD **)(v22 + 24);
  *(_QWORD *)(v22 + 24) = 0LL;
LABEL_18:
  if ( v14 == v12 )
    v14 = 0LL;
LABEL_20:
  while ( v12 )
  {
    v16 = v12[2];
    if ( v16 )
    {
      v12[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    operator delete(v12);
    v12 = v13;
    if ( v13 )
    {
      v17 = v13 + 3;
      v13 = (_QWORD *)v13[3];
      *v17 = 0LL;
      goto LABEL_18;
    }
  }
  if ( v11 >= 0 && v8 )
  {
    v11 = 0;
    if ( WaitForSingleObject(*(HANDLE *)(v8 + 56), 0xFFFFFFFF) == -1 )
    {
      v18 = GetLastError();
      v11 = (unsigned __int16)v18 | 0x80070000;
      if ( v18 <= 0 )
        v11 = v18;
      if ( v11 >= 0 )
        v11 = -2147467259;
    }
    if ( (*(_BYTE *)(v8 + 132) & 2) == 0 )
    {
      CloseHandle(*(HANDLE *)(v8 + 56));
      *(_QWORD *)(v8 + 56) = 0LL;
    }
    if ( v11 >= 0 )
      v11 = *(_DWORD *)(v8 + 48);
  }
  if ( hHandle )
  {
    if ( v11 >= 0 )
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
      Windows::Internal::ComTaskPool::s_hEventCache = hHandle;
      hHandle = 0LL;
    }
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( hHandle )
      CloseHandle(hHandle);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v11;
}
