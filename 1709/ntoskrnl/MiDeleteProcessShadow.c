/*
 * XREFs of MiDeleteProcessShadow @ 0x14017BF70
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400B7F8C (MiDeleteFinalPageTables.c)
 *     MmSynchronizeAddressPolicy @ 0x14043D634 (MmSynchronizeAddressPolicy.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     KeFlushProcessTb @ 0x1400B8188 (KeFlushProcessTb.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x14017BD48 (KeMakeUserDirectoryTableBase.c)
 *     MiDeleteTopLevelPage @ 0x14017BDD4 (MiDeleteTopLevelPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiLockWorkingSetExclusive @ 0x14022A26C (MiLockWorkingSetExclusive.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r15
  char v6; // al
  __int64 v7; // rdx
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // r11
  unsigned __int64 PteShadow; // rsi
  unsigned __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  if ( (MiFlags & 0x1800000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 1544);
    if ( v3 )
    {
      v4 = a1 + 1280;
      v5 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 1452));
      if ( !a2 || (v6 = MiLockWorkingSetExclusive(a1 + 1280), (v3 = *(_QWORD *)(a1 + 1544)) != 0) )
      {
        v8 = (unsigned __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v9 = 0xFFFFF6FB7DBED000uLL;
        PteShadow = *v8;
        v11 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v8, *v8);
        v16 = PteShadow;
        if ( (unsigned __int64)&v16 >= v9 && (unsigned __int64)&v16 <= v11 )
          PteShadow = MiReadPteShadow(&v16, PteShadow);
        *(_QWORD *)(a1 + 1544) = 0LL;
        v12 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(0LL);
        if ( (_BYTE)v14 != 17 )
        {
          LOBYTE(v13) = v14;
          MiUnlockWorkingSetExclusive(v4, v13);
        }
        MiReleasePtes((__int64)&qword_140389360, (unsigned __int64)v8, 1u, v14);
        KeFlushProcessTb(v12 << 12);
        if ( (unsigned int)MiDeleteTopLevelPage(v15, v12) != 3 )
          MiReleaseNonPagedResources(v5, 1uLL);
      }
      else
      {
        LOBYTE(v7) = v6;
        MiUnlockWorkingSetExclusive(v4, v7);
      }
    }
  }
}
