/*
 * XREFs of MiEnableLargeSubsection @ 0x140218958
 * Callers:
 *     MiIncrementLargeSubsections @ 0x140218D2C (MiIncrementLargeSubsections.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v7; // rsi
  unsigned __int8 v8; // dl
  unsigned __int64 v9; // rbx
  ULONG_PTR v10; // rbp
  char v11; // al
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int8 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 44);
  result = MiChargeResident(&MiSystemPartition, v3, 1024LL);
  if ( (_DWORD)result )
  {
    v5 = v2 + 8 * v3;
    ValidPte = MiMakeValidPte(v2, -1LL, (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F);
    v7 = 0LL;
    v8 = 17;
    v13 = 17;
    v9 = ValidPte;
    if ( v2 < v5 )
    {
      do
      {
        if ( (v2 & 0xFFF) == 0 || v8 == 17 )
        {
          if ( v8 != 17 )
            MiUnlockProtoPoolPage(v7, v8);
          while ( 1 )
          {
            v7 = MiLockProtoPoolPage(v2, &v13);
            if ( v7 )
              break;
            MmAccessFault(2uLL, v2, 0, 0LL);
          }
        }
        v10 = MiLockLeafPage(v2, 0);
        v14 = MI_READ_PTE_LOCK_FREE(v2);
        if ( (v14 & 1) == 0 )
        {
          v9 ^= (v9 ^ (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v14) << 12)) & 0xFFFFFFFFF000LL;
          *(_QWORD *)v2 = v9;
          if ( MiPteInShadowRange(v2) )
            MiWritePteShadow();
          *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
          MiUnlinkPageFromList(v10, 0);
          v11 = *(_BYTE *)(v10 + 34) & 0xF8 | 6;
          ++*(_WORD *)(v10 + 32);
          *(_BYTE *)(v10 + 34) = v11;
        }
        *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ShouldYieldProcessor = KeShouldYieldProcessor();
        v8 = v13;
        if ( ShouldYieldProcessor )
        {
          MiUnlockProtoPoolPage(v7, v13);
          v8 = 17;
          v13 = 17;
        }
        v2 += 8LL;
      }
      while ( v2 < v5 );
      if ( v8 != 17 )
        MiUnlockProtoPoolPage(v7, v8);
    }
    return 1LL;
  }
  return result;
}
