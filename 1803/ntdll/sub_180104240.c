/*
 * XREFs of sub_180104240 @ 0x180104240
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800EF810 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     sub_180086454 @ 0x180086454 (sub_180086454.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwGetContextThread @ 0x18009C810 (ZwGetContextThread.c)
 */

__int64 __fastcall sub_180104240(__int64 a1)
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
    sub_180086454(v3, a1 + 16, 1048592);
    if ( (*(_DWORD *)(a1 + 128) & 0x355LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 4u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 4u);
  }
  return (unsigned int)ContextThread;
}
