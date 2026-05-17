/*
 * XREFs of sub_1800EC9CC @ 0x1800EC9CC
 * Callers:
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 * Callees:
 *     sub_1800C8ACC @ 0x1800C8ACC (sub_1800C8ACC.c)
 */

wchar_t *__fastcall sub_1800EC9CC(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  __int64 v4; // r8

  if ( !qword_18015D750 || !a2 )
    return 0LL;
  if ( (a2 & 0x8000u) == 0 )
  {
    if ( (a2 & 0x800) != 0 )
    {
      a2 &= ~0x800u;
      if ( a2 < *(_WORD *)(qword_18015D750 + 224) )
      {
        v4 = *(_QWORD *)(qword_18015D750 + 232);
        goto LABEL_16;
      }
    }
    else if ( a2 < *(_WORD *)(a1 + 224) )
    {
      v4 = *(_QWORD *)(a1 + 232);
LABEL_16:
      if ( v4 )
        return (wchar_t *)(v4 + 20 + 72LL * a2);
    }
    return 0LL;
  }
  v2 = a2 & 0x7FFF;
  if ( v2 >= 0x81u || !*(_QWORD *)(a1 + 328) )
    return 0LL;
  if ( v2 )
  {
    if ( v2 >= 0x80u )
      sub_1800C8ACC(&Buffer, 0x30uLL, L"VirtualAlloc", 0LL);
    else
      sub_1800C8ACC(&Buffer, 0x30uLL, L"Objects=%4u", 16 * (unsigned int)v2);
  }
  else
  {
    sub_1800C8ACC(&Buffer, 0x30uLL, L"Objects>%4u", 2048LL);
  }
  return &Buffer;
}
