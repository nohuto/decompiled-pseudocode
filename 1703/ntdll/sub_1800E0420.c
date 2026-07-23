/*
 * XREFs of sub_1800E0420 @ 0x1800E0420
 * Callers:
 *     RtlCreateActivationContext @ 0x180054430 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800E0260 @ 0x1800E0260 (sub_1800E0260.c)
 */

NTSTATUS __fastcall sub_1800E0420(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  sub_1800E0260();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = (_QWORD *)(a1 + 8);
  v3 = qword_18015C4C8;
  if ( *(__int64 **)(qword_18015C4C8 + 8) != &qword_18015C4C8 )
    __fastfail(3u);
  *v2 = qword_18015C4C8;
  *(_QWORD *)(a1 + 16) = &qword_18015C4C8;
  *(_QWORD *)(v3 + 8) = v2;
  qword_18015C4C8 = a1 + 8;
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
