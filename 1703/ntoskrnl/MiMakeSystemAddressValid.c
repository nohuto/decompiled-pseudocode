/*
 * XREFs of MiMakeSystemAddressValid @ 0x1400D0A70
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140002950 (MiUpdateForkMaps.c)
 *     MiCaptureDeleteHierarchy @ 0x140017300 (MiCaptureDeleteHierarchy.c)
 *     MiFillHyperPtes @ 0x140020148 (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x1400293F8 (MiMakeProtoLeafValid.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400FA3B0 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140123508 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140162EEC (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020CE14 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x14021C4A4 (MiCreatePageTablesForPhysicalRange.c)
 *     MiInsertLargeUserMapping @ 0x14022181C (MiInsertLargeUserMapping.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMakeSystemAddressValid(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned int v6; // edi
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // r9d
  unsigned __int64 result; // rax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  LONG *SharedVm; // rax
  int v16; // eax
  ULONG_PTR v17; // rdi
  LONG *v18; // rbx
  _KPROCESS *BugCheckParameter3; // [rsp+38h] [rbp-80h]
  unsigned __int64 v21; // [rsp+40h] [rbp-78h]
  unsigned __int64 v22; // [rsp+48h] [rbp-70h]
  unsigned __int64 v23; // [rsp+50h] [rbp-68h]
  __int64 v24; // [rsp+58h] [rbp-60h]

  v6 = a3;
  BugCheckParameter3 = KeGetCurrentThread()->ApcState.Process;
  v9 = ((__int64)a1 >> 47) + 1;
  v10 = (__int64)&BugCheckParameter3[1].IdealNode[12];
  while ( 1 )
  {
    if ( v9 <= 1 )
    {
      v21 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = 4;
      v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        result = MI_READ_PTE_LOCK_FREE(*(&v21 + (unsigned int)(v11 - 1)));
        if ( (result & 1) == 0 )
          goto LABEL_10;
        if ( (result & 0x80u) != 0LL )
          break;
        if ( !v11 )
          return result;
      }
      result = v13;
      if ( a1 < v13 )
        return result;
      result = v14;
      if ( a1 > v14 )
        return result;
    }
LABEL_10:
    if ( a2 )
      MiFlushTbList(a2);
    if ( (a5 & 1) != 0 )
    {
      MiUnlockWorkingSetExclusive(v10, a4);
    }
    else
    {
      SharedVm = MiGetSharedVm(v10);
      ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
      __writecr8(a4);
    }
    v16 = MmAccessFault(((unsigned __int64)v6 << 57) | 0x100000000000002LL, a1, 0, 0LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v17, (ULONG_PTR)BugCheckParameter3, a1);
    }
    if ( (a5 & 1) != 0 )
    {
      v18 = MiGetSharedVm(v10);
      ExAcquireSpinLockExclusive(v18);
      v6 = a3;
      v18[1] = 0;
    }
    else
    {
      MiLockWorkingSetShared(v10);
      v6 = a3;
    }
  }
}
