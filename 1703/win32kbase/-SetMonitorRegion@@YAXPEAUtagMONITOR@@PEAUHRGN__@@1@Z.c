/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0027BCC
 * Callers:
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C00400D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C0040BF0 (GreSetRectRgn.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  HRGN v6; // r8

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v6 = (HRGN)*((_QWORD *)a1 + 12);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v6 = (HRGN)*((_QWORD *)a1 + 13);
  }
  else
  {
    v6 = (HRGN)*((_QWORD *)a1 + 11);
  }
  if ( (unsigned int)GreCombineRgn(a2, a3, v6, 1) )
  {
    if ( ((W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
       || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) == 0)
      && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) )
    {
      W32GetThreadWin32Thread(KeGetCurrentThread());
    }
    if ( ((W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
       || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) == 0)
      && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) )
        W32GetThreadWin32Thread(KeGetCurrentThread());
    }
    GreOffsetRgn(a2);
  }
  else
  {
    GreSetRectRgn(a2, 0);
  }
}
