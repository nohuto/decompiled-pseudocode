/*
 * XREFs of MmGetPageFileInformation @ 0x1404C829C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140077298 (MiPartitionObjectToPartition.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall MmGetPageFileInformation(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int *a5)
{
  unsigned int v5; // r13d
  __int64 v6; // rbx
  unsigned int v7; // r12d
  ULONG_PTR *v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // edi
  __int64 v12; // rsi
  ULONG_PTR v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // r9d
  int v17; // ebx
  int v18; // r11d
  int v19; // eax
  unsigned int v20; // r13d
  __int64 result; // rax
  ULONG_PTR *v23; // [rsp+30h] [rbp-58h]
  __int128 v24; // [rsp+38h] [rbp-50h]
  unsigned int v25; // [rsp+90h] [rbp+8h]

  v5 = a3;
  v6 = a2;
  v7 = a4 != 0 ? 40 : 32;
  *a5 = 0;
  v8 = MiPartitionObjectToPartition((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL);
  v23 = v8;
  v9 = *((_DWORD *)v8 + 1398);
  v25 = v9;
  *(_DWORD *)(v6 + 4) = 0;
  v10 = 0;
  v11 = 0;
  v12 = a2;
  while ( v10 < v9 )
  {
    v13 = v8[v10 + 700];
    if ( (*(_BYTE *)(v13 + 204) & 0x50) == 0 )
    {
      v12 = v6 + v11;
      v14 = v7 + v11;
      if ( v7 + v11 <= v11 || v14 > v5 )
      {
        *a5 = v14;
        return 3221225476LL;
      }
      v15 = *(_DWORD *)v13;
      v16 = *(_DWORD *)(v13 + 24);
      v17 = *(_DWORD *)(v13 + 32);
      v18 = *(_DWORD *)(v13 + 16);
      v19 = *(_DWORD *)(v13 + 8);
      while ( v16 >= v15 )
        ;
      *(_DWORD *)(v12 + 4) = v15;
      *(_DWORD *)(v12 + 8) = v15 - v16 - 2;
      *(_DWORD *)(v12 + 12) = v17;
      if ( a4 )
      {
        *(_DWORD *)(v12 + 32) = v18;
        *(_DWORD *)(v12 + 36) = v19;
      }
      WORD3(v24) = 0;
      LOWORD(v24) = *(_WORD *)(v8[v10 + 700] + 96);
      *(_DWORD *)((char *)&v24 + 2) = (unsigned __int16)(v24 + 2);
      *((_QWORD *)&v24 + 1) = v12 + v7;
      *(_OWORD *)(v12 + 16) = v24;
      v20 = (*(_DWORD *)((char *)&v24 + 2) + 7) & 0xFFFFFFF8;
      v11 = v14 + v20;
      if ( v14 + v20 > a3 || v11 <= v14 )
      {
        *a5 = v11;
        return 3221225476LL;
      }
      memmove((void *)(v12 + v7), *(const void **)(v8[v10 + 700] + 104), (unsigned __int16)v24);
      *(_WORD *)(v12 + v7 + 2 * ((unsigned __int64)(unsigned __int16)v24 >> 1)) = 0;
      *(_DWORD *)v12 = v7 + v20;
      v8 = v23;
      v6 = a2;
      v5 = a3;
    }
    ++v10;
    v9 = v25;
  }
  result = 0LL;
  *(_DWORD *)v12 = 0;
  *a5 = v11;
  return result;
}
