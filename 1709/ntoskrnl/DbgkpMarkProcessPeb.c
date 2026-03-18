/*
 * XREFs of DbgkpMarkProcessPeb @ 0x1406AA048
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14053A2F4 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1405F1AF4 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1406A9D70 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1406AACFC (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  _WORD *v3; // rcx
  __int16 v4; // ax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v5; // [rsp+28h] [rbp-40h] BYREF

  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1016) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v5);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1056) != 0LL;
      v3 = *(_WORD **)(BugCheckParameter1 + 1064);
      if ( v3 )
      {
        v4 = v3[4];
        if ( v4 == 332 || v4 == 452 )
        {
          if ( *(_QWORD *)v3 )
            *(_BYTE *)(*(_QWORD *)v3 + 2LL) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL);
        }
      }
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess(&v5, 0LL);
    }
    ExReleaseRundownProtection_0(v2);
  }
}
