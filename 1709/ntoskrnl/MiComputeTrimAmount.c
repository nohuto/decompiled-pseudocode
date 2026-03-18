/*
 * XREFs of MiComputeTrimAmount @ 0x14021D218
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeTrimAmount(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  char v8; // si
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r14
  char v12; // cl
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rax
  unsigned __int8 v15; // al
  unsigned __int64 v16; // r11
  _QWORD *v17; // rcx
  __int64 v18; // rax
  unsigned __int8 v19; // al
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx

  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a2 + 172));
  v6 = v3 - v4;
  if ( v3 == v4 )
    return 0LL;
  v7 = *(_QWORD *)(v5 + 5952);
  v8 = 3;
  if ( v7 >= *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 3) < 3u || (*(_BYTE *)a1 & 0x7F) != 0) )
    return 0LL;
  v9 = *(_QWORD *)(a2 + 136);
  v10 = v9;
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL);
  if ( v9 <= v11 )
    return 0LL;
  v12 = *(_BYTE *)(a2 + 192);
  if ( (v12 & 7) == 0 )
  {
    if ( v12 >= 0 )
    {
      if ( (*(_DWORD *)(a2 - 508) & 0x40) != 0 )
        goto LABEL_17;
      goto LABEL_14;
    }
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(a2 + 192) & 7) == 1 && v12 < 0 )
  {
LABEL_8:
    if ( v9 <= *(_QWORD *)(a2 + 112) )
      return 0LL;
  }
LABEL_14:
  v14 = *(_QWORD *)(a2 + 112);
  if ( v9 <= v14 )
    v10 = 0LL;
  else
    v10 = v9 - v14;
LABEL_17:
  v15 = *(_BYTE *)(a1 + 1);
  if ( v15 )
  {
    v16 = 0LL;
    if ( v15 >= 8u )
      return 0LL;
    v17 = (_QWORD *)(a2 + 40 + 8LL * v15);
    v18 = 8 - (unsigned int)v15;
    do
    {
      v16 += *v17++;
      --v18;
    }
    while ( v18 );
    if ( !v16 )
      return 0LL;
  }
  else
  {
    v16 = (v9 - *(_QWORD *)(a2 + 112)) & -(__int64)(*(_QWORD *)(a2 + 112) < v9);
  }
  v19 = *(_BYTE *)a1 & 0x7F;
  if ( v19 > 1u )
  {
    if ( v19 == 4 && v7 < 0xE0 )
    {
      v20 = v9 - v11;
    }
    else
    {
      if ( v4 > v3 )
        return 0LL;
      v20 = v16;
      if ( *(_BYTE *)(a2 + 194) != 2 )
      {
        v23 = *(_QWORD *)(a1 + 104);
        v24 = *(_QWORD *)(a1 + 88);
        if ( v23 > v24 )
          v20 = v16 / (v23 / v24);
      }
      if ( v20 > v10 )
        v20 = v10;
    }
  }
  else
  {
    if ( *(_BYTE *)(a2 + 194) != 2 )
      v8 = 1;
    v20 = v16 >> v8;
    v21 = *(_QWORD *)(a1 + 104);
    if ( v21 >= v16 )
    {
      v22 = v16 * (100 * v16 / v21) / 0x64;
      if ( v20 < v22 )
        v20 = v22;
    }
    if ( v20 > v10 )
      v20 = v10;
  }
  if ( v20 <= v6 )
    v6 = v20;
  result = v6;
  ++*(_DWORD *)(*(_QWORD *)(v5 + 5680) + 4LL * (*(_BYTE *)a1 & 0x7F) + 2552);
  return result;
}
