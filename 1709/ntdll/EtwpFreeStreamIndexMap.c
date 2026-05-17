/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x1800610A8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     EtwpInitLoggerContext @ 0x180065218 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 504);
  if ( v1 )
  {
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  return result;
}
