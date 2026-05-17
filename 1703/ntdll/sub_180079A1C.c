/*
 * XREFs of sub_180079A1C @ 0x180079A1C
 * Callers:
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 * Callees:
 *     RtlCharToInteger @ 0x180079AB0 (RtlCharToInteger.c)
 *     strrchr @ 0x18009AEA0 (strrchr.c)
 */

__int64 __fastcall sub_180079A1C(const char *a1, __int64 a2, char **a3, ULONG *a4)
{
  char *v8; // rax
  __int16 v9; // cx
  char *v10; // rax

  v8 = strrchr(a1, 46);
  if ( v8 )
  {
    v9 = (_WORD)v8 - (_WORD)a1;
    if ( (unsigned __int64)(v8 - a1) <= 0xFFFF )
    {
      v10 = v8 + 1;
      *(_QWORD *)(a2 + 8) = a1;
      *(_WORD *)a2 = v9;
      *(_WORD *)(a2 + 2) = v9;
      if ( *v10 != 35 )
      {
        *a3 = v10;
        return 0LL;
      }
      if ( RtlCharToInteger(v10 + 1, 0, a4) >= 0 )
      {
        *a3 = 0LL;
        return 0LL;
      }
    }
  }
  return 3221225595LL;
}
