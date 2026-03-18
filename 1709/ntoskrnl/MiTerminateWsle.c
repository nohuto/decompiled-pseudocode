/*
 * XREFs of MiTerminateWsle @ 0x140058F20
 * Callers:
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 *     MiRemoveSystemImagePage @ 0x1400BB9FC (MiRemoveSystemImagePage.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 * Callees:
 *     MiRemoveWsle @ 0x140055F20 (MiRemoveWsle.c)
 *     MiRebuildPageTableLeafAges @ 0x14005C020 (MiRebuildPageTableLeafAges.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MiPteHasShadow @ 0x14017C178 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned int v3; // ebx
  int v6; // r15d
  unsigned __int64 *v8; // rdi
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  int v14; // r13d
  char WsleContents; // r11
  unsigned __int64 PteShadow; // rax
  __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  v3 = 0;
  v6 = 10;
  v8 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v8) - 0x58000000000LL;
  v11 = v10;
  v12 = 0xFFFFF6FB7DBED000uLL;
  v13 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= v11 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = 0;
    WsleContents = (*(_BYTE *)v9 >> 1) & 7;
LABEL_13:
    --*(_QWORD *)(a1 + 144);
    v12 = 0xFFFFF68000000000uLL;
    if ( a2 < 0xFFFFF68000000000uLL || (v12 = 0xFFFFF6FFFFFFFFFFuLL, a2 > 0xFFFFF6FFFFFFFFFFuLL) )
      --*(_QWORD *)(a1 + 128);
    goto LABEL_16;
  }
  v14 = 1;
  PteShadow = *v8;
  v6 = 10 - ((a3 & 2) != 0);
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL )
  {
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v8, *v8);
  }
  if ( (PteShadow & 1) != 0 )
    WsleContents = HIBYTE(PteShadow) & 0xF | (16 * ((PteShadow >> 60) & 7));
  else
    WsleContents = 10;
  v17 = (*(_QWORD *)(v9 + 40) >> 57) & 1LL;
  if ( (WsleContents & 0xF) == 8 )
  {
    MiUnlockWsle(a1, a2, v9);
    WsleContents = MiGetWsleContents(v18, a2);
    v13 = 0xFFFFF6FB7DBED7F8uLL;
  }
  if ( !(_DWORD)v17 )
    goto LABEL_13;
LABEL_16:
  if ( (a3 & 3) != 0 )
    goto LABEL_32;
  v19 = *v8;
  v20 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v8 <= v13
    && (unsigned int)MiPteHasShadow(v12, v19) )
  {
    LOBYTE(v19) = v19 | 0x20;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v19) = 32;
  }
  else if ( (MiFlags & 0x2000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v19 & 0x20) != 0 )
  {
    *v8 = 0LL;
    if ( (unsigned __int64)v8 >= v20 && (unsigned __int64)v8 <= v13 )
      MiWritePteShadow(v8, 0LL);
  }
  else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v8) & 0x20) == 0 )
  {
    goto LABEL_32;
  }
  v3 = 1;
LABEL_32:
  MiRemoveWsle(a1, a2, WsleContents, v6);
  if ( v14 )
    MiRebuildPageTableLeafAges(v21, a2, v22, v23);
  return v3;
}
