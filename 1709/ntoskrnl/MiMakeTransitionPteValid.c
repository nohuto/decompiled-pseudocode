/*
 * XREFs of MiMakeTransitionPteValid @ 0x14002C750
 * Callers:
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiMakeTransitionPteValid(__int64 *a1)
{
  __int64 PteShadow; // r8
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, *a1);
  v6 = PteShadow;
  v2 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v6);
  return MiMakeValidPte(v4, v2, v3);
}
