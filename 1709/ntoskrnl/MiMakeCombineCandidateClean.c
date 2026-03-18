/*
 * XREFs of MiMakeCombineCandidateClean @ 0x1400EB5A4
 * Callers:
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400EA158 (MiCrcStillIntact.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400E9684 (MiCaptureWriteWatchDirtyBit.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

char __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  __int64 PteShadow; // r9
  __int64 v5; // r9
  __int64 v6; // rbx
  char result; // al
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, *(_QWORD *)a1);
  v8 = PteShadow;
  v6 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v8) - 0x58000000000LL;
  MiWriteValidPteNewPage((unsigned __int64 *)a1, v5 & 0xFFFFFFFFFFFFFFBDuLL);
  result = MiLockPageAndSetDirty(v6, 1);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 7;
    if ( result == 4 )
      return MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
  return result;
}
