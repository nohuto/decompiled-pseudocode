/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x140650994
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     MiAllowWorkingSetExpansion @ 0x14006A904 (MiAllowWorkingSetExpansion.c)
 *     MiInsertNewProcess @ 0x140070F24 (MiInsertNewProcess.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiAllocateProcessShadow @ 0x140512DBC (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbp
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rax
  unsigned __int64 DirectoryTableBase; // rcx
  LONG *v7; // r15
  __int64 result; // rax
  LONG *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x3250694Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x210uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 2088) |= 0x20u;
  v7 = SharedVm;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_QWORD *)(a1 + 1944) = a1 + 1936;
  *(_QWORD *)(a1 + 1936) = a1 + 1936;
  *(_QWORD *)(a1 + 1928) = 0LL;
  result = MiAllocateProcessShadow(a1);
  if ( (int)result >= 0 )
  {
    v9 = MiGetSharedVm(a1 + 1280);
    v10 = (_QWORD *)(a1 + 1320);
    *v9 = 0;
    *(_QWORD *)(a1 + 1576) = 0LL;
    *(_QWORD *)(a1 + 1392) = *(_QWORD *)&Process[1].Spare2[23];
    *(_QWORD *)(a1 + 1432) = *(_QWORD *)&Process[1].Spare2[63];
    *((_QWORD *)v9 + 7) = *((_QWORD *)v7 + 7);
    *((_QWORD *)v9 + 8) = *((_QWORD *)v7 + 8);
    v11 = 8LL;
    *(_QWORD *)(a1 + 1400) = *(_QWORD *)&Process[1].Spare2[31];
    *(_QWORD *)(a1 + 1408) = *(_QWORD *)&Process[1].Spare2[39];
    *(_QWORD *)(a1 + 1416) = *(_QWORD *)&Process[1].Spare2[47];
    *(_QWORD *)(a1 + 1424) = *(_QWORD *)&Process[1].Spare2[55];
    *(_QWORD *)(a1 + 1152) = Process[1].ActiveProcessors.Bitmap[18];
    *(_QWORD *)(a1 + 920) = Process[1].Affinity.Bitmap[13];
    *(_QWORD *)(a1 + 1296) = v3;
    do
    {
      *v10 = *(_QWORD *)((char *)v10 + (_QWORD)Process - a1);
      ++v10;
      --v11;
    }
    while ( v11 );
    MiInsertNewProcess((_QWORD *)a1, 0LL);
    MiAllowWorkingSetExpansion(a1 + 1280);
    return 0LL;
  }
  return result;
}
