/*
 * XREFs of RtlDuplicateUnicodeString @ 0x18007DE00
 * Callers:
 *     sub_1801060F4 @ 0x1801060F4 (sub_1801060F4.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     RtlValidateUnicodeString @ 0x18007DF40 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlDuplicateUnicodeString(int a1, __int16 *a2, __int64 a3)
{
  char v5; // r15
  unsigned __int16 v6; // di
  _WORD *v7; // rsi
  __int64 result; // rax
  unsigned __int16 v9; // bx
  _WORD *v10; // rax

  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || (a1 & 3) == 2 )
    return 3221225485LL;
  result = RtlValidateUnicodeString(0LL);
  if ( (int)result < 0 )
    return result;
  if ( a2 )
    v6 = *a2;
  if ( (v5 & 1) != 0 && v6 == 0xFFFE )
    return 3221225734LL;
  if ( (v5 & 1) != 0 )
    v9 = v6 + 2;
  else
    v9 = v6;
  if ( (v5 & 2) == 0 && !v6 )
    v9 = 0;
  if ( !v9 )
    goto LABEL_20;
  v10 = (_WORD *)sub_180043FE0(v9);
  v7 = v10;
  if ( v10 )
  {
    if ( v6 )
      memmove(v10, *((const void **)a2 + 1), v6);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)v6 >> 1] = 0;
LABEL_20:
    *(_WORD *)(a3 + 2) = v9;
    *(_WORD *)a3 = v6;
    *(_QWORD *)(a3 + 8) = v7;
    return 0LL;
  }
  return 3221225495LL;
}
