/*
 * XREFs of CmpNotifyTriggerCheck @ 0x1404E289C
 * Callers:
 *     CmpReportNotifyHelper @ 0x1404E2660 (CmpReportNotifyHelper.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     CmpCheckNotifyAccess @ 0x1404E2560 (CmpCheckNotifyAccess.c)
 */

BOOLEAN __fastcall CmpNotifyTriggerCheck(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9

  ExAcquireFastMutexUnsafe(&CmpPostLock);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 == a1 + 16 || (unsigned __int16)*(_DWORD *)(v6 + 56) != 3 )
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return CmpCheckNotifyAccess(a1, a2, a3);
  }
  else
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return 1;
  }
}
