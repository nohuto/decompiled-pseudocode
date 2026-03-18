/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00E29B0
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C00E2970 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxDisownClipboard @ 0x1C00AE014 (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, KPROCESSOR_MODE a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rbx
  int v10; // eax
  _DWORD *v11; // rsi
  unsigned int v12; // edi
  ULONG v13; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  void *ProcessWin32WindowStation; // rdi
  PVOID v30; // [rsp+48h] [rbp-19h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v34[3]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v35[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v36; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentProcess = PsGetCurrentProcess(SourceHandle);
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, a2, &Object, &HandleInformation);
  v11 = Object;
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = RtlNtStatusToDosError(v10);
    UserSetLastError(v13);
    return v12;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87LL);
    ObfDereferenceObject(v11);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v15 = *(_QWORD **)(ProcessWin32Process + 632);
    if ( v15 )
    {
      if ( v15 != Object )
      {
        v16 = v15 + 10;
        v17 = v15[10];
        if ( v17 && *(_QWORD *)(*(_QWORD *)(v17 + 16) + 376LL) == ProcessWin32Process )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v16);
          }
          else
          {
            PushW32ThreadLock((__int64)Object, v35, UserDereferenceObject);
            v18 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 632) + 80LL);
            v34[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v34;
            v34[1] = v18;
            ++*(_DWORD *)(v18 + 8);
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 632) + 80LL));
            ThreadUnlock1(v20, v19);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(ThreadWin32Thread + 16) = v35[0];
          }
        }
        v22 = *(_QWORD *)(ProcessWin32Process + 632) + 64LL;
        if ( *(_QWORD *)v22 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 16LL) + 376LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v22);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 632) + 48LL) = 0LL;
        }
        v23 = *(_QWORD *)(ProcessWin32Process + 632);
        v24 = *(_QWORD *)(v23 + 48);
        if ( v24 && *(_QWORD *)(v24 + 376) == ProcessWin32Process )
          *(_QWORD *)(v23 + 48) = 0LL;
        v25 = *(_QWORD *)(ProcessWin32Process + 632) + 72LL;
        if ( *(_QWORD *)v25 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 16LL) + 376LL) == ProcessWin32Process )
          HMAssignmentUnlock(v25);
        v26 = *(_QWORD *)(ProcessWin32Process + 632) + 120LL;
        while ( *(_QWORD *)v26 )
        {
          v27 = *(_QWORD *)v26;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 16LL) + 376LL) == ProcessWin32Process )
          {
            v36 = *(_QWORD *)v26;
            *(_QWORD *)v26 = *(_QWORD *)(v27 + 296);
            *(_QWORD *)(v27 + 296) = 0LL;
            *(_DWORD *)(v36 + 304) &= ~1u;
            HMAssignmentUnlock(&v36);
          }
          else
          {
            v26 = v27 + 296;
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 640) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v11);
      return 3221225495LL;
    }
    v28 = *(_QWORD *)(ProcessWin32Process + 640);
    if ( v28 )
      SetHandleFlag(v28, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 632, v11);
  ObfDereferenceObject(v11);
  *(_QWORD *)(ProcessWin32Process + 640) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, a2, &v30, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v11 != v30 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v30);
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
  *(_DWORD *)(ProcessWin32Process + 648) = HandleInformation.GrantedAccess;
  if ( (v11[8] & 4) != 0 )
    *(_DWORD *)(ProcessWin32Process + 12) &= ~0x40000u;
  else
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x40000u;
  if ( RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u) )
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x10u;
  else
    *(_DWORD *)(ProcessWin32Process + 12) &= ~0x10u;
  return 0LL;
}
