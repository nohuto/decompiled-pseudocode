/*
 * XREFs of UserGetMonitorDC @ 0x1C0028978
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 * Callees:
 *     MonitorFromHdev @ 0x1C0028904 (MonitorFromHdev.c)
 *     LookupDC @ 0x1C0028930 (LookupDC.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     _ReleaseDC @ 0x1C002DA30 (_ReleaseDC.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 */

__int64 __fastcall UserGetMonitorDC(__int64 a1)
{
  __int64 MonitorDC; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 DCEx; // rsi
  __int64 *v5; // rax

  MonitorDC = 0LL;
  v2 = MonitorFromHdev(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408);
    if ( v3 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*((_QWORD *)gpDispInfo + 4));
        v5 = LookupDC(DCEx, 1);
        MonitorDC = GetMonitorDC(v5, v2, 1LL);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
      }
    }
  }
  return MonitorDC;
}
