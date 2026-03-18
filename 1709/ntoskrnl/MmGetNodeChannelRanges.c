/*
 * XREFs of MmGetNodeChannelRanges @ 0x1405E5E8C
 * Callers:
 *     ExpQueryMemoryTopologyInformation @ 0x1405E5DF8 (ExpQueryMemoryTopologyInformation.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmGetNodeChannelRanges(_QWORD *a1, SIZE_T *a2)
{
  unsigned int *v4; // rsi
  SIZE_T v5; // rdi
  _DWORD *PoolWithTag; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int *v9; // r9
  unsigned int v10; // ebx
  _DWORD *v11; // r14
  __int64 *v12; // r11
  char *v13; // r10
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 result; // rax

  v4 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
  v5 = 32LL * (*v4 - 1) + 48;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x68506D4Du);
  v10 = 0;
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    v12 = (__int64 *)(v4 + 4);
    *(_QWORD *)v11 = *v4;
    v13 = (char *)(v11 + 4);
    v14 = 0;
    v11[2] = (unsigned __int16)KeNumberNodes;
    v11[3] = MmNumberOfChannels;
    v15 = *v4;
    v9 = &v4[4 * v15 + 4];
    if ( (_DWORD)v15 )
    {
      do
      {
        v16 = *v12;
        v12 += 2;
        *((_QWORD *)v13 + 1) = v16;
        *((_QWORD *)v13 + 2) = *(v12 - 1);
        v17 = *(unsigned __int8 *)v9;
        v9 = (unsigned int *)((char *)v9 + 2);
        *(_DWORD *)v13 = v17;
        v13 += 32;
        v8 = *((unsigned __int8 *)v9 - 1);
        *((_DWORD *)v13 - 7) = v8;
        v7 = 8256 * v17 + qword_14038A0D0;
        ++v14;
        *((_QWORD *)v13 - 1) = *(_BYTE *)(v8 + v7 + 8193) == 1;
      }
      while ( v14 < *v4 );
    }
  }
  else
  {
    v10 = -1073741670;
  }
  MiDereferencePageRuns((__int64)v4, v7, v8, (__int64)v9);
  result = v10;
  *a1 = v11;
  *a2 = v5;
  return result;
}
