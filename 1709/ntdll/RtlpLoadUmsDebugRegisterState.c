/*
 * XREFs of RtlpLoadUmsDebugRegisterState @ 0x1801087E0
 * Callers:
 *     RtlpLoadPrimaryDbgRegWrap @ 0x1800A4C70 (RtlpLoadPrimaryDbgRegWrap.c)
 *     RtlExecuteUmsThread @ 0x1800F34C0 (RtlExecuteUmsThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x1800725D0 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwContinue @ 0x1800A0920 (ZwContinue.c)
 */

__int64 __fastcall RtlpLoadUmsDebugRegisterState(__int64 a1)
{
  _BYTE v2[1232]; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  RtlpCopyLegacyContext(a1, (__int64)v2, 1048592);
  return ZwContinue();
}
