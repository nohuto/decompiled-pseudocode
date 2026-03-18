/*
 * XREFs of MiComputeTrimAmount @ 0x140214C68
 * Callers:
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
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
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r10
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned __int8 v20; // al
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax

  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a2 + 172));
  v6 = v3 - v4;
  if ( v3 == v4 )
    return 0LL;
  v7 = *(_QWORD *)(v5 + 5760);
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
    v17 = 0LL;
    if ( v15 >= 8u )
      return 0LL;
    v18 = (_QWORD *)(a2 + 40 + 8LL * v15);
    v19 = 8 - (unsigned int)v15;
    do
    {
      v17 += *v18++;
      --v19;
    }
    while ( v19 );
    if ( !v17 )
      return 0LL;
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 112);
    if ( v9 <= v16 )
      v17 = 0LL;
    else
      v17 = v9 - v16;
  }
  v20 = *(_BYTE *)a1 & 0x7F;
  if ( v20 > 1u )
  {
    if ( v20 == 4 && v7 < 0xE0 )
    {
      v21 = v9 - v11;
    }
    else
    {
      if ( v4 > v3 )
        return 0LL;
      v21 = v17;
      v24 = *(_QWORD *)(a1 + 88);
      if ( *(_BYTE *)(a2 + 194) != 2 )
      {
        v25 = *(_QWORD *)(a1 + 104);
        if ( v25 > v24 )
          v21 = v17 / (v25 / v24);
      }
      if ( v21 > v10 )
        v21 = v10;
    }
  }
  else
  {
    if ( *(_BYTE *)(a2 + 194) != 2 )
      v8 = 1;
    v21 = v17 >> v8;
    v22 = *(_QWORD *)(a1 + 104);
    if ( v22 >= v17 )
    {
      v23 = v17 * (100 * v17 / v22) / 0x64;
      if ( v21 < v23 )
        v21 = v23;
    }
    if ( v21 > v10 )
      v21 = v10;
  }
  if ( v21 <= v6 )
    v6 = v21;
  result = v6;
  ++*(_DWORD *)(*(_QWORD *)(v5 + 5544) + 4LL * (*(_BYTE *)a1 & 0x7F) + 2544);
  return result;
}
