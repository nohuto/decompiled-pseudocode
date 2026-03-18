/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C00E6868
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008D2D0 (NtUserUpdateLayeredWindow.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E6578 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

struct tagBWL *__fastcall UpdateMonitorForWindowAndChildren(__int64 a1, _QWORD *a2, struct tagBWL **a3, int a4)
{
  struct tagBWL *result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagBWL *v11; // rsi
  unsigned __int64 *i; // rdi
  struct tagWND *v13; // rax
  __int64 v14; // rbx

  result = BuildHwndList(a1, (struct tagWND *)1, 0LL);
  v11 = result;
  if ( result )
  {
    for ( i = (unsigned __int64 *)((char *)result + 32); *i != 1; ++i )
    {
      LOBYTE(v8) = 1;
      v13 = (struct tagWND *)HMValidateHandleNoSecure(*i, v8, v9, v10);
      v14 = (__int64)v13;
      if ( v13 )
      {
        UpdateWindowMonitor(v13, a2);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v14)
            || (*(_DWORD *)(v14 + 304) & 0x10000000) != 0 && (*(_BYTE *)(v14 + 56) & 0xF) != 0 )
          {
            *(_DWORD *)(v14 + 304) |= 0x8000000u;
          }
        }
      }
    }
    if ( a3 )
      *a3 = v11;
    else
      FreeHwndList(v11);
    return (struct tagBWL *)1;
  }
  return result;
}
