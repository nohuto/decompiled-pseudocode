/*
 * XREFs of RtlFindLongestRunClearCapped @ 0x14023CD50
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x14007E698 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLongestRunClearCapped(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // r15d
  int v8; // edi
  unsigned int v9; // ebp
  unsigned int v10; // r13d
  unsigned int v11; // r8d
  unsigned int v12; // r11d
  int v13; // ebx
  unsigned __int8 *v14; // r14
  unsigned int v15; // edx
  unsigned __int8 v16; // r9
  unsigned __int8 *v17; // r14
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  unsigned __int8 i; // r9
  __int64 v21; // r12
  int v22; // eax
  char j; // cl
  unsigned int v24; // ecx
  char v26; // [rsp+0h] [rbp-48h]
  unsigned int v28; // [rsp+60h] [rbp+18h]
  int v29; // [rsp+68h] [rbp+20h]

  v6 = *(_DWORD *)a1;
  v26 = v6;
  v29 = v6 & 7;
  v7 = (v6 >> 3) + (v29 != 0);
  v8 = 0;
  v9 = (*a3 < v6 ? *a3 : 0) & 0xFFFFFFF8;
  v10 = 0;
  v11 = 0;
  v12 = v9 >> 3;
  v13 = v9;
  v14 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (v9 >> 3));
  v15 = 0;
  v16 = *v14;
  v17 = v14 + 1;
  if ( v9 >> 3 == v7 - 1 && (v6 & 7) != 0 )
    v16 |= byte_14029EB40[v6 & 7];
  v18 = 0;
  v28 = 0;
  while ( v18 < v7 )
  {
    if ( v16 )
    {
      v19 = RtlpBitsClearLow[v16] + v11;
      if ( v19 )
      {
        if ( v19 >= a2 )
          goto LABEL_43;
        if ( v19 > v15 )
        {
          v15 = v19;
          v8 = v13;
        }
      }
      if ( v13 != v9 )
        v19 = v10;
      v10 = v19;
      v11 = RtlpBitsClearHigh[v16];
      v13 = 8 * v12 - v11 + 8;
      for ( i = byte_14029EB30[RtlpBitsClearLow[v16]] | byte_14029EB40[8 - v11] | v16; i != 0xFF; v8 = v22 + 8 * v12 )
      {
        v21 = RtlpBitsClearAnywhere[i];
        if ( v15 >= (unsigned int)v21 )
          break;
        v22 = 0;
        for ( j = byte_14029EB30[v21]; ((unsigned __int8)j & i) != 0; j *= 2 )
          ++v22;
        v15 = RtlpBitsClearAnywhere[i];
        if ( (unsigned int)v21 >= a2 )
        {
          *a3 = v22 + 8 * v12;
          return a2;
        }
        i |= j;
      }
      LOBYTE(v6) = v26;
      v18 = v28;
    }
    else
    {
      v11 += 8;
      if ( v11 >= a2 )
      {
LABEL_43:
        *a3 = v13;
        return a2;
      }
    }
    if ( ++v12 >= v7 )
    {
      if ( v11 )
      {
        if ( v13 == v9 )
          v10 = v11;
        if ( v11 > v15 )
        {
          v15 = v11;
          v8 = v13;
        }
        v11 = 0;
      }
      v12 = 0;
      v17 = *(unsigned __int8 **)(a1 + 8);
    }
    v16 = *v17++;
    if ( v12 == v7 - 1 && v29 )
    {
      v16 |= byte_14029EB40[v6 & 7];
      v18 = v28;
    }
    v28 = ++v18;
  }
  if ( v11 )
  {
    v24 = v11 + v10;
    if ( v13 + v11 != v9 )
      v24 = v11;
    if ( v24 > v15 )
      v8 = v13;
    else
      v24 = v15;
    v15 = v24;
  }
  else if ( !v15 )
  {
    *a3 = 0;
    return 0LL;
  }
  *a3 = v8;
  if ( v15 > a2 )
    return a2;
  return v15;
}
