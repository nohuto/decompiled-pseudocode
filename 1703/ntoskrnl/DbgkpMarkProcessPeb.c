/*
 * XREFs of DbgkpMarkProcessPeb @ 0x14067EEF8
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14049CDD4 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1405860B0 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x14067EC20 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x14067FB20 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int16 v4; // cx
  $5BC46E0569261879018906DEC3127961 v5; // [rsp+28h] [rbp-40h] BYREF

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1016) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v5);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1056) != 0LL;
      v2 = 0LL;
      v3 = *(__int64 **)(BugCheckParameter1 + 1064);
      if ( v3 )
      {
        v4 = *((_WORD *)v3 + 4);
        if ( v4 == 332 || v4 == 452 )
          v2 = *v3;
      }
      if ( v2 )
        *(_BYTE *)(v2 + 2) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL);
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess(&v5, 0LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  }
}
