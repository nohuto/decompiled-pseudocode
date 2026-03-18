/*
 * XREFs of MiDeleteProcessShadow @ 0x14017C830
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140063178 (MiDeleteFinalPageTables.c)
 *     MmSynchronizeAddressPolicy @ 0x14041DA50 (MmSynchronizeAddressPolicy.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeFlushProcessTb @ 0x140063154 (KeFlushProcessTb.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x14017C628 (KeMakeUserDirectoryTableBase.c)
 *     MiDeleteTopLevelPage @ 0x14017C69C (MiDeleteTopLevelPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetExclusive @ 0x14021EED8 (MiLockWorkingSetExclusive.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int8 v6; // al
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int8 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  if ( (MiFlags & 0x1800000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 1544);
    if ( v3 )
    {
      v4 = a1 + 1280;
      v5 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 1452));
      if ( !a2 || (v6 = MiLockWorkingSetExclusive(a1 + 1280), (v3 = *(_QWORD *)(a1 + 1544)) != 0) )
      {
        v7 = (_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v12 = MI_READ_PTE_LOCK_FREE(v7);
        v8 = MI_READ_PTE_LOCK_FREE(&v12);
        *(_QWORD *)(a1 + 1544) = 0LL;
        v9 = (v8 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(0LL);
        if ( v10 != 17 )
          MiUnlockWorkingSetExclusive(v4, v10);
        MiReleasePtes((__int64)&qword_14036D0A0, v7, 1u);
        KeFlushProcessTb(v9 << 12);
        if ( (unsigned int)MiDeleteTopLevelPage(v11, v9) != 3 )
          MiReleaseNonPagedResources(v5, 1uLL);
      }
      else
      {
        MiUnlockWorkingSetExclusive(v4, v6);
      }
    }
  }
}
