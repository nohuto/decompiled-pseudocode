/*
 * XREFs of xxxHardErrorControl @ 0x1C020DE0C
 * Callers:
 *     NtUserHardErrorControl @ 0x1C01E76D0 (NtUserHardErrorControl.c)
 * Callees:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00484B0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0048FF0 (xxxSetCsrssThreadDesktop.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     CanForceForeground @ 0x1C0090A90 (CanForceForeground.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     zzzAttachToQueue @ 0x1C00CAED8 (zzzAttachToQueue.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3, __int64 a4)
{
  PVOID v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _DWORD *v12; // rbx
  NTSTATUS v13; // ebx
  int v14; // edx
  int v15; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID v20; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( !grpdeskRitInput || gHardErrorHandler )
        return 1LL;
      MEMORY[0] = gptiCurrent;
LABEL_57:
      *(_DWORD *)(gptiCurrent + 464LL) &= ~0x40000000u;
      return 0LL;
    case 1:
      if ( gHardErrorHandler != gptiCurrent )
        return 1LL;
      gHardErrorHandler = 0LL;
      return 0LL;
    case 2:
LABEL_31:
      *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 408LL);
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 388LL);
LABEL_32:
      v12 = (_DWORD *)grpdeskRitInput;
      if ( !grpdeskRitInput
        || (PVOID)grpdeskRitInput == gspdeskDisconnect
        && (!gspdeskShouldBeForeground || gspdeskShouldBeForeground == gspdeskDisconnect) )
      {
        return 1LL;
      }
      gbDisconnectHardErrorAttach = 0;
      if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
      {
        v12 = gspdeskShouldBeForeground;
        gbDisconnectHardErrorAttach = 1;
      }
      PushW32ThreadLock((__int64)v12, v22, UserDereferenceObject, a4);
      if ( v12 )
        ObfReferenceObject(v12);
      v13 = xxxSetCsrssThreadDesktop(v12, a3);
      PopAndFreeW32ThreadLock((__int64)v22, v14);
      if ( v13 < 0 )
      {
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 388LL);
        }
        return 1LL;
      }
      v15 = 0;
      if ( !a2 )
        goto LABEL_50;
      v16 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
      v20 = Object;
      if ( v16 < 0 )
        goto LABEL_50;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object, v17, v18, v19);
      if ( !ThreadWin32Thread || (unsigned int)CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 400)) )
        v15 = 1;
      ObfDereferenceObject(v20);
      if ( v15 )
        *(_DWORD *)(gptiCurrent + 464LL) |= 0x20u;
      else
LABEL_50:
        *(_DWORD *)(gptiCurrent + 464LL) &= ~0x20u;
      return 0LL;
    case 3:
LABEL_9:
      if ( grpdeskRitInput )
      {
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          if ( !gspdeskShouldBeForeground || gspdeskShouldBeForeground == gspdeskDisconnect )
            return 1LL;
          if ( ObQueryNameInfo(gspdeskShouldBeForeground) )
          {
            v7 = gspdeskShouldBeForeground;
LABEL_23:
            v10 = ObQueryNameInfo(v7) + 8;
LABEL_25:
            if ( v10
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v10 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v10 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v10 + 8))) )
            {
              UserSetLastError(5LL, v11);
              return 2LL;
            }
            if ( a1 != 8 )
              goto LABEL_31;
            goto LABEL_57;
          }
        }
        else if ( ObQueryNameInfo(grpdeskRitInput) )
        {
          v7 = (PVOID)grpdeskRitInput;
          goto LABEL_23;
        }
        v10 = 0LL;
        goto LABEL_25;
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 464LL) &= ~0x40000000u;
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 388LL);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      if ( *(_QWORD *)(gptiCurrent + 408LL) != *((_QWORD *)&gHardErrorHandler + 1) )
      {
        AllocQueue(0LL);
        ++*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 384LL);
        zzzAttachToQueue(gptiCurrent, *((struct tagQ **)&gHardErrorHandler + 1), 0LL, 0);
      }
      *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&Object);
      zzzEndDeferWinEventNotify();
      break;
    case 5:
      goto LABEL_32;
    case 6:
      break;
    case 8:
      goto LABEL_9;
    default:
      return 0LL;
  }
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v8 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
