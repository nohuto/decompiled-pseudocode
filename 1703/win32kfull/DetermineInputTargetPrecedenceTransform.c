/*
 * XREFs of DetermineInputTargetPrecedenceTransform @ 0x1C0106660
 * Callers:
 *     DetermineMouseInputTarget @ 0x1C005F7F4 (DetermineMouseInputTarget.c)
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C01064C0 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0106540 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C019DB68 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     IsValidMonitor @ 0x1C00FC0E4 (IsValidMonitor.c)
 *     GetMonitorTransform @ 0x1C01C04A0 (GetMonitorTransform.c)
 */

__int64 __fastcall DetermineInputTargetPrecedenceTransform(__int64 a1, __int64 *a2)
{
  __int64 TopLevelWindow; // rbx
  bool v5; // zf
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 MonitorTransform; // rax
  __int64 v11; // rcx

  TopLevelWindow = GetTopLevelWindow(gspwndInternalCapture);
  if ( TopLevelWindow )
  {
    v5 = TopLevelWindow == GetTopLevelWindow(a1);
    v6 = *(_QWORD *)(a1 + 16);
    if ( v5 )
    {
      v7 = *(_QWORD **)(v6 + 592);
      if ( v7 && *v7 == TopLevelWindow && (unsigned int)IsValidMonitor(v7[24]) )
      {
        MonitorTransform = GetMonitorTransform(v8, a1);
LABEL_8:
        *a2 = MonitorTransform;
        return 1LL;
      }
LABEL_7:
      MonitorTransform = *(_QWORD *)(TopLevelWindow + 288);
      goto LABEL_8;
    }
    v11 = *(_QWORD *)(v6 + 384);
    if ( v11
      && v11 == *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 384LL)
      && *(_QWORD *)(v11 + 72) == gspwndInternalCapture )
    {
      goto LABEL_7;
    }
  }
  return 0LL;
}
