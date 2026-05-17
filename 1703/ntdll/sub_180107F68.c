/*
 * XREFs of sub_180107F68 @ 0x180107F68
 * Callers:
 *     PssNtWalkSnapshot @ 0x180106CC0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180107F68(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ecx

  if ( !*(_QWORD *)(a1 + 976) )
    return 3221226021LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !*a2 )
  {
    result = ZwMapViewOfSection();
    if ( (int)result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v7 = a2[1];
  if ( v7 >= *(_QWORD *)(a1 + 968) )
    return 2147483674LL;
  if ( !a3 )
    return 261LL;
  v8 = v7 + *a2;
  memset(a3, 0, 0x48uLL);
  v9 = 16;
  *a3 = *(_DWORD *)v8;
  *((_BYTE *)a3 + 4) = *(_BYTE *)(v8 + 4);
  *((_BYTE *)a3 + 5) = *(_BYTE *)(v8 + 5);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 8);
  if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
    v10 = *(unsigned __int16 *)(v8 + 16);
    *((_WORD *)a3 + 8) = v10;
    *((_QWORD *)a3 + 3) = v8 + 18;
    v9 = v10 + 18;
  }
  if ( (*(_BYTE *)(v8 + 4) & 2) != 0 )
  {
    v11 = v9;
    v12 = v9 + 2;
    v13 = *(unsigned __int16 *)(v11 + v8);
    *((_WORD *)a3 + 16) = v13;
    *((_QWORD *)a3 + 5) = v8 + v12;
    v9 = v13 + v12;
  }
  if ( (*(_BYTE *)(v8 + 4) & 4) != 0 )
  {
    *((_QWORD *)a3 + 6) = v8 + v9;
    v9 += 56;
  }
  if ( (*(_BYTE *)(v8 + 4) & 8) != 0 )
  {
    v14 = v9;
    v15 = v9 + 2;
    v16 = *(unsigned __int16 *)(v14 + v8);
    *((_WORD *)a3 + 28) = v16;
    *((_QWORD *)a3 + 8) = v8 + v15;
    v9 = v16 + v15;
  }
  a2[1] = v7 + v9;
  return 0LL;
}
