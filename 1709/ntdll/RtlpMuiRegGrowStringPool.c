/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x1800FCE10
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x1800FCCB0 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x1800FD75C (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *a1, __int64 a2, int a3, char a4)
{
  unsigned __int16 *v5; // r10
  int v6; // r9d
  int v7; // edx
  unsigned __int16 v8; // di
  __int64 v9; // r9
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  unsigned __int16 v13; // dx
  int v14; // eax

  v5 = a1;
  if ( a1 )
  {
    v6 = 16;
    v7 = a1[3] + 1;
    v8 = a1[3] + 1;
    if ( a3 >= 0 )
      v6 = a3;
    v9 = (unsigned int)a1[5] + v6;
    v10 = a1[2];
    v11 = a1[4];
    v12 = v10;
    if ( v7 < v10 )
      v8 = v10;
    else
      v12 = v7;
    v13 = v9;
    if ( (int)v9 < v11 )
      v13 = v11;
    if ( a4 || v12 != v10 )
      goto LABEL_14;
    v14 = v11;
    if ( (int)v9 >= v11 )
      v14 = v9;
    if ( v14 != v11 )
    {
LABEL_14:
      LOBYTE(v9) = a4;
      return RtlpMuiRegResizeStringPool(v5, v8, v13, v9);
    }
  }
  return (__int64)v5;
}
