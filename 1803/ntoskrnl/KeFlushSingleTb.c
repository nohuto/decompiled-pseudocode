/*
 * XREFs of KeFlushSingleTb @ 0x14003B184
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140002BDC (MiSwapStackPageNoDpc.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     MiNoFaultFound @ 0x1400B53AC (MiNoFaultFound.c)
 *     MiClearPageFileHash @ 0x1400C7EC8 (MiClearPageFileHash.c)
 *     MiMapSinglePage @ 0x140138578 (MiMapSinglePage.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MmStealTopLevelPage @ 0x140143AFC (MmStealTopLevelPage.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiTradeActivePage @ 0x140162634 (MiTradeActivePage.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     MiPrepareToStealNonPagedPool @ 0x140254894 (MiPrepareToStealNonPagedPool.c)
 *     MiDbgCopyMemoryTarget @ 0x140260A00 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x140260DAC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140260E34 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140261178 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 *     MiScrubAweMappedPage @ 0x140270278 (MiScrubAweMappedPage.c)
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14062B064 (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x14089B084 (MxCopyPage.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x14089BA60 (MxFillPhysicalPage.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x140034B20 (KiPreprocessFlushTb.c)
 *     KxFlushSingleTb @ 0x14003B08C (KxFlushSingleTb.c)
 *     KiIsSecureProcessFlush @ 0x14003B2C8 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x140159D7C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14015A5C0 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VmFlushTb @ 0x1402AB308 (VmFlushTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  char v12; // r11
  int v13; // r9d
  char v14; // r10
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v16; // [rsp+40h] [rbp-40h] BYREF
  char v17; // [rsp+41h] [rbp-3Fh] BYREF
  _BYTE v18[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h]

  _R15D = 0;
  v5 = 0;
  if ( KiPreprocessFlushTb(0, a2, a3, &v17, &v16) )
  {
    if ( ((1 << a2) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      *(_QWORD *)&v22 = 1LL;
      *((_QWORD *)&v22 + 1) = a1;
      __asm { invpcid r15d, [rbp+var_20] }
    }
    __invlpg((void *)a1);
    __writecr8(v16);
    v5 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( (_BYTE)result || v17 )
  {
    KiPrepareFlushParameters(a2, &v21, v18);
    v10 = KiFlushAffinity(a3);
    LOBYTE(v11) = v18[0];
    LOBYTE(v13) = v12;
    v20 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v21, v10, v11, v13, v14, 1, (__int64)&v20);
    v5 |= result;
  }
  if ( !v5 )
    result = KxFlushSingleTb(a1, a2, a3);
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
  if ( VmTbFlushEnabled )
  {
    v19 = v9;
    result = VmFlushTb(1LL, &v19, a2);
  }
  if ( ExTbFlushActive )
  {
    v19 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v19, a2);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
