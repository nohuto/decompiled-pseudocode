/*
 * XREFs of RtlGetParentLocaleName @ 0x180031240
 * Callers:
 *     sub_180032408 @ 0x180032408 (sub_180032408.c)
 *     sub_18006FC80 @ 0x18006FC80 (sub_18006FC80.c)
 *     sub_18007EC88 @ 0x18007EC88 (sub_18007EC88.c)
 * Callees:
 *     sub_180035D8C @ 0x180035D8C (sub_180035D8C.c)
 *     sub_180036B64 @ 0x180036B64 (sub_180036B64.c)
 *     sub_1800378F0 @ 0x1800378F0 (sub_1800378F0.c)
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 *     sub_180085FA8 @ 0x180085FA8 (sub_180085FA8.c)
 *     sub_1800F2694 @ 0x1800F2694 (sub_1800F2694.c)
 */

__int64 __fastcall RtlGetParentLocaleName(PCWSTR SourceString, __int64 a2, unsigned int a3, char a4)
{
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r11
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // [rsp+40h] [rbp+8h] BYREF

  if ( !SourceString )
    return 3221225711LL;
  if ( !a2 || !*(_QWORD *)(a2 + 8) )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFF9) != 0 )
    return 3221225713LL;
  v8 = a3 & 4;
  if ( (a3 & 4) != 0
    || !(unsigned __int8)sub_180085FA8(SourceString)
    || (v17 = a3 >> 1,
        LOBYTE(v16) = a4,
        LOBYTE(v17) = (a3 & 2) != 0,
        result = sub_1800F2694(SourceString, v17, v16, a2),
        (int)result < 0) )
  {
    if ( !qword_18015D2B8 && !(unsigned __int8)sub_18007C3E8() )
      return 3221225473LL;
    v9 = sub_1800378F0(SourceString);
    v10 = a3 & 2;
    if ( v9 >= 0 )
    {
      if ( !v10 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_18015D2B8 + 56)
                       * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 32) + 8LL * v9 + 2)
                       + *(_QWORD *)(qword_18015D2B8 + 16)
                       + 24LL) & 1) == 0 )
          return 3221225711LL;
      }
      _mm_lfence();
      v11 = *(unsigned __int16 *)(qword_18015D2B8 + 56)
          * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 32) + 8LL * v9 + 2);
      v12 = *(_QWORD *)(qword_18015D2B8 + 40) + 2LL;
      if ( v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(qword_18015D2B8 + 16) + 184) )
      {
        if ( (int)sub_180035D8C(
                    v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(qword_18015D2B8 + 16) + 184),
                    85LL,
                    &v20) < 0 )
          return 3221225473LL;
        LOBYTE(v13) = a4;
        return sub_180036B64(v13, v14, v20, a2);
      }
    }
    if ( v8 && (unsigned __int8)sub_180085FA8(SourceString) )
    {
      LOBYTE(v19) = a4;
      LOBYTE(v18) = v10 != 0;
      return sub_1800F2694(SourceString, v18, v19, a2);
    }
    return 3221225711LL;
  }
  return result;
}
