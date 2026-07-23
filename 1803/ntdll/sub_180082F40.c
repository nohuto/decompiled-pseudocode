/*
 * XREFs of sub_180082F40 @ 0x180082F40
 * Callers:
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 *     sub_180082EDC @ 0x180082EDC (sub_180082EDC.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800D4CE4 @ 0x1800D4CE4 (sub_1800D4CE4.c)
 *     sub_1800D51CC @ 0x1800D51CC (sub_1800D51CC.c)
 */

__int64 __fastcall sub_180082F40(__int64 a1)
{
  int v3; // esi
  __int64 *v4; // rbx
  void (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64); // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
    return 0LL;
  v3 = 0;
  RtlEnterCriticalSection(&stru_18015B560);
  if ( !(unsigned __int8)sub_1800D51CC(*(_QWORD *)(a1 + 48)) )
  {
    v3 = sub_1800D4CE4(a1);
    if ( v3 >= 0 )
    {
      v4 = (__int64 *)qword_18015B590;
      while ( v4 != &qword_18015B590 )
      {
        v5 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v4[6];
        v4 = (__int64 *)*v4;
        if ( v5 )
          v5(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
  }
  RtlLeaveCriticalSection(&stru_18015B560);
  return (unsigned int)v3;
}
