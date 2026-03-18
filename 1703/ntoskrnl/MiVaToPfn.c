/*
 * XREFs of MiVaToPfn @ 0x1400B2D70
 * Callers:
 *     MmInSwapProcess @ 0x1400411F0 (MmInSwapProcess.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiGetPhysicalAddress @ 0x1400A7900 (MiGetPhysicalAddress.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x140223024 (MiDuplicateCloneLeaf.c)
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MiScrubNonPagedPool @ 0x1406B6538 (MiScrubNonPagedPool.c)
 *     MxConsumeLargePageSlush @ 0x1407F6284 (MxConsumeLargePageSlush.c)
 *     MiCheckLargePageOk @ 0x140813244 (MiCheckLargePageOk.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiVaToPfn(unsigned __int64 a1)
{
  int v1; // r9d
  __int64 v2; // rax
  int v3; // r9d
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+30h] [rbp-28h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v12 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v1 = 4;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v2 = MI_READ_PTE_LOCK_FREE(*(&v12 + (unsigned int)(v1 - 1)));
    v11 = v2;
  }
  while ( v1 && (v2 & 0x80u) == 0LL );
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v11) >> 12) & 0xFFFFFFFFFLL;
  if ( v3 )
  {
    v6 = 1LL;
    v7 = v4 >> 12;
    do
    {
      v8 = v7;
      v7 >>= 9;
      v9 = v6 * (v8 & 0x1FF);
      v6 <<= 9;
      v5 += v9;
      --v3;
    }
    while ( v3 );
  }
  return v5;
}
