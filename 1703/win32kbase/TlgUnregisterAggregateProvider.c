/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C01BD280
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C01BD354 (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C01BD38C (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C01BD3B4 (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 *v1; // rcx
  __int64 v2; // rax
  NTSTATUS result; // eax

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C0186808 == RegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C018E958, 0LL);
    v1 = &qword_1C018E960;
    if ( qword_1C018E960 )
    {
      while ( 1 )
      {
        v2 = *v1;
        if ( *(_UNKNOWN **)(*v1 + 400) == &dword_1C01867E0 )
          break;
        v1 = (__int64 *)(v2 + 408);
        if ( !*(_QWORD *)(v2 + 408) )
          goto LABEL_6;
      }
      v0 = (void *)*v1;
      *v1 = *(_QWORD *)(v2 + 408);
      LookUpTableFlushComplete(v2);
      if ( !qword_1C018E960 )
      {
        EtwUnregister(qword_1C0186C90);
        qword_1C0186C90 = 0LL;
        dword_1C0186C70 = 0;
      }
    }
LABEL_6:
    ExReleasePushLockExclusiveEx(&unk_1C018E958, 0LL);
    CancelTimerCallbacksAndDeleteTimer(v0);
    EtwUnregister(qword_1C0186800);
    qword_1C0186800 = 0LL;
    dword_1C01867E0 = 0;
    return DestroyAggregateSession(v0);
  }
  else
  {
    result = EtwUnregister(qword_1C0186800);
    qword_1C0186800 = 0LL;
    dword_1C01867E0 = 0;
  }
  return result;
}
