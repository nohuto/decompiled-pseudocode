/*
 * XREFs of MiDeleteKernelStack @ 0x1400328D0
 * Callers:
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 *     MiDeleteCachedKernelStack @ 0x14011C5D8 (MiDeleteCachedKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 *v7; // rdi
  __int64 *v8; // r15
  __int64 SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  KIRQL v14; // r12
  __int64 PteShadow; // rax
  _DWORD *v16; // rax
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  int v24; // [rsp+88h] [rbp+10h]
  __int64 *v25; // [rsp+90h] [rbp+18h]

  v2 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (a2 & 1) != 0 )
    v3 = 18LL;
  else
    v3 = (unsigned __int8)byte_14038900C;
  v4 = (unsigned int)(v3 + 1);
  v5 = (unsigned int)v3;
  v24 = v3 + 1;
  v6 = 0LL;
  v7 = (__int64 *)(a1 - 8 * v3);
  v25 = v7;
  v8 = &v7[v4];
  SharedVm = MiGetSharedVm(&unk_140389550);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v14 = v10;
  if ( v7 < v8 )
  {
    do
    {
      PteShadow = *v7;
      if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v7, *v7);
      v23 = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        if ( !v6 )
          v6 = *(_QWORD *)(qword_140388AF0
                         + 8 * ((*(_QWORD *)(MI_GET_PFN_FROM_PTE(&v23, v11, v12, v13) + 40) >> 40) & 0x3FFLL));
        MiDeleteValidSystemPage(&unk_140389550, v7, 0LL, &v18);
        v2 = ++v18;
      }
      ++v7;
    }
    while ( v7 < v8 );
    LODWORD(v4) = v24;
  }
  MiPreUnlockWorkingSetExclusive(&unk_140389550, v14);
  v16 = (_DWORD *)MiGetSharedVm(&unk_140389550);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
  else
    *v16 = 0;
  __writecr8(v14);
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_1403893F8, -v5);
    MiReturnResidentAvailable(v18);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 6016), v2);
  }
  MiReleasePtes(&unk_140388FA0, v25, (unsigned int)v4);
  return MiReturnCommit(v6, v5 - v19);
}
