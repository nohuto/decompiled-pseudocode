/*
 * XREFs of MmGetPageFileInformation @ 0x140575550
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x14011CD74 (MiPartitionObjectToPartition.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall MmGetPageFileInformation(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int *a5)
{
  unsigned int v6; // r12d
  unsigned int *v7; // r13
  ULONG_PTR *v8; // rax
  ULONG_PTR *v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rbx
  ULONG_PTR v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  int v18; // esi
  int v19; // r10d
  int v20; // r11d
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+2Ch] [rbp-6Ch]
  __int128 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+10h]
  unsigned int v28; // [rsp+B0h] [rbp+18h]
  int v29; // [rsp+B8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v26 = a1;
  v6 = a4 != 0 ? 40 : 32;
  v7 = a5;
  *a5 = 0;
  v8 = MiPartitionObjectToPartition((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, 0, (char *)&v26);
  v9 = v8;
  if ( !v8 )
    return 3221226656LL;
  v10 = *((_DWORD *)v8 + 1446);
  v23 = v10;
  *(_DWORD *)(a2 + 4) = 0;
  v11 = 0;
  v12 = 0;
  v13 = a2;
  while ( v11 < v10 )
  {
    v14 = v9[v11 + 724];
    if ( (*(_BYTE *)(v14 + 204) & 0x50) == 0 )
    {
      v13 = v27 + v12;
      v15 = v6 + v12;
      if ( v6 + v12 <= v12 || v15 > v28 )
      {
        *v7 = v15;
        v21 = -1073741820;
        goto LABEL_19;
      }
      v16 = *(_DWORD *)v14;
      v17 = *(_DWORD *)(v14 + 24);
      v18 = *(_DWORD *)(v14 + 32);
      v19 = *(_DWORD *)(v14 + 16);
      v20 = *(_DWORD *)(v14 + 8);
      while ( v17 >= v16 )
        ;
      *(_DWORD *)(v13 + 4) = v16;
      *(_DWORD *)(v13 + 8) = v16 - v17 - 2;
      *(_DWORD *)(v13 + 12) = v18;
      if ( v29 )
      {
        *(_DWORD *)(v13 + 32) = v19;
        *(_DWORD *)(v13 + 36) = v20;
      }
      WORD3(v25) = 0;
      LOWORD(v25) = *(_WORD *)(v9[v11 + 724] + 96);
      *(_DWORD *)((char *)&v25 + 2) = (unsigned __int16)(v25 + 2);
      *((_QWORD *)&v25 + 1) = v13 + v6;
      *(_OWORD *)(v13 + 16) = v25;
      LODWORD(a5) = (*(_DWORD *)((char *)&v25 + 2) + 7) & 0xFFFFFFF8;
      v12 = (_DWORD)a5 + v15;
      if ( (unsigned int)a5 + v15 > v28 || v12 <= v15 )
      {
        *v7 = v12;
        v21 = -1073741820;
        goto LABEL_19;
      }
      memmove((void *)(v13 + v6), *(const void **)(v9[v11 + 724] + 104), (unsigned __int16)v25);
      *(_WORD *)(v13 + v6 + 2 * ((unsigned __int64)(unsigned __int16)v25 >> 1)) = 0;
      *(_DWORD *)v13 = v6 + (_DWORD)a5;
    }
    ++v11;
    v10 = v23;
  }
  *(_DWORD *)v13 = 0;
  *v7 = v12;
  v21 = 0;
LABEL_19:
  if ( (_BYTE)v26 )
    PsDereferencePartition(v9[21]);
  return v21;
}
