/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C002E510
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C0060B50 && !byte_1C0060B51 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C0060B60 + 3728), 2LL);
    if ( *(_BYTE *)(qword_1C0060B60 + 483) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(qword_1C0060B60 + 24) + 64LL) + 3912LL));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C0060B60 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C0060B58 + 72), 0);
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
