/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18004BD30
 * Callers:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_18004B1D4 @ 0x18004B1D4 (sub_18004B1D4.c)
 *     sub_18004BC58 @ 0x18004BC58 (sub_18004BC58.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800D94B4 @ 0x1800D94B4 (sub_1800D94B4.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180022780 (RtlQueryEnvironmentVariable.c)
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
