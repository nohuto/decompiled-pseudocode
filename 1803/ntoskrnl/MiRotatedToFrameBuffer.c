/*
 * XREFs of MiRotatedToFrameBuffer @ 0x14004F064
 * Callers:
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // rax
  _BOOL8 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v7 & 1) != 0 )
  {
    v1 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
    if ( !(unsigned int)MiIsPfnInline((v1 >> 12) & 0xFFFFFFFFFLL) )
      return 1;
    v4 = *(_QWORD *)(v3 + 8);
    if ( (v4 | 0x8000000000000000uLL) != v2
      || (v5 = MI_READ_PTE_LOCK_FREE(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          ((*(_QWORD *)(v3 + 40) ^ (v5 >> 12)) & 0xFFFFFFFFFLL) != 0) )
    {
      if ( (*(_QWORD *)(v3 + 40) & 0x200000000000000LL) == 0 || v4 < 0 )
        return 1;
    }
  }
  return result;
}
