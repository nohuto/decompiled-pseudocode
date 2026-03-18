/*
 * XREFs of MiUnlockCodePage @ 0x1400BD400
 * Callers:
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiHandleDriverNonPagedSections @ 0x140543D68 (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverCode @ 0x14059BB54 (MiUnlockDriverCode.c)
 *     MiUnlockHotPatchPages @ 0x1406E1FA8 (MiUnlockHotPatchPages.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiUnlockCodePage(__int64 *a1, unsigned __int64 a2)
{
  __int64 *v3; // r14
  __int64 PteShadow; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r15
  __int64 v9; // r11
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int16 v12; // si
  __int16 v13; // si
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  char v17; // al
  int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // rdi
  int v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 <= a2 )
  {
    v3 = a1;
    while ( 1 )
    {
      PteShadow = *v3;
      if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v3, *v3);
      v22 = PteShadow;
      v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v22);
      v10 = v8 + v9;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v21 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + v9 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v21);
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
        v6 = 0xFFFFF68000000000uLL;
        v7 = 0x10000000000000LL;
      }
      v12 = *(_WORD *)(v10 + 32);
      if ( !v12 )
        MiBadRefCount(v10, v5);
      v13 = v12 - 1;
      *(_WORD *)(v10 + 32) = v13;
      if ( !v13 && (unsigned int)MiIsPfnFileOnly(v10) )
        goto LABEL_39;
      v14 = *(_QWORD *)(v10 + 40);
      if ( (v14 & v7) == 0 )
      {
        v15 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v13 )
          break;
        if ( v13 == 1 )
        {
          if ( v15 )
            break;
        }
        else if ( v13 != 2 || !v15 )
        {
          goto LABEL_40;
        }
        if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
          break;
      }
LABEL_40:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( (unsigned __int64)++v3 > a2 )
        return;
    }
    v16 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
    if ( (v16 > v6 + 0x3FFFFFFF78LL || v16 < v6) && (v17 = *(_BYTE *)(v10 + 35), (v17 & 0x20) != 0) )
    {
      *(_BYTE *)(v10 + 35) = v17 & 0xDF;
    }
    else
    {
      if ( (v14 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
      {
        v18 = 1;
      }
      else if ( (unsigned int)MiIsPfnCommitNotCharged(v10) )
      {
        v18 = 1;
      }
      else if ( !v13 && (v19 & 0x4000000000000000LL) != 0 )
      {
        v18 = 1;
      }
      v20 = *(_QWORD *)(qword_140388AF0 + 8 * ((v14 >> 40) & 0x3FF));
      if ( v18 == 1 )
        MiReturnCommit(v20, 1uLL);
      if ( (ULONG_PTR *)v20 == &MiSystemPartition )
        MiReturnResidentAvailable(1LL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 6016), 1uLL);
    }
    if ( v13 )
      goto LABEL_40;
LABEL_39:
    MiPfnReferenceCountIsZero(v10, v8 / 48);
    goto LABEL_40;
  }
}
