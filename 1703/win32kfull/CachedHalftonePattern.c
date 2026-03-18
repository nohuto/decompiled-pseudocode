/*
 * XREFs of CachedHalftonePattern @ 0x1C00339A0
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C003390C (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C023E0D8 (CreateHalftoneBrushPat.c)
 * Callees:
 *     Generate_HTSC_WORD @ 0x1C00ECF30 (Generate_HTSC_WORD.c)
 */

__int64 __fastcall CachedHalftonePattern(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5, int a6)
{
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // r8d
  int v13; // ecx
  int v14; // eax
  char *v15; // rax
  unsigned int v16; // r9d
  int v17; // r11d
  int v18; // edi
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  __int64 result; // rax
  unsigned __int16 v23; // [rsp+32h] [rbp-1Fh]
  __int128 v24; // [rsp+48h] [rbp-9h]
  __int128 v25; // [rsp+58h] [rbp+7h]
  __int128 v26; // [rsp+68h] [rbp+17h]
  __int128 v27; // [rsp+78h] [rbp+27h]
  __int64 v28; // [rsp+88h] [rbp+37h]

  if ( !*(_QWORD *)(a1 + 176) && !(unsigned int)Generate_HTSC_WORD(a1 + 160) )
    return 4294967294LL;
  v10 = *(_OWORD *)(a1 + 160);
  v11 = *(_QWORD *)(a1 + 176);
  DWORD1(v26) = *(_DWORD *)(a2 + 48);
  v23 = WORD1(*(_QWORD *)(a1 + 168));
  v12 = a4 % 65 + 65;
  if ( a4 % 65 >= 0 )
    v12 = a4 % 65;
  v13 = a5 % 65;
  v14 = v13 + 65;
  if ( v13 >= 0 )
    v14 = a5 % 65;
  HIDWORD(v28) = 64 - v12;
  *((_QWORD *)&v26 + 1) = (char *)&RGB555Pat + v12 + (__int64)(66 * v14);
  if ( a6 )
  {
    LODWORD(v28) = -66;
    *(_QWORD *)&v27 = (char *)&RGB555Pat + v12 - 66;
    v15 = (char *)(v27 + 4290);
  }
  else
  {
    LODWORD(v28) = 66;
    *(_QWORD *)&v27 = (char *)&RGB555Pat + v12 + 4290;
    v15 = (char *)&RGB555Pat + v12;
  }
  *((_QWORD *)&v27 + 1) = v15;
  v16 = 6 * WORD4(v10);
  v17 = v16 * WORD5(v10);
  v18 = WORD3(v10);
  v19 = a4 % v18;
  if ( v19 < 0 )
    v19 += v18;
  v20 = a5 % (int)v23;
  if ( v20 < 0 )
    v20 += v23;
  v21 = 6 * v19;
  *(_QWORD *)&v24 = v11 + 6 * v19 + (__int64)(int)(v20 * v16);
  if ( a6 )
  {
    *((_QWORD *)&v24 + 1) = v11 + v21 - (unsigned __int64)v16;
    *(_QWORD *)&v25 = *((_QWORD *)&v24 + 1) + v17;
    v16 = -6 * WORD4(v10);
  }
  else
  {
    *((_QWORD *)&v24 + 1) = v11 + v17 + (__int64)v21;
    *(_QWORD *)&v25 = *((_QWORD *)&v24 + 1) - v17;
  }
  result = (unsigned int)v17;
  *(_OWORD *)a3 = v24;
  DWORD2(v25) = v16;
  HIDWORD(v25) = -(-6 * v18 + 6 * v19);
  *(_OWORD *)(a3 + 16) = v25;
  LODWORD(v26) = -6 * v18;
  *(_OWORD *)(a3 + 32) = v26;
  *(_OWORD *)(a3 + 48) = v27;
  *(_QWORD *)(a3 + 64) = v28;
  return result;
}
