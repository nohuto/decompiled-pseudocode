/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x14007FA24
 * Callers:
 *     MiEliminateZeroPages @ 0x1404CCB30 (MiEliminateZeroPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  _DWORD *v12; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  SharedVm = MiGetSharedVm(a1);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v8 = v6;
  v9 = 0LL;
  if ( *(_DWORD *)(a2 + 12) )
  {
    do
    {
      v10 = *(_QWORD *)(a2 + 8 * v9 + 24);
      if ( (unsigned __int8)MiIsAddressValid(v10) )
      {
        v15 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (MiGetWsleContents(v11, v10) & 0xF) != 0xA
          && *(__int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v15) - 0x57FFFFFFFF8LL) < 0 )
        {
          *(_QWORD *)(a2 + 8 * v4 + 24) = *(_QWORD *)(a2 + 8 * v9 + 24);
          v4 = (unsigned int)(v4 + 1);
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(_DWORD *)(a2 + 12) );
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(a2 + 12) = v4;
      MiFreeWsleList(a1, a2, 0LL);
    }
  }
  LOBYTE(v7) = v8;
  MiPreUnlockWorkingSetExclusive(a1, v7);
  v12 = (_DWORD *)MiGetSharedVm(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
  else
    *v12 = 0;
  result = v8;
  __writecr8(v8);
  return result;
}
