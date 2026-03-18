/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C01D2BBC
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C01DF760 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C001D3E8 (UpdateCheckpoint.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int8 a2, int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  int *v11; // rdi
  int *v12; // rcx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rsi
  _DWORD *v18; // rdi
  _DWORD *v19; // rdx
  unsigned int v20; // eax
  char v21; // al

  result = UpdateCheckpoint((__int64)a1);
  v9 = result;
  if ( result )
  {
    if ( a3 )
    {
      *(_OWORD *)result = *(_OWORD *)a3;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v10 = MonitorFromRect(a3, 1u);
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v11 = (int *)(*(_QWORD *)(v10 + 40) + 92LL);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                             + 52LL) & 1) != 0 )
        {
          v11 = (int *)(*(_QWORD *)(v10 + 40) + 108LL);
        }
        else
        {
          v11 = (int *)(*(_QWORD *)(v10 + 40) + 76LL);
        }
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v12 = (int *)(*(_QWORD *)(v10 + 40) + 44LL);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                             + 52LL) & 1) != 0 )
        {
          v12 = (int *)(*(_QWORD *)(v10 + 40) + 60LL);
        }
        else
        {
          v12 = (int *)(*(_QWORD *)(v10 + 40) + 28LL);
        }
        v13 = v11[1] - v12[1];
        v14 = *v12;
        v15 = *v11;
        *(_DWORD *)(v9 + 12) += v13;
        v16 = v15 - v14;
        *(_DWORD *)v9 += v16;
        *(_DWORD *)(v9 + 8) += v16;
        *(_DWORD *)(v9 + 4) += v13;
      }
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v20 = *(_DWORD *)(v9 + 32) & 0xFFFFFFF6;
    }
    else
    {
      *(_QWORD *)(v9 + 16) = *a4;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v17 = MonitorFromRect((int *)v9, 1u);
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v18 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 92LL);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                             + 52LL) & 1) != 0 )
        {
          v18 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 108LL);
        }
        else
        {
          v18 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 76LL);
        }
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v19 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 44LL);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                             + 52LL) & 1) != 0 )
        {
          v19 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 60LL);
        }
        else
        {
          v19 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL);
        }
        *(_DWORD *)(v9 + 16) += *v18 - *v19;
        *(_DWORD *)(v9 + 20) += v18[1] - v19[1];
      }
      v20 = *(_DWORD *)(v9 + 32) | 9;
    }
    *(_DWORD *)(v9 + 32) = v20;
    v21 = *((_BYTE *)a1 + 71);
    if ( (v21 & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 32) & 8) != 0 )
        xxxSetWindowPos(a1, 0LL, *(unsigned int *)(v9 + 16), *(unsigned int *)(v9 + 20), 0, 0, 21);
    }
    else if ( (v21 & 1) == 0 && a3 )
    {
      xxxSetWindowPos(a1, 0LL, (unsigned int)*a3, (unsigned int)a3[1], a3[2] - *a3, a3[3] - a3[1], 4);
    }
    xxxShowWindowEx(a1, a2, 0);
    return 1LL;
  }
  return result;
}
