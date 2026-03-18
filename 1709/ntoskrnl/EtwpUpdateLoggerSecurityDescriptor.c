/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x140450E0C
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x140749674 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, void *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h]

  v3 = ObLogSecurityDescriptor(a2);
  if ( v3 >= 0 )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 800), (v9 | 0xF) & -(__int64)(v9 != 0));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v8, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(&EtwpSecurityLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObDereferenceSecurityDescriptor(v4 & 0xFFFFFFFFFFFFFFF0uLL, (unsigned int)(v4 & 0xF) + 1);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v6, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
