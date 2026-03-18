/*
 * XREFs of IoCheckLinkShareAccess @ 0x14056E8B0
 * Callers:
 *     RawCreate @ 0x1405472D0 (RawCreate.c)
 *     IoCheckShareAccess @ 0x14056E880 (IoCheckShareAccess.c)
 *     IoCheckShareAccessEx @ 0x1405F2F20 (IoCheckShareAccessEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoCheckLinkShareAccess(int a1, char a2, __int64 a3, unsigned int *a4, _DWORD *a5, int a6)
{
  int v6; // ebx
  int v7; // r10d
  int v9; // edi
  int v10; // esi
  _DWORD *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  unsigned int v15; // ecx
  char v16; // al

  v6 = a1 & 0x21;
  *(_BYTE *)(a3 + 74) = v6 != 0;
  v7 = a1 & 0x10000;
  *(_BYTE *)(a3 + 75) = (a1 & 6) != 0;
  *(_BYTE *)(a3 + 76) = (a1 & 0x10000) != 0;
  if ( (a1 & 0x21) == 0 && (a1 & 6) == 0 && !v7 )
    return 0LL;
  v9 = a2 & 2;
  *(_BYTE *)(a3 + 77) = a2 & 1;
  v10 = a2 & 4;
  *(_BYTE *)(a3 + 78) = v9 != 0;
  *(_BYTE *)(a3 + 79) = v10 != 0;
  if ( a6 < 0 )
  {
    v16 = a2 & 1;
    if ( (a2 & 1) == 0 )
      v16 = 1;
    *(_BYTE *)(a3 + 77) = v16;
  }
  v11 = *(_DWORD **)(a3 + 208);
  if ( v11 )
  {
    if ( (*v11 & 1) != 0 )
      return 0LL;
  }
  v12 = *a4;
  if ( !a5 )
  {
    if ( v6 && a4[4] < v12 )
      return 3221225539LL;
    v13 = a4[1];
    if ( v13 )
    {
      if ( !*(_BYTE *)(a3 + 77) )
        return 3221225539LL;
    }
    v14 = a4[2];
    if ( v14 )
    {
      if ( !v9 )
        return 3221225539LL;
    }
    v15 = a4[3];
    if ( v15 )
    {
      if ( !v10 )
        return 3221225539LL;
    }
    if ( (a6 & 1) != 0 )
    {
      *a4 = v12 + 1;
      a4[1] = v13 + *(unsigned __int8 *)(a3 + 74);
      a4[2] = v14 + *(unsigned __int8 *)(a3 + 75);
      a4[3] = v15 + *(unsigned __int8 *)(a3 + 76);
      a4[4] += *(unsigned __int8 *)(a3 + 77);
      a4[5] += *(unsigned __int8 *)(a3 + 78);
      a4[6] += *(unsigned __int8 *)(a3 + 79);
    }
    return 0LL;
  }
  if ( ((a1 & 0x21) == 0 || a4[4] >= v12)
    && ((a1 & 6) == 0 || a4[5] >= v12)
    && (!v7 || a5[2] >= *a5)
    && (!a4[1] || *(_BYTE *)(a3 + 77))
    && (!a4[2] || v9)
    && (!a5[1] || v10) )
  {
    if ( (a6 & 1) != 0 )
    {
      *a4 = v12 + 1;
      ++*a5;
      a4[1] += *(unsigned __int8 *)(a3 + 74);
      a4[2] += *(unsigned __int8 *)(a3 + 75);
      a5[1] += *(unsigned __int8 *)(a3 + 76);
      a4[4] += *(unsigned __int8 *)(a3 + 77);
      a4[5] += *(unsigned __int8 *)(a3 + 78);
      a5[2] += *(unsigned __int8 *)(a3 + 79);
    }
    return 0LL;
  }
  return 3221225539LL;
}
