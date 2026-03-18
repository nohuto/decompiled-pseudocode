/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C003C5F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C007AAA8 && !byte_1C007AAA9 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C007AAB8 + 3728), 2LL);
    if ( *(_BYTE *)(qword_1C007AAB8 + 483) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(qword_1C007AAB8 + 24) + 64LL) + 3912LL));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C007AAB8 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C007AAB0 + 72), 0);
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    return KeReleaseMutex((PRKMUTEX)Mutex, 0);
  }
  return result;
}
