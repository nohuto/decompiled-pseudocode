/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C0104B30
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C010493C (_GetPointerDeviceRects.c)
 * Callees:
 *     FindMonitorForDigitizer @ 0x1C01A6B50 (FindMonitorForDigitizer.c)
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1)
{
  unsigned int v2; // ebx
  bool v3; // zf

  GetDispInfo();
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 288) == 0LL;
  if ( !*(_QWORD *)(a1 + 288) )
  {
    FindMonitorForDigitizer((struct tagHID_POINTER_DEVICE_INFO *)a1);
    v3 = *(_QWORD *)(a1 + 288) == 0LL;
  }
  LOBYTE(v2) = !v3;
  return v2;
}
