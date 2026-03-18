/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C02037C0
 * Callers:
 *     DxgkUnload @ 0x1C01A5BE0 (DxgkUnload.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C0123C84 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C020351C (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1C02035A4 (DestroyAggregateSession.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 *v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C005F838 == RegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C0060F68, 0LL);
    v1 = &qword_1C0061A50;
    if ( qword_1C0061A50 )
    {
      while ( 1 )
      {
        v2 = *v1;
        if ( *(_UNKNOWN **)(*v1 + 344) == &dword_1C005F810 )
          break;
        v1 = (__int64 *)(v2 + 352);
        if ( !*(_QWORD *)(v2 + 352) )
          goto LABEL_9;
      }
      v0 = (_QWORD *)*v1;
      *v1 = *(_QWORD *)(v2 + 352);
      LookUpTableFlushComplete(v2);
      if ( !qword_1C0061A50 )
      {
        EtwUnregister(qword_1C005F8B0);
        qword_1C005F8B0 = 0LL;
        dword_1C005F890 = 0;
      }
    }
LABEL_9:
    ExReleasePushLockExclusiveEx(&unk_1C0060F68, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v3, v4);
    EtwUnregister(qword_1C005F830);
    qword_1C005F830 = 0LL;
    dword_1C005F810 = 0;
    DestroyAggregateSession(v0, v5, v6);
  }
  else
  {
    EtwUnregister(qword_1C005F830);
    qword_1C005F830 = 0LL;
    dword_1C005F810 = 0;
  }
}
