/*
 * XREFs of CmpPopulateNodeInformation @ 0x1404742E8
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E5608 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x140482830 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     CmpCopyCompressedName @ 0x14047442C (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpPopulateNodeInformation(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // eax

  v10 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    v10 *= 2;
  v11 = v10;
  v12 = v10 + 24;
  v13 = 0;
  if ( a4 )
  {
    v14 = (v10 + 31) & 0xFFFFFFF8;
    v12 = a4 + v14;
  }
  else
  {
    v14 = v10 + 24;
  }
  *a7 = v12;
  if ( a6 < 0x18 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *(_QWORD *)a5 = *(_QWORD *)a1;
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a5 + 16) = a4;
    *(_DWORD *)(a5 + 20) = v10;
    v15 = -1;
    if ( a4 )
      v15 = v14;
    *(_DWORD *)(a5 + 12) = v15;
    v16 = a6 - 24;
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      CmpCopyCompressedName(a5 + 24, v16, a2 + 76, *(unsigned __int16 *)(a2 + 72));
    }
    else
    {
      if ( v16 <= v11 )
        v11 = a6 - 24;
      memmove((void *)(a5 + 24), (const void *)(a2 + 76), v11);
    }
    if ( a6 < v14 )
    {
      return (unsigned int)-2147483643;
    }
    else
    {
      v17 = a6 - v14;
      if ( a4 )
      {
        if ( v17 > a4 )
          v17 = a4;
        memmove((void *)(a5 + v14), a3, v17);
      }
      if ( v12 > a6 )
        return (unsigned int)-2147483643;
    }
  }
  return v13;
}
