/*
 * XREFs of MiEnableLargeSubsection @ 0x140222C04
 * Callers:
 *     MiIncrementLargeSubsections @ 0x140223008 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int8 v10; // dl
  unsigned __int64 v11; // rbx
  ULONG_PTR v12; // rbp
  __int64 PteShadow; // rax
  unsigned __int64 v14; // rdx
  char v15; // al
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int8 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 44);
  result = MiChargeResident(&MiSystemPartition, v3 >> 9);
  if ( (_DWORD)result )
  {
    v5 = v2 + 8 * v3;
    ValidPte = MiMakeValidPte(v2, -1LL, (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F);
    v9 = 0LL;
    v10 = 17;
    v17 = 17;
    v11 = ValidPte;
    if ( v2 < v5 )
    {
      do
      {
        if ( (v2 & 0xFFF) == 0 || v10 == 17 )
        {
          if ( v10 != 17 )
            MiUnlockProtoPoolPage(v9, v10);
          while ( 1 )
          {
            v9 = MiLockProtoPoolPage(v2, &v17);
            if ( v9 )
              break;
            MmAccessFault(2uLL, v2, 0LL, 0LL);
          }
        }
        v12 = MiLockLeafPage((__int64 *)v2, 0LL, v7, v8);
        PteShadow = *(_QWORD *)v2;
        if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v18 = PteShadow;
        if ( (PteShadow & 1) == 0 )
        {
          v11 ^= (v11 ^ (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v18) << 12)) & 0xFFFFFFFFF000LL;
          *(_QWORD *)v2 = v11;
          if ( v2 >= v14 && v2 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow();
          *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
          MiUnlinkPageFromList(v12, 0LL);
          v15 = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
          ++*(_WORD *)(v12 + 32);
          *(_BYTE *)(v12 + 34) = v15;
        }
        *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ShouldYieldProcessor = KeShouldYieldProcessor();
        v10 = v17;
        if ( ShouldYieldProcessor )
        {
          MiUnlockProtoPoolPage(v9, v17);
          v10 = 17;
          v17 = 17;
        }
        v2 += 8LL;
      }
      while ( v2 < v5 );
      if ( v10 != 17 )
        MiUnlockProtoPoolPage(v9, v10);
    }
    return 1LL;
  }
  return result;
}
