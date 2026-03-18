/*
 * XREFs of UserGetMonitorDC @ 0x1C005A800
 * Callers:
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     _ReleaseDC @ 0x1C0057860 (_ReleaseDC.c)
 *     LookupDC @ 0x1C005A8C0 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C005A908 (MonitorFromHdev.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  struct tagMONITOR *v1; // rdi
  __int64 v2; // rax
  int v3; // edx
  __int64 DCEx; // rsi
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d

  MonitorDC = 0LL;
  v1 = (struct tagMONITOR *)MonitorFromHdev();
  if ( v1 )
  {
    v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
    if ( v2 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), v3, v5);
        v6 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v6, v1, 1);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v7, v8);
      }
    }
  }
  return MonitorDC;
}
