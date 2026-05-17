/*
 * XREFs of EtwpShutdownCompression @ 0x18005EEFC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpShutdownCompression(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 432);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v4 = 0LL;
    return ZwFreeVirtualMemory(-1LL, a1 + 440, &v4, 0x8000LL);
  }
  return result;
}
