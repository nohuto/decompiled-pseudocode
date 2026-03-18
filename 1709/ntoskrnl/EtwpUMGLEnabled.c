/*
 * XREFs of EtwpUMGLEnabled @ 0x140743E54
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rsi
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int16 v8; // dx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v9; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( !v2 )
    return 0;
  v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v9);
  v5 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v6 = 0LL;
  v7 = *(__int64 **)(BugCheckParameter1 + 1064);
  if ( v7 )
  {
    v8 = *((_WORD *)v7 + 4);
    if ( v8 == 332 || v8 == 452 )
      v6 = *v7;
  }
  if ( v6 && (v5 || _bittest((const signed __int32 *)(v6 + 576), 0)) )
    v5 = 1;
  KiUnstackDetachProcess(&v9, 0LL);
  ExReleaseRundownProtection_0(v4);
  return v5;
}
