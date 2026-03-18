/*
 * XREFs of MiRotatedToFrameBuffer @ 0x140008950
 * Callers:
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiCheckCommitReleaseFromVad @ 0x140211C90 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(__int64 *a1)
{
  __int64 PteShadow; // rax
  _BOOL8 result; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, PteShadow);
  v8 = PteShadow;
  result = 0;
  if ( (PteShadow & 1) != 0 )
  {
    v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v8);
    if ( !(unsigned int)MiIsPfnInline(v3) )
      return 1;
    v6 = *(_QWORD *)(v5 + 8);
    if ( (v6 | 0x8000000000000000uLL) != v4
      || (v7 = MI_GET_PAGE_FRAME_FROM_PTE(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) != v7) )
    {
      if ( (*(_QWORD *)(v5 + 40) & 0x200000000000000LL) == 0 || v6 < 0 )
        return 1;
    }
  }
  return result;
}
