/*
 * XREFs of EtwpUMGLEnabled @ 0x140709CA4
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int16 v7; // dx
  $5BC46E0569261879018906DEC3127961 v8; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( !v2 || !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v8);
  v4 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v5 = 0LL;
  v6 = *(__int64 **)(BugCheckParameter1 + 1064);
  if ( v6 )
  {
    v7 = *((_WORD *)v6 + 4);
    if ( v7 == 332 || v7 == 452 )
      v5 = *v6;
  }
  if ( v5 )
    v4 = v4 || _bittest((const signed __int32 *)(v5 + 576), 0);
  KiUnstackDetachProcess(&v8, 0LL);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  return v4;
}
