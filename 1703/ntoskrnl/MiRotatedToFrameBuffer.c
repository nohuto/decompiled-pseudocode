/*
 * XREFs of MiRotatedToFrameBuffer @ 0x14007C2AC
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020ADC8 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(__int64 a1)
{
  _BOOL8 result; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v10 & 1) != 0 )
  {
    v2 = MI_READ_PTE_LOCK_FREE(&v10);
    if ( !(unsigned int)MiIsPfnInline((v2 >> 12) & 0xFFFFFFFFFLL, v3, v4, v5) )
      return 1;
    v8 = *(_QWORD *)(v7 + 8);
    if ( (v8 | 0x8000000000000000uLL) != v6
      || (v9 = MI_GET_PAGE_FRAME_FROM_PTE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) != v9) )
    {
      if ( (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) == 0 || v8 < 0 )
        return 1;
    }
  }
  return result;
}
