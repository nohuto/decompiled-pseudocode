/*
 * XREFs of CmpGenerateFastLeafHintForUnicodeString @ 0x1404D3234
 * Callers:
 *     CmpAddToLeaf @ 0x1404D2940 (CmpAddToLeaf.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGenerateFastLeafHintForUnicodeString(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d
  __int64 v3; // rdx
  unsigned int v4; // r9d
  __int64 v5; // r8
  unsigned __int16 v6; // cx
  unsigned int v7; // [rsp+8h] [rbp+8h]

  result = 0LL;
  v2 = *a1 >> 1;
  v3 = 0LL;
  v7 = 0;
  v4 = 4;
  if ( v2 >= 4 || (v4 = v2) != 0 )
  {
    v5 = *((_QWORD *)a1 + 1);
    while ( 1 )
    {
      v6 = *(_WORD *)(v5 + 2 * v3);
      if ( v6 > 0xFFu )
        break;
      *((_BYTE *)&v7 + v3) = v6;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v4 )
        return v7;
    }
  }
  return result;
}
