/*
 * XREFs of MiEnableLargeSubsection @ 0x14025D860
 * Callers:
 *     MiIncrementLargeSubsections @ 0x14025DC18 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rbx
  ULONG_PTR v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // al
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int8 v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 44);
  result = MiChargeResident(&MiSystemPartition, v6 >> 9, 1024LL, a4);
  if ( (_DWORD)result )
  {
    v9 = v5 + 8 * v6;
    ValidPte = MiMakeValidPte(v5, -1LL, (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F, v8);
    v13 = 0LL;
    LOBYTE(v14) = 17;
    v22 = 17;
    v15 = ValidPte;
    if ( v5 < v9 )
    {
      do
      {
        if ( (v5 & 0xFFF) == 0 || (_BYTE)v14 == 17 )
        {
          if ( (_BYTE)v14 != 17 )
            MiUnlockProtoPoolPage(v13, v14, v11, v12);
          while ( 1 )
          {
            v13 = MiLockProtoPoolPage(v5, &v22);
            if ( v13 )
              break;
            MmAccessFault(2uLL, v5, 0, 0LL);
          }
        }
        v16 = MiLockLeafPage(v5, 0);
        v17 = MI_READ_PTE_LOCK_FREE(v5);
        v23 = v17;
        if ( (v17 & 1) == 0 )
        {
          v15 ^= (v15 ^ MiReverseSwizzleInvalidPte(v17)) & 0xFFFFFFFFF000LL;
          *(_QWORD *)v5 = v15;
          if ( MiPteInShadowRange(v5) )
            MiWritePteShadow(v18, v15, v19);
          *(_QWORD *)(v16 + 24) &= 0xC000000000000000uLL;
          MiUnlinkPageFromList(v16, 0LL);
          v20 = *(_BYTE *)(v16 + 34) & 0xF8 | 6;
          ++*(_WORD *)(v16 + 32);
          *(_BYTE *)(v16 + 34) = v20;
        }
        *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ShouldYieldProcessor = KeShouldYieldProcessor();
        LOBYTE(v14) = v22;
        if ( ShouldYieldProcessor )
        {
          MiUnlockProtoPoolPage(v13, v14, v11, v12);
          LOBYTE(v14) = 17;
          v22 = 17;
        }
        v5 += 8LL;
      }
      while ( v5 < v9 );
      if ( (_BYTE)v14 != 17 )
        MiUnlockProtoPoolPage(v13, v14, v11, v12);
    }
    return 1LL;
  }
  return result;
}
