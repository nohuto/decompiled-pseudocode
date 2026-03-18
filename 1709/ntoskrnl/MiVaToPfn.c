/*
 * XREFs of MiVaToPfn @ 0x1400C00C4
 * Callers:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiGetPhysicalAddress @ 0x1400BBFF0 (MiGetPhysicalAddress.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiInitializeShadowPageTable @ 0x14043CFEC (MiInitializeShadowPageTable.c)
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 *     MiScrubNonPagedPool @ 0x1406E2B74 (MiScrubNonPagedPool.c)
 *     MxConsumeLargePageSlush @ 0x140827268 (MxConsumeLargePageSlush.c)
 *     MiCheckLargePageOk @ 0x140856488 (MiCheckLargePageOk.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiVaToPfn(unsigned __int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 *v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 PteShadow; // rax
  __int64 result; // rax
  int v9; // r9d
  unsigned __int64 v10; // r11
  __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v16[4]; // [rsp+28h] [rbp-30h] BYREF

  v1 = 4LL;
  v2 = v16;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v4) = 4;
  v5 = 1LL;
  do
  {
    *v2 = v3;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v2;
    --v1;
  }
  while ( v1 );
  do
  {
    v4 = (unsigned int)(v4 - 1);
    v6 = (__int64 *)v16[v4];
    PteShadow = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v6, *v6);
    v15 = PteShadow;
  }
  while ( (_DWORD)v4 && (PteShadow & 0x80u) == 0LL );
  result = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
  v11 = result;
  if ( v9 )
  {
    v12 = v10 >> 12;
    do
    {
      v13 = v12;
      v12 >>= 9;
      v14 = v5 * (v13 & 0x1FF);
      v5 <<= 9;
      v11 += v14;
      --v9;
    }
    while ( v9 );
    return v11;
  }
  return result;
}
