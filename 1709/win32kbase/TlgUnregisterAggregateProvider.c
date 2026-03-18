/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C01C42D8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0075CD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C01C43B4 (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C01C43F0 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C01C4530 (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 *v1; // rcx
  __int64 v2; // rax
  NTSTATUS result; // eax

  if ( (ETWENABLECALLBACK *)qword_1C0188808 == RegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C01937C0, 0LL);
    v1 = &qword_1C01937C8;
    if ( qword_1C01937C8 )
    {
      while ( 1 )
      {
        v2 = *v1;
        if ( *(int **)(*v1 + 344) == &dword_1C01887E0 )
          break;
        v1 = (__int64 *)(v2 + 352);
        if ( !*(_QWORD *)(v2 + 352) )
          goto LABEL_6;
      }
      v0 = (void *)*v1;
      *v1 = *(_QWORD *)(v2 + 352);
      LookUpTableFlushComplete(v2);
      if ( !qword_1C01937C8 )
      {
        EtwUnregister(qword_1C0188CA0);
        qword_1C0188CA0 = 0LL;
        dword_1C0188C80 = 0;
      }
    }
LABEL_6:
    ExReleasePushLockExclusiveEx(&unk_1C01937C0, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    EtwUnregister(qword_1C0188800);
    qword_1C0188800 = 0LL;
    dword_1C01887E0 = 0;
    return DestroyAggregateSession(v0);
  }
  else
  {
    result = EtwUnregister(qword_1C0188800);
    qword_1C0188800 = 0LL;
    dword_1C01887E0 = 0;
  }
  return result;
}
