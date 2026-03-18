/*
 * XREFs of GetDPIMonitorRect @ 0x1C0020B94
 * Callers:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDPIMonitorRect(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf

  v2 = *(_QWORD *)(a1 + 40);
  if ( (a2 & 0x20) != 0 )
    goto LABEL_2;
  if ( (a2 & 0x40) != 0 )
    goto LABEL_7;
  if ( a2 < 0 )
  {
    v3 = 60LL;
    return v2 + v3;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v5, v7, v8) + 408) )
    {
      v6 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v9, v10, v11) + 408) + 8LL);
      if ( (*(_DWORD *)(v6 + 52) & 1) != 0 )
      {
LABEL_7:
        v3 = 44LL;
        return v2 + v3;
      }
    }
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v6) & 0xF) != 1
    || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v12, v13, v14) + 408)
    || (v18 = (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v15, v16, v17) + 408)
                                       + 8LL)
                         + 52LL) & 1) == 0,
        v3 = 60LL,
        v18) )
  {
LABEL_2:
    v3 = 28LL;
  }
  return v2 + v3;
}
