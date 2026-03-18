/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x1405D1CE0
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     MiInsertNewProcess @ 0x140063E88 (MiInsertNewProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x140064644 (MiAllowWorkingSetExpansion.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MiAllocateProcessShadow @ 0x14041D3DC (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbp
  __int64 result; // rax
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rax
  unsigned __int64 DirectoryTableBase; // rcx
  LONG *v8; // r15
  LONG *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1A0uLL, 0x3250694Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x1A0uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 768) |= 0x2000000u;
  v8 = SharedVm;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_QWORD *)(a1 + 1920) = a1 + 1912;
  *(_QWORD *)(a1 + 1912) = a1 + 1912;
  *(_QWORD *)(a1 + 1904) = 0LL;
  result = MiAllocateProcessShadow(a1);
  if ( (int)result >= 0 )
  {
    v9 = MiGetSharedVm(a1 + 1280);
    v10 = (_QWORD *)(a1 + 1320);
    *v9 = 0;
    *(_QWORD *)(a1 + 1576) = 0LL;
    *(_QWORD *)(a1 + 1392) = *(_QWORD *)&Process[1].Spare2[23];
    *(_QWORD *)(a1 + 1432) = *(_QWORD *)&Process[1].Spare2[63];
    *((_QWORD *)v9 + 6) = *((_QWORD *)v8 + 6);
    *((_QWORD *)v9 + 7) = *((_QWORD *)v8 + 7);
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
