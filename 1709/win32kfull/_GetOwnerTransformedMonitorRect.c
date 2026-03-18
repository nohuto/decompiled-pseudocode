/*
 * XREFs of _GetOwnerTransformedMonitorRect @ 0x1C013F060
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C013EF80 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

char __fastcall GetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, int a3, _OWORD *a4)
{
  __int128 *MonitorWorkRect; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = GetMonitorWorkRect(&v17, a2);
  else
    MonitorWorkRect = GetMonitorRect(&v18, a2);
  v19 = *MonitorWorkRect;
  LOBYTE(MonitorWorkRect) = *(_DWORD *)(a1 + 368) & 0xF;
  if ( (_BYTE)MonitorWorkRect != 2 )
  {
    MonitorWorkRect = (__int128 *)ValidateHmonitorNoRip(*(_QWORD *)(a1 + 360));
    *(_QWORD *)&v17 = MonitorWorkRect;
    if ( MonitorWorkRect )
    {
      if ( MonitorWorkRect != (__int128 *)a2 )
      {
        v13 = *(_QWORD *)(a2 + 40);
        if ( a3 )
          v14 = v13 + 44;
        else
          v14 = v13 + 28;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12);
        LOBYTE(MonitorWorkRect) = PhysicalToLogicalDPIRect(&v19, v14, CurrentThreadDpiAwarenessContext, &v17);
      }
    }
  }
  *a4 = v19;
  return (char)MonitorWorkRect;
}
