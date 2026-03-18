/*
 * XREFs of MiConvertInitialMemoryBlock @ 0x1405BAD50
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1406BCFEC (MiMakePartitionMemoryBlock.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiConvertInitialMemoryBlock(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 *v5; // r8
  _QWORD *v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  int v11; // eax
  char *result; // rax
  char *v13; // r10
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  __int64 v16; // rdx

  v2 = 1;
  if ( *(_DWORD *)a2 > 1u )
  {
    v5 = (__int64 *)(a2 + 16);
    v6 = (_QWORD *)(a2 + 32);
    v7 = (unsigned int)(*(_DWORD *)a2 - 1);
    do
    {
      v8 = *v5;
      v9 = v5[1];
      v5 += 2;
      v10 = *v6 == v9 + v8;
      v11 = v2 + 1;
      v6 += 2;
      if ( v10 )
        v11 = v2;
      v2 = v11;
      --v7;
    }
    while ( v7 );
  }
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((unsigned int)(v2 - 1) + 3LL), 0x6C4D6D4Du);
  if ( result )
  {
    *((_QWORD *)result + 1) = 1LL;
    v13 = result + 16;
    *(_QWORD *)result = a1;
    v14 = 0;
    *((_DWORD *)result + 4) = v2;
    v15 = 0;
    for ( *((_QWORD *)result + 3) = *(_QWORD *)(a2 + 8); v15 < *(_DWORD *)a2; ++v15 )
    {
      if ( v15
        && *(_QWORD *)(a2 + 16LL * v15 + 16) == *(_QWORD *)(a2 + 16LL * (v15 - 1) + 16)
                                              + *(_QWORD *)(a2 + 16LL * (v15 - 1) + 24) )
      {
        *(_QWORD *)&v13[16 * v14 + 8] += *(_QWORD *)(a2 + 16LL * v15 + 24);
      }
      else
      {
        v16 = 2LL * v14++;
        *(_QWORD *)&v13[8 * v16 + 16] = *(_QWORD *)(a2 + 16LL * v15 + 16);
        *(_QWORD *)&v13[8 * v16 + 24] = *(_QWORD *)(a2 + 16LL * v15 + 24);
      }
    }
    result += 16;
  }
  return result;
}
