/*
 * XREFs of sub_1801038E0 @ 0x1801038E0
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F2760 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     sub_180068DC0 @ 0x180068DC0 (sub_180068DC0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwGetContextThread @ 0x1800A7010 (ZwGetContextThread.c)
 */

__int64 __fastcall sub_1801038E0(__int64 a1)
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
    sub_180068DC0(v3, a1 + 16, 1048592);
    if ( (*(_DWORD *)(a1 + 128) & 0x355LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 4u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 4u);
  }
  return (unsigned int)ContextThread;
}
