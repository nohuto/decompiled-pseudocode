/*
 * XREFs of sub_18000E6BC @ 0x18000E6BC
 * Callers:
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     sub_18000E730 @ 0x18000E730 (sub_18000E730.c)
 */

__int64 __fastcall sub_18000E6BC(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v4; // esi
  __int64 *v5; // rax
  int v6; // ecx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 312);
  v4 = a1;
  if ( a2 < *((unsigned int *)v2 + 2) )
  {
LABEL_4:
    v6 = a2;
  }
  else
  {
    while ( 1 )
    {
      v5 = (__int64 *)*v2;
      if ( !*v2 )
        break;
      v2 = (__int64 *)*v2;
      if ( a2 < *((unsigned int *)v5 + 2) )
        goto LABEL_4;
    }
    v6 = *((_DWORD *)v2 + 2) - 1;
  }
  while ( 1 )
  {
    result = sub_18000E730(v4, (_DWORD)v2, 1, v6, a2);
    if ( result )
      break;
    v2 = (__int64 *)*v2;
    v6 = *((_DWORD *)v2 + 6);
  }
  return result;
}
