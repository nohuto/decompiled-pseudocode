/*
 * XREFs of MiMakeSystemAddressValid @ 0x14003D1A0
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140009DA8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiUpdateForkMaps @ 0x1400CC280 (MiUpdateForkMaps.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14010C2B8 (MiWorkingSetInfoCheckPageTable.c)
 *     MiCaptureDeleteHierarchy @ 0x140112A38 (MiCaptureDeleteHierarchy.c)
 *     MiFillHyperPtes @ 0x140116DE4 (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x140128454 (MiMakeProtoLeafValid.c)
 *     MiInsertViewOfPhysicalSection @ 0x1401519F8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140213E14 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1402290E4 (MiCreatePageTablesForPhysicalRange.c)
 *     MiInsertLargeUserMapping @ 0x14022E6A4 (MiInsertLargeUserMapping.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 */

unsigned __int64 __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned int v6; // edi
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  __int64 v13; // r9
  unsigned __int64 *v14; // rcx
  unsigned __int64 result; // rax
  LONG *SharedVm; // rax
  int v17; // eax
  ULONG_PTR v18; // rdi
  LONG *v19; // rbx
  _KPROCESS *BugCheckParameter3; // [rsp+38h] [rbp-80h]
  ULONG_PTR v22; // [rsp+40h] [rbp-78h]
  unsigned __int64 v23; // [rsp+48h] [rbp-70h]
  unsigned __int64 v24; // [rsp+50h] [rbp-68h]
  __int64 v25; // [rsp+58h] [rbp-60h]

  v6 = a3;
  BugCheckParameter3 = KeGetCurrentThread()->ApcState.Process;
  v9 = ((__int64)BugCheckParameter4 >> 47) + 1;
  v10 = (__int64)&BugCheckParameter3[1].IdealNode[12];
  while ( 1 )
  {
    v11 = 0xFFFFF6FFFFFFFFFFuLL;
    v12 = 0xFFFFF68000000000uLL;
    if ( v9 <= 1 )
    {
      v22 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v13) = 4;
      v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v13 = (unsigned int)(v13 - 1);
        v14 = (unsigned __int64 *)*(&v22 + v13);
        result = *v14;
        if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
          result = MiReadPteShadow(v14, *v14);
        if ( (result & 1) == 0 )
          goto LABEL_13;
        if ( (result & 0x80u) != 0LL )
          break;
        if ( !(_DWORD)v13 )
          return result;
      }
      result = v12;
      if ( BugCheckParameter4 < v12 )
        return result;
      result = v11;
      if ( BugCheckParameter4 > v11 )
        return result;
    }
LABEL_13:
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
    v17 = MmAccessFault(((unsigned __int64)v6 << 57) | 0x100000000000002LL, BugCheckParameter4);
    v18 = v17;
    if ( v17 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v18, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    }
    if ( (a5 & 1) != 0 )
    {
      v19 = MiGetSharedVm(v10);
      ExAcquireSpinLockExclusive(v19);
      v6 = a3;
      v19[1] = 0;
    }
    else
    {
      MiLockWorkingSetShared(v10);
      v6 = a3;
    }
  }
}
