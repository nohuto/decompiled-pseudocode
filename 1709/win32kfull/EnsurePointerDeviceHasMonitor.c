/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C004A740
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( !*(_DWORD *)(v1 + 776) )
    return 1;
  if ( !*(_QWORD *)(v1 + 784) )
    RIMFindMonitorForDigitizer(*(_QWORD *)(a1 + 16), a1, 1LL);
  if ( !*(_DWORD *)(v1 + 776) || *(_QWORD *)(v1 + 784) )
    return 1;
  return v2;
}
