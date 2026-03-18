/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C00ADD68
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00927A4 (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C006D860 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C00ADAD8 (CancelTimerCallbacksAndDeleteTimer.c)
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

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C003C028 == RegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C003C520, 0LL);
    v1 = &qword_1C003C6C8;
    if ( qword_1C003C6C8 )
    {
      while ( 1 )
      {
        v2 = *v1;
        if ( *(_UNKNOWN **)(*v1 + 400) == &hProvider )
          break;
        v1 = (__int64 *)(v2 + 408);
        if ( !*(_QWORD *)(v2 + 408) )
          goto LABEL_9;
      }
      v0 = (_QWORD *)*v1;
      *v1 = *(_QWORD *)(v2 + 408);
      LookUpTableFlushComplete((_DWORD *)v2);
      if ( !qword_1C003C6C8 )
      {
        EtwUnregister(qword_1C003C0B0);
        qword_1C003C0B0 = 0LL;
        dword_1C003C090 = 0;
      }
    }
LABEL_9:
    ExReleasePushLockExclusiveEx(&unk_1C003C520, 0LL);
    CancelTimerCallbacksAndDeleteTimer((__int64)v0, v3, v4);
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
    DestroyAggregateSession(v0, v5, v6);
  }
  else
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
  }
}
