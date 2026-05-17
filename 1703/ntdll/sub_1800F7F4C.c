/*
 * XREFs of sub_1800F7F4C @ 0x1800F7F4C
 * Callers:
 *     sub_180002B34 @ 0x180002B34 (sub_180002B34.c)
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 *     sub_1800F7A54 @ 0x1800F7A54 (sub_1800F7A54.c)
 *     sub_1800F7A9C @ 0x1800F7A9C (sub_1800F7A9C.c)
 *     sub_1800F8098 @ 0x1800F8098 (sub_1800F8098.c)
 *     sub_1800F80DC @ 0x1800F80DC (sub_1800F80DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F7F4C(__int64 a1, int a2, int a3)
{
  int v5; // edx
  __int64 v6; // rax
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // di
  __int64 v9; // r9
  int v10; // r10d

  if ( ((a2 & 0x1F0000) == 0) != ((a3 & 0x1F0000) == 0) )
    return 0LL;
  if ( !*(_DWORD *)(a1 + 88) )
    return 0LL;
  v5 = (a2 + 12541 * a3) % *(_DWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_WORD *)(v6 + 2LL * (unsigned __int16)v5);
  v8 = *(_WORD *)(v6 + 2LL * (unsigned __int16)v5 + 2);
  if ( v7 >= v8 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 104);
  while ( 1 )
  {
    v10 = *(unsigned __int16 *)(v9 + 2LL * v7);
    if ( a2 == v10 && a3 == *(unsigned __int16 *)(v9 + 2LL * v7 + 2) )
      return *(unsigned __int16 *)(v9 + 2LL * v7 + 4);
    if ( (unsigned __int16)(v10 + 10240) <= 0x7FFu )
      break;
LABEL_14:
    v7 += 3;
    if ( v7 >= v8 )
      return 0LL;
  }
  if ( a2 <= 0xFFFF
    || (_WORD)v10 != (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v9 + 2LL * v7 + 2) != (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
    || *(_WORD *)(v9 + 2LL * v7 + 4) != (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v9 + 2LL * v7 + 6) != (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
  {
    v7 += 3;
    goto LABEL_14;
  }
  return *(unsigned __int16 *)(v9 + 2LL * ((unsigned int)v7 + 5))
       + (((unsigned int)*(unsigned __int16 *)(v9 + 2LL * ((unsigned int)v7 + 4)) - 55287) << 10);
}
