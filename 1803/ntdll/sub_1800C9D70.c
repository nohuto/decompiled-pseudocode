/*
 * XREFs of sub_1800C9D70 @ 0x1800C9D70
 * Callers:
 *     LdrDeleteEnclave @ 0x1800C9790 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     ZwTerminateEnclave @ 0x18009E170 (ZwTerminateEnclave.c)
 *     sub_1800C9AFC @ 0x1800C9AFC (sub_1800C9AFC.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

__int64 __fastcall sub_1800C9D70(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  result = ZwTerminateEnclave();
  if ( (int)result >= 0 )
  {
    a1[13] = 0LL;
    sub_1800C9AFC((__int64)a1, -1073741823);
    a1[8] = 0LL;
    RtlEnterCriticalSection((__int64)&unk_18015CA80);
    v3 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    RtlLeaveCriticalSection((__int64)&unk_18015CA80);
    sub_1800C9DEC(a1);
    return 0LL;
  }
  return result;
}
