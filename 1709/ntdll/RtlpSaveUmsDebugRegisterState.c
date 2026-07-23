/*
 * XREFs of RtlpSaveUmsDebugRegisterState @ 0x180108840
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F33E0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x1800725D0 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwGetContextThread @ 0x1800A1DF0 (ZwGetContextThread.c)
 */

__int64 __fastcall RtlpSaveUmsDebugRegisterState(__int64 a1)
{
  __int64 v3; // rcx
  NTSTATUS ContextThread; // edi
  struct _CONTEXT ThreadContext; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  ThreadContext.ContextFlags = 1048592;
  ContextThread = ZwGetContextThread((HANDLE)0xFFFFFFFFFFFFFFFELL, &ThreadContext);
  if ( ContextThread >= 0 )
  {
    RtlpCopyLegacyContext(v3, a1 + 16, 1048592);
    if ( (*(_DWORD *)(a1 + 128) & 0x355LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 4u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 4u);
  }
  return (unsigned int)ContextThread;
}
