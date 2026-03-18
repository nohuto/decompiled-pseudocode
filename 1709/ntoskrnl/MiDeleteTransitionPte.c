/*
 * XREFs of MiDeleteTransitionPte @ 0x1400317D0
 * Callers:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiTryDeleteTransitionPte @ 0x1400E4FE4 (MiTryDeleteTransitionPte.c)
 *     MiPurgeFileOnlyPfn @ 0x1402238B4 (MiPurgeFileOnlyPfn.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x14012DC4C (MiInvalidateCollidedIos.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR *BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, int a4)
{
  __int64 v6; // r13
  ULONG_PTR PteShadow; // rax
  unsigned int v8; // r12d
  __int64 v9; // rdi
  int v10; // eax
  _QWORD *PrototypePteDirect; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned int v15; // r15d
  char v16; // al
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int8 v19; // cl
  __int64 v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 v23; // [rsp+98h] [rbp+10h]
  unsigned __int8 v24; // [rsp+A0h] [rbp+18h]
  int v25; // [rsp+A8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v6 = (__int64)(a2 + 0x58000000000LL) / 48;
  PteShadow = *BugCheckParameter2;
  if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    PteShadow = MiReadPteShadow(BugCheckParameter2, PteShadow);
  }
  if ( (ULONG_PTR *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, (ULONG_PTR)BugCheckParameter2, PteShadow, *(_QWORD *)(a2 + 8));
  v8 = 0;
  v21 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v9 = 0LL;
  v10 = *(_DWORD *)(a2 + 16);
  v23 = 0LL;
  if ( (v10 & 0x400) != 0 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a2 + 16));
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, v12, 2LL);
    v13 = MiTransferSoftwarePte(*(_QWORD *)(a2 + 16), 0LL, 0LL, 0LL);
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
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      v9 = MiCapturePageFileInfoInline(a2 + 16, 0LL);
      v23 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
    }
    v15 = 4;
  }
  *BugCheckParameter2 = v13;
  if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    MiWritePteShadow(BugCheckParameter2, v13);
  }
  if ( v15 == 4 )
    MiInsertPageInFreeOrZeroedList(v6, 2LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = 48 * v21 - 0x58000000000LL;
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *(__int64 *)(v17 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
    MiBadShareCount(v17);
  v18 = *(_QWORD *)(v17 + 24);
  *(_QWORD *)(v17 + 24) = v18 ^ (((v18 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v18) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v18 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v17);
  v19 = v24;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v19 != 17 )
    __writecr8(v19);
  if ( v14 )
  {
    MiInvalidateCollidedIos(v14);
    v19 = v24;
  }
  if ( v9 && v25 )
  {
    LOBYTE(v8) = v19 == 17;
    MiReleasePageFileInfo(v23, v9, v8);
  }
  return v15;
}
