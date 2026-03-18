/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C00596C0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0015224 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C005C430 (TransformPointBetweenCoordinateSpaces.c)
 *     _anonymous_namespace_::GetLogicalCursorPosition @ 0x1C00AA7C8 (_anonymous_namespace_--GetLogicalCursorPosition.c)
 * Callees:
 *     ScaleDPIPt @ 0x1C0059838 (ScaleDPIPt.c)
 *     GetMonitorRectForDpi @ 0x1C0059998 (GetMonitorRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v8; // rbx
  unsigned __int16 v9; // si
  __int64 *MonitorRectForDpi; // rax
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
      v8 = *a4;
    else
      v8 = 0LL;
    if ( !v8 )
      v8 = _MonitorFromPoint(*a2, 2LL, 18LL);
    if ( a4 )
      *a4 = v8;
    v9 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v12 = *(_OWORD *)GetMonitorRectForDpi(&v13, v8, 0LL);
    MonitorRectForDpi = (__int64 *)GetMonitorRectForDpi(&v13, v8, v9);
    ScaleDPIPt((_DWORD)a1, (_DWORD)a2, v9, *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 64LL), *MonitorRectForDpi, v12);
    return 1LL;
  }
}
