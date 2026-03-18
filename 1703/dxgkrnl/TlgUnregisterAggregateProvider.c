/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C01E9058
 * Callers:
 *     DxgkUnload @ 0x1C01910D0 (DxgkUnload.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C01208B4 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C01E8DC4 (CancelTimerCallbacksAndDeleteTimer.c)
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

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C006E838 == RegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C00700D8, 0LL);
    v1 = &qword_1C0070BB8;
    if ( qword_1C0070BB8 )
    {
      while ( 1 )
      {
        v2 = *v1;
        if ( *(_UNKNOWN **)(*v1 + 400) == &dword_1C006E810 )
          break;
        v1 = (__int64 *)(v2 + 408);
        if ( !*(_QWORD *)(v2 + 408) )
          goto LABEL_9;
      }
      v0 = (_QWORD *)*v1;
      *v1 = *(_QWORD *)(v2 + 408);
      LookUpTableFlushComplete(v2);
      if ( !qword_1C0070BB8 )
      {
        EtwUnregister(qword_1C006E8B0);
        qword_1C006E8B0 = 0LL;
        dword_1C006E890 = 0;
      }
    }
LABEL_9:
    ExReleasePushLockExclusiveEx(&unk_1C00700D8, 0LL);
    CancelTimerCallbacksAndDeleteTimer((__int64)v0, v3, v4);
    EtwUnregister(qword_1C006E830);
    qword_1C006E830 = 0LL;
    dword_1C006E810 = 0;
    DestroyAggregateSession(v0, v5, v6);
  }
  else
  {
    EtwUnregister(qword_1C006E830);
    qword_1C006E830 = 0LL;
    dword_1C006E810 = 0;
  }
}
