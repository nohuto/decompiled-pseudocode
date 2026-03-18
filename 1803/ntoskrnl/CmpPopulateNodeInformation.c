/*
 * XREFs of CmpPopulateNodeInformation @ 0x1404A120C
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14022310C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x1404AC0B0 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmpCopyCompressedName @ 0x1404A33EC (CmpCopyCompressedName.c)
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
  unsigned __int16 v9; // r10
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // eax

  v9 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    v9 *= 2;
  v10 = v9;
  v11 = v9 + 24;
  v12 = 0;
  if ( a4 )
  {
    v13 = (v9 + 31) & 0xFFFFFFF8;
    v11 = a4 + v13;
  }
  else
  {
    v13 = v9 + 24;
  }
  *a7 = v11;
  if ( a6 < 0x18 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *(_QWORD *)a5 = *(_QWORD *)a1;
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a5 + 16) = a4;
    *(_DWORD *)(a5 + 20) = v9;
    v14 = -1;
    if ( a4 )
      v14 = v13;
    *(_DWORD *)(a5 + 12) = v14;
    v15 = a6 - 24;
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      CmpCopyCompressedName(a5 + 24, v15, a2 + 76, *(unsigned __int16 *)(a2 + 72));
    }
    else
    {
      if ( v15 <= v10 )
        v10 = a6 - 24;
      memmove((void *)(a5 + 24), (const void *)(a2 + 76), v10);
    }
    if ( a6 < v13 )
    {
      return (unsigned int)-2147483643;
    }
    else
    {
      v16 = a6 - v13;
      if ( a4 )
      {
        if ( v16 > a4 )
          v16 = a4;
        memmove((void *)(a5 + v13), a3, v16);
      }
      if ( v11 > a6 )
        return (unsigned int)-2147483643;
    }
  }
  return v12;
}
