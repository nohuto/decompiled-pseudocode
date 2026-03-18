/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C003D980
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  __int64 v0; // rcx
  LONG result; // eax

  if ( !byte_1C006FCD0 && !byte_1C006FCD1 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C006FCE0 + 3704), 2LL);
    v0 = qword_1C006FCE0;
    if ( *(_BYTE *)(qword_1C006FCE0 + 483) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(qword_1C006FCE0 + 24) + 64LL) + 3888LL));
      v0 = qword_1C006FCE0;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v0 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C006FCD8 + 72), 0);
    _InterlockedExchange64(&qword_1C006FA08, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
