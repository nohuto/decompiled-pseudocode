/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x180028CF0
 * Callers:
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 *     sub_1800FE028 @ 0x1800FE028 (sub_1800FE028.c)
 *     sub_1800FEC74 @ 0x1800FEC74 (sub_1800FEC74.c)
 * Callees:
 *     sub_180088C98 @ 0x180088C98 (sub_180088C98.c)
 */

__int64 __fastcall RtlRunOnceBeginInitialize(volatile signed __int64 *a1, int a2, unsigned __int64 *a3)
{
  signed __int64 v5; // rax
  unsigned int v6; // edi
  BOOL v8; // ebp
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt
  unsigned int v11; // eax

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFFC) != 0 )
    return 3221225712LL;
  v5 = *a1;
  v6 = 0;
  if ( (*a1 & 3) == 2 )
  {
LABEL_3:
    if ( a3 )
      *a3 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    return v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v8 = (a2 & 2) == 0;
    while ( 1 )
    {
      while ( (v5 & 3) == 0 )
      {
        if ( v8 )
          v9 = 1LL;
        else
          v9 = 3LL;
        v10 = v5;
        v5 = _InterlockedCompareExchange64(a1, v9, v5);
        if ( v10 == v5 )
          return 259;
      }
      if ( (v5 & 3) != 1 )
        break;
      if ( !v8 )
        return (unsigned int)-1073741584;
      v5 = sub_180088C98(v5, a1);
    }
    if ( (v5 & 3) != 3 )
      goto LABEL_3;
    v11 = 259;
    if ( v8 )
      return (unsigned int)-1073741584;
    return v11;
  }
  return 3221225473LL;
}
