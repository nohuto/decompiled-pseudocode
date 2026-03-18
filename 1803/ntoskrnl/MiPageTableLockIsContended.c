/*
 * XREFs of MiPageTableLockIsContended @ 0x14004EA5C
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 *     MiDeleteSessionPoolRange @ 0x14025BEE8 (MiDeleteSessionPoolRange.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  char v6; // al
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v6 = v2 & 7;
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v6 == 5 )
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        else
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    return SelfmapLockHandle->LockQueue.Next != 0LL;
  }
  else if ( (v2 & 7) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(a1, a2, &v13);
    return ((unsigned __int8)(*PageTableLockBuffer >> v13) >> 1) & 1;
  }
  else
  {
    if ( MiPteInShadowRange(a2)
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v3 & 1) != 0
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v10 )
      {
        v11 = v3 | 0x20;
        v12 = *(_QWORD *)(v10 + 8 * ((v4 >> 3) & 0x1FF));
        if ( (v12 & 0x20) == 0 )
          v11 = v3;
        v3 = v11;
        if ( (v12 & 0x42) != 0 )
          v3 = v11 | 0x42;
      }
    }
    return (v3 >> 60) & 2;
  }
}
