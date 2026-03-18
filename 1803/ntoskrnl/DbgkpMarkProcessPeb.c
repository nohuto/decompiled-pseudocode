/*
 * XREFs of DbgkpMarkProcessPeb @ 0x14070E7A8
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1404EAE58 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1405EE030 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x14070E4D0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x14070F46C (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  _WORD *v3; // rcx
  __int16 v4; // ax
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1016) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v5);
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
      KiUnstackDetachProcess((__int64)v5, 0LL);
    }
    ExReleaseRundownProtection(v2);
  }
}
