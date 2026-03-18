/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x1C005C430
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C00596C0 (PhysicalToLogicalDPIPoint.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C005D320 (LogicalToPhysicalDPIPoint.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v8; // eax
  int v10; // ebx

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a3 + 368);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 368);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext();
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v8 >> 8)) & 0x1FF) != 0 )
  {
    v10 = LogicalToPhysicalDPIPoint(a1, a2, v8, 0LL);
    return v10 | (unsigned int)PhysicalToLogicalDPIPoint(a1, a1, CurrentThreadDpiAwarenessContext, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
