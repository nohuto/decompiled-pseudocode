/*
 * XREFs of EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C01064C0
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C0106660 (DetermineInputTargetPrecedenceTransform.c)
 *     TransformVector @ 0x1C01D1D30 (TransformVector.c)
 */

__int64 __fastcall EditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v5 = a5;
  *a5 = a3;
  v8 = *(_QWORD *)(a1 + 80);
  result = IsWindowDesktopComposed(v8);
  if ( (_DWORD)result )
  {
    result = DetermineInputTargetPrecedenceTransform(v8, &a5);
    if ( (_DWORD)result )
    {
      if ( a5 )
        return TransformVector((_DWORD)a5, (_DWORD)v5, (int)v5 + 4, 0, 1);
    }
    else if ( *(_QWORD *)(a2 + 80) == v8 )
    {
      *v5 = a4;
    }
    else
    {
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v8);
      return PhysicalToLogicalDPIPoint(v5, &v11, MonitorFlagsFromWindow, 0LL);
    }
  }
  return result;
}
