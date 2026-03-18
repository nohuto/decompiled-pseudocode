/*
 * XREFs of MiDeleteTransitionPte @ 0x14007A23C
 * Callers:
 *     MiTryDeleteTransitionPte @ 0x14007A1EC (MiTryDeleteTransitionPte.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x14003855C (MiInvalidateCollidedIos.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteTransitionPte(__int64 *BugCheckParameter2, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r13
  _QWORD *v8; // r12
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 *PrototypePteDirect; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rbp
  unsigned int v15; // r12d
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int8 v19; // cl
  ULONG_PTR v21; // rax
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v23; // [rsp+80h] [rbp+8h]
  __int64 v24; // [rsp+88h] [rbp+10h]
  unsigned __int8 v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v6 = (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  if ( (__int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    v21 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x402uLL, (ULONG_PTR)BugCheckParameter2, v21, BugCheckParameter4);
  }
  v8 = (_QWORD *)(a2 + 16);
  v9 = 0;
  v23 = 0LL;
  v24 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v10 = 0LL;
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*v8, v6, a3, a4);
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, (__int64)PrototypePteDirect, v12, 2);
    v13 = MiTransferSoftwarePte(*v8, 0LL, 0LL);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = 0LL;
  if ( *(_WORD *)(a2 + 32) )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v16 = *(_BYTE *)(a2 + 34);
    if ( (v16 & 0x20) != 0 && (v16 & 8) == 0 )
    {
      v14 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v14 + 16) == v14 + 16 )
        v14 = 0LL;
    }
    v15 = 3;
  }
  else
  {
    MiUnlinkPageFromList(a2);
    if ( (*(_DWORD *)v8 & 0x400LL) == 0 )
    {
      v10 = MiCapturePageFileInfoInline((_QWORD *)(a2 + 16), 0, 1);
      v23 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
    }
    v15 = 4;
  }
  *BugCheckParameter2 = v13;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
    MiWritePteShadow(v17);
  if ( v15 == 4 )
    MiInsertPageInFreeOrZeroedList(v7, 2LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = 48 * v24 - 0x58000000000LL;
  MiLockPageAtDpcInline(v18);
  MiDecrementShareCount(v18);
  v19 = v25;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v25 != 17 )
    __writecr8(v25);
  if ( v14 )
  {
    MiInvalidateCollidedIos(v14);
    v19 = v25;
  }
  if ( v10 && v26 )
  {
    LOBYTE(v9) = v19 == 17;
    MiReleasePageFileInfo(v23, v10, v9);
  }
  return v15;
}
