/*
 * XREFs of PopHiberInitializeResources @ 0x1406FBB38
 * Callers:
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x140127EC0 (RtlGetCompressionWorkSpaceSize.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoGetDumpStackTransferSizes @ 0x1401F6440 (IoGetDumpStackTransferSizes.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmAllocateDumpHibernateResources @ 0x1406E24F0 (MmAllocateDumpHibernateResources.c)
 *     MmMarkHiberRange @ 0x1406E2544 (MmMarkHiberRange.c)
 *     PopCalculateHiberFileSize @ 0x1406FB2DC (PopCalculateHiberFileSize.c)
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
  __int64 v10; // rdx
  _QWORD *PoolWithTag; // rdi
  __int64 v12; // r8
  int v13; // r15d
  int v14; // r14d
  char *result; // rax
  unsigned __int64 v16; // r14
  unsigned int v17; // edx
  unsigned __int64 v18; // r9
  _QWORD *v19; // r8
  unsigned __int64 v20; // r10
  char *v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-38h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]
  char *v24; // [rsp+38h] [rbp-30h]
  ULONG_PTR DumpHibernateResources; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-20h]
  unsigned __int64 v27; // [rsp+50h] [rbp-18h]
  unsigned __int64 v28; // [rsp+58h] [rbp-10h]
  ULONG CompressBufferWorkSpaceSize; // [rsp+B0h] [rbp+48h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+58h] BYREF
  int v32; // [rsp+C8h] [rbp+60h] BYREF

  v1 = KeNumberProcessors_0;
  v31 = 0;
  v3 = 0LL;
  v32 = 0;
  v23 = 0LL;
  if ( (PopSimulate & 0x10000000) != 0 )
    goto LABEL_14;
  v4 = (unsigned __int64)(unsigned int)KeNumberProcessors_0 << 7;
  if ( RtlGetCompressionWorkSpaceSize(0x104u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize) < 0 )
    goto LABEL_14;
  v5 = CompressBufferWorkSpaceSize;
  v26 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( CompressFragmentWorkSpaceSize > CompressBufferWorkSpaceSize )
    v5 = CompressFragmentWorkSpaceSize;
  CompressBufferWorkSpaceSize = v5;
  v6 = v1 * v5 + ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  IoGetDumpStackTransferSizes(&v32, &v31);
  v7 = v31 >> 12;
  if ( v31 >> 12 < 0x10 )
    v7 = 16;
  if ( v7 > 0x100 )
    v7 = 256;
  v8 = v7 << 12;
  if ( PopHiberChecksummingEnabledReg )
  {
    v23 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    PopCalculateHiberFileSize(&DumpHibernateResources, 0LL);
    v8 = v7 << 12;
    v3 = 2 * (DumpHibernateResources >> 9);
    v6 = v3 + v23;
  }
  v27 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v22 = ~(v8 - 1) & (17 * v8 + 65668 * v1 - 1);
  v28 = v22 + v27;
  v9 = (v1 << 17) + v28;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72626968u);
  if ( !PoolWithTag )
    goto LABEL_14;
  DumpHibernateResources = MmAllocateDumpHibernateResources(v1 << 16, v10, v12);
  if ( !DumpHibernateResources )
  {
    ExFreePoolWithTag(PoolWithTag, 0x72626968u);
LABEL_14:
    PoolWithTag = qword_140365BA8;
    v1 = 1;
    v13 = 1;
    v7 = 1;
    memset(qword_140365BA8, 0, 0x80uLL);
    v14 = 12288;
    PoolWithTag[1] = xmmword_140365B28;
    v24 = (char *)qword_140365BA0;
    goto LABEL_15;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    MemoryMap[56] = v3;
    MemoryMap[55] = (char *)PoolWithTag + v23;
    memset((char *)PoolWithTag + v23, 0, v3);
  }
  v24 = (char *)PoolWithTag + v27;
  memset(PoolWithTag, 0, (unsigned __int64)v1 << 7);
  v16 = DumpHibernateResources;
  v17 = 0;
  if ( v1 )
  {
    v18 = v26;
    v19 = PoolWithTag + 1;
    v20 = v28;
    do
    {
      v21 = (char *)&PoolWithTag[0x4000 * v17] + v20;
      *(v19 - 1) = v21;
      v19[2] = v21 + 0x10000;
      *v19 = v16 + (v17 << 16);
      if ( CompressBufferWorkSpaceSize )
        v19[1] = (char *)PoolWithTag + v18 + v17 * CompressBufferWorkSpaceSize;
      ++v17;
      v19 += 16;
    }
    while ( v17 < v1 );
  }
  MmMarkHiberRange((__int64)MemoryMap, v16);
  PoSetHiberRange(MemoryMap, 0x8000u, (char *)PoolWithTag + v26, v9 - v26, 0x72626968u);
  MemoryMap[37] = PoolWithTag;
  MemoryMap[38] = v9;
  MemoryMap[39] = v16;
  v14 = v22;
  v13 = 16;
LABEL_15:
  PoSetHiberRange(MemoryMap, 0x8000u, qword_140365BA0, 0x3000uLL, 0x72626968u);
  result = v24;
  MemoryMap[35] = v24;
  *((_DWORD *)MemoryMap + 66) = v1;
  MemoryMap[34] = PoolWithTag;
  *((_DWORD *)MemoryMap + 72) = v14;
  *((_DWORD *)MemoryMap + 73) = v13;
  *((_DWORD *)MemoryMap + 104) = v7;
  return result;
}
