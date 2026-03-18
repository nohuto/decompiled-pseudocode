/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C00A0450
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C (LogicalCursorPosFromDpiAwarenessContext.c)
 *     ??1?$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C00A082C (--1-$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     ProcessSuspendedEventMessage @ 0x1C01164A0 (ProcessSuspendedEventMessage.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall ScheduleDispatchNotification(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  unsigned __int64 CurrentProcessWin32Process; // rcx
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  unsigned int DLT; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v15; // rcx
  HANDLE ThreadId; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rax
  tagObjLock *v22[2]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v23; // [rsp+88h] [rbp+17h]
  __int128 SystemInformation; // [rsp+98h] [rbp+27h] BYREF
  int v25; // [rsp+A8h] [rbp+37h]

  v1 = *(_QWORD *)(a1 + 16);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(v1 + 400) != CurrentProcessWin32Process )
  {
    UserSetLastError(5LL, v3);
    return 0LL;
  }
  v6 = 0;
  if ( v1 != gptiCurrent )
  {
    CurrentProcessWin32Process = *(_QWORD *)(CurrentProcessWin32Process + 832);
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 408) + 420LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)CurrentProcessWin32Process <= (unsigned int)v7 )
      {
        if ( (_DWORD)CurrentProcessWin32Process != (_DWORD)v7 )
          return 1LL;
        CurrentProcessWin32Process >>= 32;
        v8 = HIDWORD(v7);
        if ( (_DWORD)CurrentProcessWin32Process != (_DWORD)v8
          && (_DWORD)CurrentProcessWin32Process != -1
          && (_DWORD)v8 != -1 )
        {
          return 1LL;
        }
      }
    }
  }
  v9 = *(_QWORD *)(v1 + 408);
  DLT = DLT_QUEUE::getDLT(CurrentProcessWin32Process);
  v22[0] = (tagObjLock *)GetDomainLockRef(DLT);
  v22[1] = (tagObjLock *)v9;
  tagObjLock::LockShared(v22[0]);
  tagObjLock::LockExclusive((tagObjLock *)v9);
  if ( (*(_DWORD *)(v1 + 464) & 1) == 0 )
  {
    v13 = *(_DWORD *)(v1 + 1184);
    if ( (v13 & 0x2000) != 0
      && (v13 & 0x4000) == 0
      && (PsGetCurrentProcess(v12, v11) == gpepCSRSS || (unsigned int)IsDwmInputThread()) )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v1);
      v15 = *(struct _KTHREAD **)v1;
      *(_QWORD *)&v23 = ThreadProcessId;
      ThreadId = PsGetThreadId(v15);
      v25 = 13;
      *((_QWORD *)&v23 + 1) = ThreadId;
      SystemInformation = v23;
      if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
        *(_DWORD *)(v1 + 1184) |= 0x4000u;
    }
    if ( (*(_DWORD *)(v1 + 1184) & 0x20) == 0 || (unsigned int)ProcessSuspendedEventMessage(v1, 9LL, a1, 96LL, 0LL, 0LL) )
    {
      if ( *(_DWORD *)(v9 + 40) < gUserPostMessageLimit )
      {
        v18 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
        v19 = v18;
        if ( v18 )
        {
          memset(v18, 0, 0xA0uLL);
          if ( *(_DWORD *)(v9 + 44) == 2 )
            v19[25] |= 8u;
          else
            v19[25] |= 4u;
          v20 = *(_QWORD **)(v9 + 32);
          if ( v20 )
          {
            *v20 = v19;
            *((_QWORD *)v19 + 1) = *(_QWORD *)(v9 + 32);
          }
          else
          {
            *(_QWORD *)(v9 + 24) = v19;
          }
          ++*(_DWORD *)(v9 + 40);
          *(_QWORD *)(v9 + 32) = v19;
          v21 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(a1 + 368));
          StoreQMessage(v19, a1, 96LL, 0LL, 0LL, 0, 0LL, 9, 0LL, 0, 0LL, v21, 0LL, 0LL);
          *((_QWORD *)v19 + 13) = v1;
          if ( (*(_DWORD *)(v1 + 464) & 1) == 0 )
          {
            *(_WORD *)(*(_QWORD *)(v1 + 424) + 6LL) |= 0x2040u;
            *(_WORD *)(*(_QWORD *)(v1 + 424) + 4LL) |= 0x2040u;
            if ( (*(_WORD *)(*(_QWORD *)(v1 + 424) + 10LL) & 0x2040) != 0 )
              KeSetEvent(*(PRKEVENT *)(v1 + 704), 2, 0);
          }
          CLockExclusive<DLT_QUEUE>::~CLockExclusive<DLT_QUEUE>(v22);
          return 2;
        }
        v17 = 8LL;
      }
      else
      {
        v17 = 1816LL;
      }
      UserSetLastError(v17, v11);
    }
  }
  CLockExclusive<DLT_QUEUE>::~CLockExclusive<DLT_QUEUE>(v22);
  return v6;
}
