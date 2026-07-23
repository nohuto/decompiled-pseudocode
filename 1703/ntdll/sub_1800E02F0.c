/*
 * XREFs of sub_1800E02F0 @ 0x1800E02F0
 * Callers:
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180087358 @ 0x180087358 (sub_180087358.c)
 *     sub_1800E0260 @ 0x1800E0260 (sub_1800E0260.c)
 */

NTSTATUS __fastcall sub_1800E02F0(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  unsigned int i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  sub_1800E0260();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v2 + 8) != a1 + 8 || *v3 != a1 + 8 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  for ( i = dword_18015C4B0; i && i >= dword_180158694; i = --dword_18015C4B0 )
  {
    v5 = qword_18015C4B8;
    v6 = *(_QWORD *)qword_18015C4B8;
    if ( *(__int64 **)(qword_18015C4B8 + 8) != &qword_18015C4B8 || *(_QWORD *)(v6 + 8) != qword_18015C4B8 )
      __fastfail(3u);
    qword_18015C4B8 = *(_QWORD *)qword_18015C4B8;
    *(_QWORD *)(v6 + 8) = &qword_18015C4B8;
    sub_180087358(v5 - 8);
  }
  if ( dword_180158694 )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = (_QWORD *)qword_18015C4C0;
    if ( *(__int64 **)qword_18015C4C0 != &qword_18015C4B8 )
      __fastfail(3u);
    *v7 = &qword_18015C4B8;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v7;
    qword_18015C4C0 = a1 + 8;
    dword_18015C4B0 = i + 1;
  }
  else
  {
    sub_180087358(a1);
  }
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
