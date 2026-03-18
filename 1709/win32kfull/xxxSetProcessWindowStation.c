/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00F4E60
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C00F4E20 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxDisownClipboard @ 0x1C00C4CC4 (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE v5; // r13
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  _DWORD *v13; // rsi
  unsigned int v14; // ebx
  ULONG v15; // eax
  __int64 v16; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  void *ProcessWin32WindowStation; // rbx
  PVOID v40; // [rsp+48h] [rbp-19h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v44[3]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v45[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v46; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2);
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v5, &Object, &HandleInformation);
  v13 = Object;
  v14 = v10;
  if ( v10 < 0 )
  {
    v15 = RtlNtStatusToDosError(v10);
    UserSetLastError(v15, v16);
    return v14;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87LL, v11);
    ObfDereferenceObject(v13);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v18 = *(_QWORD **)(ProcessWin32Process + 640);
    if ( v18 )
    {
      if ( v18 != Object )
      {
        v19 = v18 + 10;
        v20 = v18[10];
        if ( v20 && *(_QWORD *)(*(_QWORD *)(v20 + 16) + 400LL) == ProcessWin32Process )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v19);
          }
          else
          {
            PushW32ThreadLock((__int64)Object, v45, UserDereferenceObject, v12);
            v21 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 80LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
            v44[0] = *(_QWORD *)(ThreadWin32Thread + 392);
            *(_QWORD *)(ThreadWin32Thread + 392) = v44;
            v44[1] = v21;
            _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 80LL));
            ThreadUnlock1(v27, v26);
            v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30);
            *(_QWORD *)(v31 + 16) = v45[0];
          }
        }
        v32 = *(_QWORD *)(ProcessWin32Process + 640) + 64LL;
        if ( *(_QWORD *)v32 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32 + 16LL) + 400LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v32);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 48LL) = 0LL;
        }
        v33 = *(_QWORD *)(ProcessWin32Process + 640);
        v34 = *(_QWORD *)(v33 + 48);
        if ( v34 && *(_QWORD *)(v34 + 400) == ProcessWin32Process )
          *(_QWORD *)(v33 + 48) = 0LL;
        v35 = *(_QWORD *)(ProcessWin32Process + 640) + 72LL;
        if ( *(_QWORD *)v35 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35 + 16LL) + 400LL) == ProcessWin32Process )
          HMAssignmentUnlock(v35);
        v36 = *(_QWORD *)(ProcessWin32Process + 640) + 120LL;
        while ( *(_QWORD *)v36 )
        {
          v37 = *(_QWORD *)v36;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 16LL) + 400LL) == ProcessWin32Process )
          {
            v46 = *(_QWORD *)v36;
            *(_QWORD *)v36 = *(_QWORD *)(v37 + 296);
            *(_QWORD *)(v37 + 296) = 0LL;
            *(_DWORD *)(v46 + 304) &= ~1u;
            HMAssignmentUnlock(&v46);
          }
          else
          {
            v36 = v37 + 296;
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 648) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v13);
      return 3221225495LL;
    }
    v38 = *(_QWORD *)(ProcessWin32Process + 648);
    if ( v38 )
      SetHandleFlag(v38, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 640, v13);
  ObfDereferenceObject(v13);
  *(_QWORD *)(ProcessWin32Process + 648) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v5, &v40, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v13 != v40 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v40);
    }
  }
  if ( !PsGetProcessWin32WindowStation(CurrentProcess)
    && ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) >= 0 )
  {
    PsSetProcessWindowStation(CurrentProcess, TargetHandle);
  }
  *(_DWORD *)(ProcessWin32Process + 656) = HandleInformation.GrantedAccess;
  if ( (v13[8] & 4) != 0 )
    *(_DWORD *)(ProcessWin32Process + 12) &= ~0x40000u;
  else
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x40000u;
  if ( RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u) )
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x10u;
  else
    *(_DWORD *)(ProcessWin32Process + 12) &= ~0x10u;
  return 0LL;
}
