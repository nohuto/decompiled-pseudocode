/*
 * XREFs of RtlGetParentLocaleName @ 0x180047A90
 * Callers:
 *     sub_180046AF0 @ 0x180046AF0 (sub_180046AF0.c)
 *     sub_18006E760 @ 0x18006E760 (sub_18006E760.c)
 *     sub_180088CF8 @ 0x180088CF8 (sub_180088CF8.c)
 * Callees:
 *     sub_180045280 @ 0x180045280 (sub_180045280.c)
 *     sub_180045634 @ 0x180045634 (sub_180045634.c)
 *     sub_1800462C0 @ 0x1800462C0 (sub_1800462C0.c)
 *     sub_180080990 @ 0x180080990 (sub_180080990.c)
 *     sub_1800F5104 @ 0x1800F5104 (sub_1800F5104.c)
 *     sub_1800F546C @ 0x1800F546C (sub_1800F546C.c)
 */

__int64 __fastcall RtlGetParentLocaleName(unsigned __int16 *SourceString, __int64 a2, int a3, char a4)
{
  unsigned __int8 v5; // si
  int v8; // ebp
  int v9; // eax
  _WORD *v10; // r11
  const void *v11; // r11
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  if ( !SourceString )
    return 3221225711LL;
  if ( !a2 || !*(_QWORD *)(a2 + 8) )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFF9) != 0 )
    return 3221225713LL;
  v8 = a3 & 4;
  if ( (a3 & 4) != 0
    || !(unsigned __int8)sub_1800F546C(SourceString)
    || (LOBYTE(v13) = a4, result = sub_1800F5104(SourceString, (v5 >> 1) & 1, v13, a2), (int)result < 0) )
  {
    if ( !qword_18015C278 && !(unsigned __int8)sub_180080990() )
      return 3221225473LL;
    v9 = sub_1800462C0(SourceString);
    if ( v9 >= 0 )
    {
      if ( (v5 & 2) == 0 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_18015C278 + 56)
                       * *(unsigned __int16 *)(*(_QWORD *)(qword_18015C278 + 32) + 8LL * v9 + 2)
                       + *(_QWORD *)(qword_18015C278 + 16)
                       + 24LL) & 1) == 0 )
          return 3221225711LL;
      }
      _mm_lfence();
      v10 = (_WORD *)(*(_QWORD *)(qword_18015C278 + 40)
                    + 2LL
                    + 2LL
                    * *(unsigned int *)(*(unsigned __int16 *)(qword_18015C278 + 56)
                                      * *(unsigned __int16 *)(*(_QWORD *)(qword_18015C278 + 32) + 8LL * v9 + 2)
                                      + *(_QWORD *)(qword_18015C278 + 16)
                                      + 184LL));
      if ( v10 )
      {
        if ( (int)sub_180045280(v10, 0x55uLL, &v15) < 0 )
          return 3221225473LL;
        return sub_180045634(a4, v11, v15, a2);
      }
    }
    if ( v8 && (unsigned __int8)sub_1800F546C(SourceString) )
    {
      LOBYTE(v14) = a4;
      return sub_1800F5104(SourceString, (v5 >> 1) & 1, v14, a2);
    }
    return 3221225711LL;
  }
  return result;
}
