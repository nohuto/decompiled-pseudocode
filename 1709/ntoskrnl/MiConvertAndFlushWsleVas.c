/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x1400E6890
 * Callers:
 *     MiEliminateZeroPages @ 0x1404D4270 (MiEliminateZeroPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 *v10; // rcx
  __int64 PteShadow; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  LONG *v15; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  SharedVm = MiGetSharedVm(a1);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  v8 = 0LL;
  if ( *(_DWORD *)(a2 + 12) )
  {
    do
    {
      v9 = *(_QWORD *)(a2 + 8 * v8 + 24);
      if ( MiIsAddressValid(v9) )
      {
        v10 = (__int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v10;
        if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v10, *v10);
        v18 = PteShadow;
        if ( (MiGetWsleContents(v10, v9) & 0xF) != 0xA && *(__int64 *)(MI_GET_PFN_FROM_PTE(&v18, v12, v13, v14) + 8) < 0 )
        {
          *(_QWORD *)(a2 + 8 * v4 + 24) = *(_QWORD *)(a2 + 8 * v8 + 24);
          v4 = (unsigned int)(v4 + 1);
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a2 + 12) );
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(a2 + 12) = v4;
      MiFreeWsleList(a1, a2, 0);
    }
  }
  MiPreUnlockWorkingSetExclusive(a1, v7);
  v15 = MiGetSharedVm(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
  else
    *v15 = 0;
  result = v7;
  __writecr8(v7);
  return result;
}
