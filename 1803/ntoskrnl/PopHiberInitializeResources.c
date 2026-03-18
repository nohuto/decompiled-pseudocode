/*
 * XREFs of PopHiberInitializeResources @ 0x1405EFC6C
 * Callers:
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x14007B8A0 (RtlGetCompressionWorkSpaceSize.c)
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 *     IoGetDumpStackTransferSizes @ 0x1401577B4 (IoGetDumpStackTransferSizes.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmMarkHiberRange @ 0x1405EFF24 (MmMarkHiberRange.c)
 *     PopCalculateHiberFileSize @ 0x140613550 (PopCalculateHiberFileSize.c)
 *     MmAllocateDumpHibernateResources @ 0x140614550 (MmAllocateDumpHibernateResources.c)
 */

char *__fastcall PopHiberInitializeResources(_QWORD *MemoryMap)
{
  unsigned int v1; // esi
  size_t v3; // r14
  unsigned __int64 v4; // r15
  ULONG v5; // eax
  unsigned __int64 v6; // rdi
  unsigned int v7; // r13d
  unsigned int v8; // edx
  SIZE_T v9; // r12
  _QWORD *PoolWithTag; // rdi
  unsigned __int64 v11; // r14
  unsigned int v12; // edx
  unsigned __int64 v13; // r9
  _QWORD *v14; // r8
  unsigned __int64 v15; // r10
  char *v16; // rax
  int v17; // r14d
  int v18; // r15d
  char *result; // rax
  unsigned int v20; // [rsp+30h] [rbp-38h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]
  char *v22; // [rsp+38h] [rbp-30h]
  unsigned __int64 DumpHibernateResources; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-20h]
  unsigned __int64 v25; // [rsp+50h] [rbp-18h]
  unsigned __int64 v26; // [rsp+58h] [rbp-10h]
  ULONG CompressBufferWorkSpaceSize; // [rsp+B0h] [rbp+48h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+58h] BYREF
  int v30; // [rsp+C8h] [rbp+60h] BYREF

  v1 = KeNumberProcessors_0;
  v29 = 0;
  v3 = 0LL;
  v30 = 0;
  v21 = 0LL;
  if ( (PopSimulate & 0x10000000) != 0 )
    goto LABEL_23;
  v4 = (unsigned __int64)(unsigned int)KeNumberProcessors_0 << 7;
  if ( RtlGetCompressionWorkSpaceSize(0x104u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize) < 0 )
    goto LABEL_23;
  v5 = CompressBufferWorkSpaceSize;
  v24 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( CompressFragmentWorkSpaceSize > CompressBufferWorkSpaceSize )
    v5 = CompressFragmentWorkSpaceSize;
  CompressBufferWorkSpaceSize = v5;
  v6 = v1 * v5 + ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  IoGetDumpStackTransferSizes(&v30, &v29);
  v7 = v29 >> 12;
  if ( v29 >> 12 < 0x10 )
    v7 = 16;
  if ( v7 > 0x100 )
    v7 = 256;
  v8 = v7 << 12;
  if ( PopHiberChecksummingEnabledReg )
  {
    v21 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    PopCalculateHiberFileSize(&DumpHibernateResources, 0LL);
    v8 = v7 << 12;
    v3 = 2 * (DumpHibernateResources >> 9);
    v6 = v3 + v21;
  }
  v25 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v20 = ~(v8 - 1) & (17 * v8 + 65668 * v1 - 1);
  v26 = v20 + v25;
  v9 = (v1 << 17) + v26;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72626968u);
  if ( !PoolWithTag )
    goto LABEL_23;
  DumpHibernateResources = MmAllocateDumpHibernateResources(v1 << 16);
  if ( !DumpHibernateResources )
  {
    ExFreePoolWithTag(PoolWithTag, 0x72626968u);
LABEL_23:
    PoolWithTag = qword_1403AA228;
    v1 = 1;
    v18 = 1;
    v7 = 1;
    memset(qword_1403AA228, 0, 0x80uLL);
    v17 = 12288;
    PoolWithTag[1] = xmmword_1403AA1A8;
    v22 = (char *)qword_1403AA220;
    goto LABEL_21;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    MemoryMap[55] = v3;
    MemoryMap[54] = (char *)PoolWithTag + v21;
    memset((char *)PoolWithTag + v21, 0, v3);
  }
  v22 = (char *)PoolWithTag + v25;
  memset(PoolWithTag, 0, (unsigned __int64)v1 << 7);
  v11 = DumpHibernateResources;
  v12 = 0;
  if ( v1 )
  {
    v13 = v24;
    v14 = PoolWithTag + 1;
    v15 = v26;
    do
    {
      v16 = (char *)&PoolWithTag[0x4000 * v12] + v15;
      *(v14 - 1) = v16;
      v14[2] = v16 + 0x10000;
      *v14 = v11 + (v12 << 16);
      if ( CompressBufferWorkSpaceSize )
        v14[1] = (char *)PoolWithTag + v13 + v12 * CompressBufferWorkSpaceSize;
      ++v12;
      v14 += 16;
    }
    while ( v12 < v1 );
  }
  MmMarkHiberRange(MemoryMap, v11, (unsigned __int64)(16 * v1) << 12);
  PoSetHiberRange(MemoryMap, 0x8000u, (char *)PoolWithTag + v24, v9 - v24, 0x72626968u);
  MemoryMap[36] = PoolWithTag;
  MemoryMap[37] = v9;
  MemoryMap[38] = v11;
  v17 = v20;
  v18 = 16;
LABEL_21:
  PoSetHiberRange(MemoryMap, 0x8000u, qword_1403AA220, 0x3000uLL, 0x72626968u);
  result = v22;
  MemoryMap[34] = v22;
  *((_DWORD *)MemoryMap + 64) = v1;
  MemoryMap[33] = PoolWithTag;
  *((_DWORD *)MemoryMap + 70) = v17;
  *((_DWORD *)MemoryMap + 71) = v18;
  *((_DWORD *)MemoryMap + 102) = v7;
  return result;
}
