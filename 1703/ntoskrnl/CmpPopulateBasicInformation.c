/*
 * XREFs of CmpPopulateBasicInformation @ 0x1404FF110
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E14EC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x1404FEEE0 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall CmpPopulateBasicInformation(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  size_t v9; // r8
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned int i; // eax

  v7 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    v7 *= 2;
  v8 = v7 + 16;
  *a5 = v8;
  if ( a4 < 0x10 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)a1;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a3 + 12) = v7;
    v9 = a4 - 16;
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      v10 = (unsigned int)v9 >> 1;
      if ( v10 >= *(unsigned __int16 *)(a2 + 72) )
        v10 = *(unsigned __int16 *)(a2 + 72);
      v11 = 0;
      for ( i = 0; i < v10; ++i )
        *(_WORD *)(a3 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
    }
    else
    {
      if ( (unsigned int)v9 > v7 )
        v9 = v7;
      memmove((void *)(a3 + 16), (const void *)(a2 + 76), v9);
      v11 = 0;
    }
    if ( a4 < v8 )
      return (unsigned int)-2147483643;
  }
  return v11;
}
