/*
 * XREFs of EtwpUMGLEnabled @ 0x1407A5B34
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rsi
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int16 v8; // dx
  _BYTE v9[48]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( !v2 )
    return 0;
  v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v9);
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
  KiUnstackDetachProcess((__int64)v9, 0LL);
  ExReleaseRundownProtection(v4);
  return v5;
}
