/*
 * XREFs of sub_18004D42C @ 0x18004D42C
 * Callers:
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 *     RtlAddAtomToAtomTable_0 @ 0x18004D0E8 (RtlAddAtomToAtomTable_0.c)
 *     RtlLookupAtomInAtomTable @ 0x18004D2F0 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x180040920 (RtlUpcaseUnicodeChar.c)
 *     sub_18004D5BC @ 0x18004D5BC (sub_18004D5BC.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 */

__int64 __fastcall sub_18004D42C(
        __int64 a1,
        wchar_t *a2,
        __int64 a3,
        __int64 **a4,
        _DWORD *a5,
        _QWORD *a6,
        __int64 *a7)
{
  wchar_t v10; // ax
  wchar_t *v11; // rsi
  unsigned int v12; // edi
  int v13; // ecx
  __int64 v14; // rsi
  __int64 *v15; // rbp
  __int64 i; // rdi

  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v10 = *a2;
    v11 = a2;
    v12 = 0;
    while ( v10 )
    {
      ++v11;
      if ( v10 >= 0x61u )
      {
        if ( v10 > 0x7Au )
          v10 = RtlUpcaseUnicodeChar(v10);
        else
          v10 -= 32;
      }
      v13 = v10 + (v10 >> 1) + 2 * v10;
      v10 = *v11;
      v12 += v13;
    }
    v14 = v11 - a2;
    if ( (unsigned int)v14 > 0xFF )
    {
      v15 = 0LL;
      i = 0LL;
    }
    else
    {
      v15 = (__int64 *)(a1 + 8LL * (v12 % *(_DWORD *)(a1 + 64)) + 72);
      for ( i = *v15;
            i && (*(unsigned __int8 *)(i + 16) != (_DWORD)v14 || wcsicmp((const wchar_t *)(i + 18), a2));
            i = *(_QWORD *)i )
      {
        v15 = (__int64 *)i;
      }
    }
    if ( a4 )
      *a4 = v15;
    if ( i )
      goto LABEL_17;
    if ( !a5 )
      goto LABEL_20;
    *a5 = 2 * v14;
  }
  else
  {
    i = 0LL;
    if ( (unsigned __int16)a2 >= 0xC000u )
      i = sub_18004D5BC(a1, (unsigned __int16)a2 & 0x3FFF);
    if ( a4 )
      *a4 = 0LL;
  }
  if ( !i )
    goto LABEL_20;
LABEL_17:
  if ( !a6 )
  {
LABEL_20:
    *a7 = i;
    return 0LL;
  }
  if ( i != -12 )
  {
    *a6 = i + 12;
    goto LABEL_20;
  }
  return 3221225495LL;
}
