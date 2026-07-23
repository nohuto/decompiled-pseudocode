/*
 * XREFs of MiInitializeNuma @ 0x1405A1EA8
 * Callers:
 *     MiInitializePartition @ 0x1405A1920 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     MiInitializeSystemChannelOrdering @ 0x140834F78 (MiInitializeSystemChannelOrdering.c)
 */

void __fastcall MiInitializeNuma(ULONG_PTR *a1)
{
  _SLIST_HEADER *v2; // r14
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // esi
  int *v6; // r15
  int v7; // eax
  _SLIST_HEADER *v8; // rsi
  __int64 v9; // r15
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  ULONG_PTR v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx

  v2 = qword_14036C1C8;
  v3 = 0;
  if ( KeNumberNodes )
  {
    v4 = a1[6] + 1232;
    do
    {
      *(_DWORD *)(v4 + 836) = v3;
      *(_BYTE *)v4 = 8;
      *(_BYTE *)(v4 + 2) = 8;
      *(_QWORD *)(v4 + 912) = 0LL;
      *(_QWORD *)(v4 + 944) = 0LL;
      *(_DWORD *)(v4 + 832) = v3 << byte_14036C1B9;
      if ( a1 == &MiSystemPartition )
      {
        v5 = 0;
        v6 = (int *)&v2[8];
        do
        {
          InitializeSListHead(&v2[2 * v5 + 7]);
          v7 = -(v5++ != 1);
          *v6 = v7 & 5;
          v6 += 8;
        }
        while ( v5 < 2 );
        InitializeSListHead(v2);
      }
      if ( qword_14036C1D8 )
      {
        v14 = a1[6];
        v15 = 2184LL * v3;
        if ( (unsigned int)MmNumberOfChannels > 1 )
          *(_DWORD *)(v15 + v14 + 2136) |= 1u;
        if ( a1 == &MiSystemPartition )
        {
          MiInitializeSystemChannelOrdering(a1, v3, v14);
        }
        else
        {
          v16 = qword_140380230;
          *(_DWORD *)(v15 + v14 + 2169) = *(_DWORD *)(v15 + qword_140380230 + 2169);
          *(_DWORD *)(v15 + v14 + 2161) = *(_DWORD *)(v15 + v16 + 2161);
          *(_DWORD *)(v15 + v14 + 2165) = *(_DWORD *)(v15 + v16 + 2165);
        }
      }
      if ( a1 == &MiSystemPartition )
      {
        v8 = v2 + 4;
        v9 = 3LL;
        do
        {
          InitializeSListHead(v8 - 3);
          InitializeSListHead(v8++);
          --v9;
        }
        while ( v9 );
      }
      v10 = (_QWORD *)(v4 + 16);
      v11 = 8LL;
      do
      {
        v12 = v10;
        v13 = 4LL;
        do
        {
          *(v12 - 1) = 0LL;
          *v12 = 0xFFFFFFFFFLL;
          v12[1] = 0xFFFFFFFFFLL;
          v12 += 24;
          --v13;
        }
        while ( v13 );
        v10 += 3;
        --v11;
      }
      while ( v11 );
      ++v3;
      v4 += 2184LL;
      v2 += 25;
    }
    while ( v3 < (unsigned __int16)KeNumberNodes );
  }
}
