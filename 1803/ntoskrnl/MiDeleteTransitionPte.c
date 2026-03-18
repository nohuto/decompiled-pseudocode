/*
 * XREFs of MiDeleteTransitionPte @ 0x140052AA8
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiTryDeleteTransitionPte @ 0x1400524F0 (MiTryDeleteTransitionPte.c)
 *     MiPurgeFileOnlyPfn @ 0x14025E548 (MiPurgeFileOnlyPfn.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     MiInvalidateCollidedIos @ 0x1400ACB34 (MiInvalidateCollidedIos.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(__int64 *BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, int a4)
{
  __int64 v6; // rdx
  ULONG_PTR v7; // rax
  _QWORD *v8; // r15
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v11; // rbx
  _QWORD *PrototypePteDirect; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rbp
  unsigned int v16; // r15d
  char v17; // al
  __int64 v18; // rcx
  unsigned __int8 v19; // cl
  __int64 v21; // [rsp+80h] [rbp+8h]
  ULONG_PTR v22; // [rsp+88h] [rbp+10h]

  v6 = (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v22 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
  if ( (__int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, (ULONG_PTR)BugCheckParameter2, v7, *(_QWORD *)(a2 + 8));
  v8 = (_QWORD *)(a2 + 16);
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v21 = 0LL;
  v11 = 0LL;
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*v8);
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, v13, 2LL);
    v14 = MiTransferSoftwarePte(*v8, 0LL, 0LL, 0LL);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = 0LL;
  if ( *(_WORD *)(a2 + 32) )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v17 = *(_BYTE *)(a2 + 34);
    if ( (v17 & 0x20) != 0 && (v17 & 8) == 0 )
    {
      v15 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v15 + 16) == v15 + 16 )
        v15 = 0LL;
    }
    v16 = 3;
  }
  else
  {
    MiUnlinkPageFromList(a2);
    if ( (*(_DWORD *)v8 & 0x400LL) == 0 )
    {
      v11 = MiCapturePageFileInfoInline(a2 + 16, 0LL);
      v21 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
    }
    v16 = 4;
  }
  *BugCheckParameter2 = v14;
  if ( MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
    MiWritePteShadow(v18, v14);
  if ( v16 == 4 )
    MiInsertPageInFreeOrZeroedList(v22, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(48 * v10 - 0x58000000000LL);
  MiDecrementShareCount(48 * v10 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * v10 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = a3;
  if ( a3 != 17 )
    __writecr8(a3);
  if ( v15 )
  {
    MiInvalidateCollidedIos(v15);
    v19 = a3;
  }
  if ( v11 && a4 )
  {
    LOBYTE(v9) = v19 == 17;
    MiReleasePageFileInfo(v21, v11, v9);
  }
  return v16;
}
