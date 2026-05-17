/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x180062DA0
 * Callers:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_18006227C @ 0x18006227C (sub_18006227C.c)
 *     sub_180062CC4 @ 0x180062CC4 (sub_180062CC4.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable_U(_WORD *a1, wchar_t **a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // cx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             a1,
             a2[1],
             (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
             *(_QWORD *)(a3 + 8),
             (unsigned __int64)*(unsigned __int16 *)(a3 + 2) >> 1,
             &v6);
  v5 = v6;
  if ( v6 > 0x7FFF )
    return 3221225495LL;
  if ( (_DWORD)result == -1073741789 )
    v5 = v6 - 1;
  *(_WORD *)a3 = 2 * v5;
  return result;
}
