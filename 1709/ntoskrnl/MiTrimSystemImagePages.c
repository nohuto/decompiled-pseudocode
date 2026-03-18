/*
 * XREFs of MiTrimSystemImagePages @ 0x1400DDEAC
 * Callers:
 *     MiSetPagingOfDriver @ 0x1400DDBDC (MiSetPagingOfDriver.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 *v5; // rsi
  __int64 v6; // r9
  __int64 PteShadow; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 PrototypePteDirect; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned __int64 v17; // rdi
  __int64 ContainingPageTable; // rbx
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = a1;
  if ( (unsigned __int64)a1 <= a2 )
  {
    v6 = 0x200000000000000LL;
    do
    {
      PteShadow = *v5;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v5, *v5);
      if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 )
      {
        v8 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 1;
        v20 = v8;
        v9 = MI_GET_PFN_FROM_PTE(&v20, a2, a3, v6);
        v12 = v9;
        if ( (v11 & *(_QWORD *)(v9 + 40)) != 0 )
        {
          PrototypePteDirect = MiMakePrototypePteDirect(
                                 *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL,
                                 *(_QWORD *)(v9 + 8),
                                 v10,
                                 v11);
          if ( v14 >= 0 )
            PrototypePteDirect |= 0x800uLL;
        }
        else
        {
          v15 = MI_GET_PAGE_FRAME_FROM_PTE(&v20);
          PrototypePteDirect = MiMakeTransitionPte(v15, v16);
        }
        *v5 = PrototypePteDirect;
        if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v5, PrototypePteDirect);
        v17 = 0LL;
        MiLockPageAtDpcInline(v12);
        *(_BYTE *)(v12 + 35) &= ~8u;
        if ( (v8 & 0x42) != 0 )
          v17 = MiCaptureDirtyBitToPfn(v12);
        if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
          ContainingPageTable = MiGetContainingPageTable(v5);
        else
          ContainingPageTable = -1LL;
        *(_BYTE *)(v12 + 35) = *(_BYTE *)(v12 + 35) & 0xF8 | 2;
        MiDecrementShareCount(v12);
        if ( ContainingPageTable != -1 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v12 = 48 * ContainingPageTable - 0x58000000000LL;
          MiLockPageAtDpcInline(v12);
          MiDecrementShareCount(v12);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v17 )
          MiReleasePageFileInfo((struct _KEVENT *)&MiSystemPartition, v17, 1);
        ++v3;
        v6 = 0x200000000000000LL;
      }
      ++v5;
    }
    while ( (unsigned __int64)v5 <= a2 );
  }
  return v3;
}
