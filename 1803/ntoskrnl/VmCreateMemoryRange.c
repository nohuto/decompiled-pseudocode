/*
 * XREFs of VmCreateMemoryRange @ 0x1407A09B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     VmpInsertMemoryRange @ 0x1402AC110 (VmpInsertMemoryRange.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     VmpValidateMemoryRangeParameters @ 0x1407A1068 (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmCreateMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4, __int64 a5)
{
  _KPROCESS *Process; // rdi
  int inserted; // ebx
  _QWORD *v11; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v13; // rax
  _RTL_BALANCED_NODE *v14; // rax
  _RTL_BALANCED_NODE *v15; // rdi
  _RTL_BALANCED_NODE *v16; // r14
  unsigned __int64 v17; // rbp

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a5) )
    return (unsigned int)-1073741811;
  if ( !VmTbFlushEnabled )
    VmTbFlushEnabled = 1;
  v11 = (_QWORD *)Process[2].ActiveProcessors.Bitmap[16];
  if ( !v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x63506D56u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x60uLL);
    v11[9] = a5;
    v11[1] = 0LL;
    v11[2] = 0LL;
    v11[3] = 0LL;
    v11[4] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[16],
           (signed __int64)v11,
           0LL) )
    {
      ExFreePoolWithTag(v11, 0);
      v11 = (_QWORD *)Process[2].ActiveProcessors.Bitmap[16];
    }
  }
  v13 = v11[9];
  if ( v13 != -1 && v13 != a5 )
    return (unsigned int)-1073740007;
  v14 = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x724D6D56u);
  v15 = v14;
  if ( !v14 )
    return (unsigned int)-1073741670;
  memset(v14, 0, 0x50uLL);
  v16 = (_RTL_BALANCED_NODE *)(a1 >> 12);
  v17 = a2 >> 12;
  v15[2].Children[1] = (_RTL_BALANCED_NODE *)((char *)v16 + a3 - 1);
  v15[2].Children[0] = v16;
  v15[2].ParentValue = v17;
  v15[3].Children[0] = (_RTL_BALANCED_NODE *)(v17 + a3 - 1);
  inserted = VmpInsertMemoryRange((PEX_SPIN_LOCK)v11, v15, a5, a4 & 1);
  if ( inserted >= 0 )
  {
    v15 = 0LL;
    inserted = 0;
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)inserted;
}
