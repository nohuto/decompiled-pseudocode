/*
 * XREFs of MiInitializeNuma @ 0x1405B36A0
 * Callers:
 *     MiInitializePartition @ 0x1405B30A8 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     MiInitializeSystemChannelOrdering @ 0x14086C118 (MiInitializeSystemChannelOrdering.c)
 */

void __fastcall MiInitializeNuma(ULONG_PTR *a1)
{
  ULONG_PTR v1; // rbx
  _SLIST_HEADER *v3; // r15
  unsigned int i; // esi
  int v5; // edi
  int *v6; // r14
  int v7; // eax
  _SLIST_HEADER *v8; // rdi
  __int64 v9; // r14
  unsigned int v10; // edx
  _DWORD *v11; // r8
  unsigned __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r8
  ULONG_PTR v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx

  v1 = a1[2];
  v3 = qword_140388510;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; v3 += 25 )
  {
    *(_DWORD *)(v1 + 8092) = i;
    *(_BYTE *)(v1 + 7120) = 8;
    *(_BYTE *)(v1 + 7122) = 8;
    *(_QWORD *)(v1 + 8168) = 0LL;
    *(_QWORD *)(v1 + 8200) = 0LL;
    *(_DWORD *)(v1 + 8088) = i << byte_140388501;
    if ( a1 == &MiSystemPartition )
    {
      v5 = 0;
      v6 = (int *)&v3[8];
      do
      {
        InitializeSListHead(&v3[2 * v5 + 7]);
        v7 = -(v5++ != 1);
        *v6 = v7 & 5;
        v6 += 8;
      }
      while ( v5 < 2 );
      InitializeSListHead(v3);
    }
    if ( qword_140388520 )
    {
      v17 = a1[2];
      v18 = 8256LL * i;
      if ( (unsigned int)MmNumberOfChannels > 1 )
        *(_DWORD *)(v18 + v17 + 8160) |= 1u;
      if ( a1 == &MiSystemPartition )
      {
        MiInitializeSystemChannelOrdering(a1, i, v17);
      }
      else
      {
        v19 = qword_14038A0D0;
        *(_DWORD *)(v18 + v17 + 8193) = *(_DWORD *)(v18 + qword_14038A0D0 + 8193);
        *(_DWORD *)(v18 + v17 + 8185) = *(_DWORD *)(v18 + v19 + 8185);
        *(_DWORD *)(v18 + v17 + 8189) = *(_DWORD *)(v18 + v19 + 8189);
      }
    }
    if ( a1 == &MiSystemPartition )
    {
      v8 = v3 + 4;
      v9 = 3LL;
      do
      {
        InitializeSListHead(v8 - 3);
        InitializeSListHead(v8++);
        --v9;
      }
      while ( v9 );
    }
    v10 = 0;
    v11 = (_DWORD *)(v1 + 7936);
    do
    {
      *v11 = dword_140388540 + 1;
      v11 += 4;
      v12 = (unsigned __int64)(v10++ << 8) >> 5;
      *((_QWORD *)v11 - 1) = v1 + 4 * (v12 + 1992);
    }
    while ( v10 < 2 );
    v13 = (_QWORD *)(v1 + 7136);
    v14 = 8LL;
    do
    {
      v15 = v13;
      v16 = 4LL;
      do
      {
        *(v15 - 1) = 0LL;
        *v15 = 0xFFFFFFFFFLL;
        v15[1] = 0xFFFFFFFFFLL;
        v15 += 24;
        --v16;
      }
      while ( v16 );
      v13 += 3;
      --v14;
    }
    while ( v14 );
    ++i;
    v1 += 8256LL;
  }
}
