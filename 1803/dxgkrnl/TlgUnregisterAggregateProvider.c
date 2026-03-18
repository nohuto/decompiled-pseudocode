/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C023D26C
 * Callers:
 *     DxgkUnload @ 0x1C0197330 (DxgkUnload.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C023CAD8 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1C023CD48 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x1C023CE20 (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C00790B8 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C007AEA0, 0LL);
    v1 = qword_1C007BE50;
    v2 = &qword_1C007BE50;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(_UNKNOWN **)(v1 + 344) == &dword_1C0079090 )
      {
        v0 = (_QWORD *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete(v1);
        if ( !qword_1C007BE50 )
        {
          EtwUnregister(qword_1C0079D90);
          qword_1C0079D90 = 0LL;
          dword_1C0079D70 = 0;
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C007AEA0, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    EtwUnregister(qword_1C00790B0);
    qword_1C00790B0 = 0LL;
    dword_1C0079090 = 0;
    DestroyAggregateSession(v0, v6, v7);
  }
  else
  {
    EtwUnregister(qword_1C00790B0);
    qword_1C00790B0 = 0LL;
    dword_1C0079090 = 0;
  }
}
