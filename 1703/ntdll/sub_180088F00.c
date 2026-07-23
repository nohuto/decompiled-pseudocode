/*
 * XREFs of sub_180088F00 @ 0x180088F00
 * Callers:
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 *     sub_180088E9C @ 0x180088E9C (sub_180088E9C.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800DB530 @ 0x1800DB530 (sub_1800DB530.c)
 *     sub_1800DBA0C @ 0x1800DBA0C (sub_1800DBA0C.c)
 */

__int64 __fastcall sub_180088F00(__int64 a1)
{
  int v3; // esi
  __int64 *v4; // rbx
  void (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64); // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
    return 0LL;
  v3 = 0;
  RtlEnterCriticalSection(&stru_18015A540);
  if ( !(unsigned __int8)sub_1800DBA0C(*(_QWORD *)(a1 + 48)) )
  {
    v3 = sub_1800DB530(a1);
    if ( v3 >= 0 )
    {
      v4 = (__int64 *)qword_18015A570;
      while ( v4 != &qword_18015A570 )
      {
        v5 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v4[6];
        v4 = (__int64 *)*v4;
        if ( v5 )
          v5(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
  }
  RtlLeaveCriticalSection(&stru_18015A540);
  return (unsigned int)v3;
}
