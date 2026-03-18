/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C009DD70
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C009DA38 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserUpdateLayeredWindow @ 0x1C009E0F0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     UpdateWindowMonitor @ 0x1C005F450 (UpdateWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 */

struct tagBWL *__fastcall UpdateMonitorForWindowAndChildren(__int64 a1, _QWORD *a2, struct tagBWL **a3, int a4)
{
  struct tagBWL *result; // rax
  struct tagBWL *v8; // rsi
  unsigned __int64 *i; // rdi
  struct tagWND *v10; // rax
  __int64 v11; // rbx

  result = BuildHwndList(a1, 1, 0LL);
  v8 = result;
  if ( result )
  {
    for ( i = (unsigned __int64 *)((char *)result + 32); *i != 1; ++i )
    {
      v10 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
      v11 = (__int64)v10;
      if ( v10 )
      {
        UpdateWindowMonitor(v10, a2);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v11)
            || (*(_DWORD *)(v11 + 304) & 0x10000000) != 0 && (*(_BYTE *)(v11 + 56) & 0xF) != 0 )
          {
            *(_DWORD *)(v11 + 304) |= 0x8000000u;
          }
        }
      }
    }
    if ( a3 )
      *a3 = v8;
    else
      FreeHwndList(v8);
    return (struct tagBWL *)1;
  }
  return result;
}
