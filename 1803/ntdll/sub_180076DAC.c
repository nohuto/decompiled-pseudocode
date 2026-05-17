/*
 * XREFs of sub_180076DAC @ 0x180076DAC
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     sub_1800CA01C @ 0x1800CA01C (sub_1800CA01C.c)
 * Callees:
 *     RtlCharToInteger @ 0x180076E50 (RtlCharToInteger.c)
 *     strrchr @ 0x180090220 (strrchr.c)
 */

__int64 __fastcall sub_180076DAC(const char *a1, __int64 a2, char **a3, ULONG *a4)
{
  char *v8; // rax
  char *v9; // rbx
  __int16 v10; // cx

  v8 = strrchr(a1, 46);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = (_WORD)v8 - (_WORD)a1;
    if ( (unsigned __int64)(v8 - a1) <= 0xFFFF )
    {
      *(_QWORD *)(a2 + 8) = a1;
      *(_WORD *)a2 = v10;
      *(_WORD *)(a2 + 2) = v10;
      if ( v8[1] != 35 )
      {
        v9 = v8 + 1;
LABEL_5:
        *a3 = v9;
        return 0LL;
      }
      if ( RtlCharToInteger(v8 + 2, 0, a4) >= 0 )
        goto LABEL_5;
    }
  }
  return 3221225595LL;
}
