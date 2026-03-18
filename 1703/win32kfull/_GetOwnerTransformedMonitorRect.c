/*
 * XREFs of _GetOwnerTransformedMonitorRect @ 0x1C0137BFC
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C0137B10 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

char __fastcall GetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, int a3, _OWORD *a4)
{
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rdx
  _OWORD *v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF

  if ( a3 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v8 = (_OWORD *)(*(_QWORD *)(a2 + 40) + 92LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v8 = (_OWORD *)(*(_QWORD *)(a2 + 40) + 108LL);
    }
    else
    {
      v8 = (_OWORD *)(*(_QWORD *)(a2 + 40) + 76LL);
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v8 = (_OWORD *)(*(_QWORD *)(a2 + 40) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v8 = (_OWORD *)(*(_QWORD *)(a2 + 40) + 60LL);
  }
  else
  {
    v8 = (_OWORD *)(*(_QWORD *)(a2 + 40) + 28LL);
  }
  v9 = *v8;
  LOBYTE(v8) = *(_DWORD *)(a1 + 368) & 0xF;
  v14 = v9;
  if ( (_BYTE)v8 != 2 )
  {
    v8 = (_OWORD *)ValidateHmonitorNoRip(*(_QWORD *)(a1 + 360));
    v13 = v8;
    if ( v8 )
    {
      if ( v8 != (_OWORD *)a2 )
      {
        v10 = *(_QWORD *)(a2 + 40);
        if ( a3 )
          v11 = v10 + 76;
        else
          v11 = v10 + 28;
        LOBYTE(v8) = PhysicalToLogicalDPIRect(&v14, v11, 0LL, &v13);
      }
    }
  }
  *a4 = v14;
  return (char)v8;
}
