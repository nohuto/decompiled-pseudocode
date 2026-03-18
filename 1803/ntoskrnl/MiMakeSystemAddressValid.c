/*
 * XREFs of MiMakeSystemAddressValid @ 0x140122000
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiCaptureDeleteHierarchy @ 0x140072540 (MiCaptureDeleteHierarchy.c)
 *     MiFillHyperPtes @ 0x1400B75AC (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x1400BF71C (MiMakeProtoLeafValid.c)
 *     MiLockPageTableRange @ 0x1400C6CEC (MiLockPageTableRange.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402520D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x140262490 (MiCreatePageTablesForPhysicalRange.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140263814 (MiWorkingSetInfoCheckPageTable.c)
 *     MiInsertLargeUserMapping @ 0x140268D44 (MiInsertLargeUserMapping.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 */

char __fastcall MiMakeSystemAddressValid(ULONG_PTR a1, __int64 a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  unsigned __int8 v5; // bl
  unsigned int v6; // esi
  __int64 v7; // rdi
  ULONG_PTR BugCheckParameter4; // r12
  _KPROCESS *Process; // r13
  char *AnyMultiplexedVm; // r14
  int v11; // r15d
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rbx
  signed __int64 v17; // r8
  __int64 Next; // rax
  char v19; // cl
  signed __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  signed __int64 v22; // r8
  char v23; // cl
  signed __int64 v24; // rdx
  bool v25; // zf
  _KLOCK_QUEUE_HANDLE *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  ULONG_PTR v31; // rbx
  LONG *SharedVm; // rbx
  volatile signed __int32 *PageTableLockBuffer; // rsi
  unsigned __int32 v34; // r8d
  char v35; // cl
  signed __int32 v36; // eax
  volatile signed __int32 *v37; // r8
  int v38; // edx
  int v39; // ett
  struct _KPRCB *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  char v45; // cl
  volatile __int64 *v46; // rdx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // r8
  int v55; // [rsp+30h] [rbp-98h] BYREF
  int v56; // [rsp+34h] [rbp-94h] BYREF
  int v57; // [rsp+38h] [rbp-90h] BYREF
  int v58; // [rsp+3Ch] [rbp-8Ch] BYREF
  signed __int64 v59; // [rsp+40h] [rbp-88h]
  unsigned __int64 v60; // [rsp+48h] [rbp-80h]
  _KPROCESS *v61; // [rsp+50h] [rbp-78h]
  unsigned __int64 v62; // [rsp+58h] [rbp-70h]
  unsigned __int64 v63; // [rsp+60h] [rbp-68h]
  unsigned __int64 v64; // [rsp+68h] [rbp-60h]
  __int64 v65; // [rsp+70h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]
  int v71; // [rsp+F0h] [rbp+28h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  BugCheckParameter4 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v61 = Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  else
    AnyMultiplexedVm = (char *)&Process[1].IdealNode[12];
  v11 = a5 & 1;
  v71 = v11;
  while ( v11 )
  {
    LOBYTE(Next) = MiIsAddressValid(BugCheckParameter4);
    if ( (_BYTE)Next )
      return Next;
LABEL_58:
    if ( v7 )
      MiFlushTbList(v7, v28, v29);
    if ( v11 )
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v5);
    else
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v5, v29);
    v30 = MmAccessFault(((unsigned __int64)v6 << 57) | 0x100000000000002LL, BugCheckParameter4, 0, 0LL);
    v31 = v30;
    if ( v30 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v31, (ULONG_PTR)Process, BugCheckParameter4);
    }
    if ( v11 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    else
    {
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    v5 = a4;
  }
  v60 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v62 = v60;
  v63 = ((v60 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v64 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v65 = ((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0xFFFFF6FB7DBEDF68uLL;
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  v14 = 2LL;
  v15 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    v16 = *(&v62 + v14);
    v17 = *(_QWORD *)v16;
    if ( v16 >= v15 && v16 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
    {
      v13 = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(v13 + 640) != 1 && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v13 = (__int64)KeGetCurrentThread()->ApcState.Process;
        v41 = *(_QWORD *)(v13 + 1544);
        if ( v41 )
        {
          v42 = *(_QWORD *)(v41 + 8 * ((v16 >> 3) & 0x1FF));
          v43 = v17 | 0x20;
          v13 = (unsigned __int8)v42;
          LOBYTE(v13) = v42 & 0x20;
          if ( (v42 & 0x20) == 0 )
            v43 = *(_QWORD *)v16;
          v17 = v43;
          if ( (v42 & 0x42) != 0 )
            v17 = v43 | 0x42;
        }
      }
    }
    LOBYTE(Next) = v17 & 0x81;
    if ( (v17 & 0x81) != 1 )
      break;
    if ( (v17 & 0x20) == 0 )
    {
      LOBYTE(Next) = MiPerformSafePdeWrite(v13, (volatile signed __int64 *)*(&v62 + v14), v17, 1);
      v15 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( v16 != v12 )
    {
      v19 = AnyMultiplexedVm[184];
      if ( v16 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v45 = v19 & 7;
        if ( v45 )
        {
          if ( v45 == 7 )
          {
            v46 = (volatile __int64 *)&unk_1403CBCE8;
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
          }
          else if ( v45 == 5 )
          {
            v46 = &qword_1403CBCE0;
            SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
          }
          else
          {
            v46 = &qword_1403CBCF8;
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
          }
        }
        else
        {
          v46 = (volatile __int64 *)(AnyMultiplexedVm + 176);
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[2];
        }
        SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v46;
        SelfmapLockHandle->LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)SelfmapLockHandle, v46);
        goto LABEL_18;
      }
      if ( (v19 & 7) != 0 && v16 >= v15 && v16 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer((__int64)AnyMultiplexedVm, v16, &v55);
        v34 = *PageTableLockBuffer;
        do
        {
LABEL_80:
          v35 = v55;
          while ( ((v34 >> v35) & 1) != 0 )
          {
            if ( ((v34 >> v35) & 2) == 0 )
            {
              v34 = _InterlockedCompareExchange(PageTableLockBuffer, v34 | (2 << v35), v34);
              goto LABEL_80;
            }
            v56 = 0;
            do
            {
              KeYieldProcessorEx(&v56);
              v34 = *PageTableLockBuffer;
              v35 = v55;
            }
            while ( (((unsigned __int32)*PageTableLockBuffer >> v55) & 1) != 0 );
          }
          v36 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << v35) & (v34 | (1 << v35)), v34);
          v25 = v34 == v36;
          v34 = v36;
        }
        while ( !v25 );
        goto LABEL_18;
      }
      v20 = *(_QWORD *)v16;
      if ( v16 >= v15
        && v16 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v20 & 1) != 0
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        v48 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v48 )
        {
          v49 = *(_QWORD *)(v48 + 8 * ((v16 >> 3) & 0x1FF));
          v50 = v20 | 0x20;
          if ( (v49 & 0x20) == 0 )
            v50 = *(_QWORD *)v16;
          v20 = v50;
          if ( (v49 & 0x42) != 0 )
            v20 = v50 | 0x42;
        }
      }
      v21 = v20;
      if ( (v20 & 1) != 0 )
      {
        v22 = v20;
        do
        {
          if ( (v21 & 0x1000000000000000LL) != 0 )
          {
            if ( ((v21 >> 60) & 2) != 0 )
            {
              v57 = 0;
              do
              {
                KeYieldProcessorEx(&v57);
                v59 = *(_QWORD *)v16;
                v20 = v59;
              }
              while ( (v59 & 0x1000000000000000LL) != 0 );
            }
            else
            {
              v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v21 | 0x2000000000000000LL, v20);
            }
          }
          else
          {
            v20 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v16,
                    v21 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                    v20);
            if ( v20 == v22 )
              break;
          }
          v21 = v20;
          v22 = v20;
        }
        while ( (v20 & 1) != 0 );
LABEL_18:
        v15 = 0xFFFFF6FB7DBED000uLL;
      }
      v23 = AnyMultiplexedVm[184] & 7;
      if ( v12 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( v23 && v12 >= v15 && v12 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v37 = (volatile signed __int32 *)MiGetPageTableLockBuffer((__int64)AnyMultiplexedVm, v12, &v58);
          LODWORD(Next) = *v37;
          v38 = ~(3 << v58);
          do
          {
            v13 = (unsigned int)Next & v38;
            v39 = Next;
            LODWORD(Next) = _InterlockedCompareExchange(v37, v13, Next);
          }
          while ( v39 != (_DWORD)Next );
        }
        else
        {
          v24 = *(_QWORD *)v12;
          if ( v12 >= v15
            && v12 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x1800000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v24 & 1) != 0
            && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
          {
            v51 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v51 )
            {
              v52 = *(_QWORD *)(v51 + 8 * ((v12 >> 3) & 0x1FF));
              v53 = v24 | 0x20;
              if ( (v52 & 0x20) == 0 )
                v53 = *(_QWORD *)v12;
              v24 = v53;
              if ( (v52 & 0x42) != 0 )
                v24 = v53 | 0x42;
            }
          }
          do
          {
            v13 = v24 & 0xCFFFFFFFFFFFFFFFuLL;
            Next = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v24 & 0xCFFFFFFFFFFFFFFFuLL, v24);
            v25 = v24 == Next;
            v24 = Next;
          }
          while ( !v25 );
        }
LABEL_29:
        v12 = v16;
        goto LABEL_30;
      }
      if ( v23 )
      {
        if ( v23 == 7 )
        {
          v26 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
        }
        else
        {
          v40 = KeGetCurrentPrcb();
          if ( v23 == 5 )
            v26 = v40->SelfmapLockHandle;
          else
            v26 = &v40->SelfmapLockHandle[3];
        }
      }
      else
      {
        v26 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        LOBYTE(Next) = KiReleaseQueuedSpinLockInstrumented(v26, retaddr);
      }
      else
      {
        _m_prefetchw(v26);
        Next = (__int64)v26->LockQueue.Next;
        if ( !v26->LockQueue.Next )
        {
          Next = _InterlockedCompareExchange64((volatile signed __int64 *)v26->LockQueue.Lock, 0LL, (signed __int64)v26);
          if ( v26 == (_KLOCK_QUEUE_HANDLE *)Next )
            goto LABEL_53;
          Next = KxWaitForLockChainValid((__int64 *)v26);
        }
        v26->LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_53:
      v13 = (__int64)KeGetCurrentPrcb();
      v27 = *(_QWORD *)(v13 + 25016);
      if ( v27 )
      {
        if ( *(_BYTE *)(v13 + 32) <= 1u )
        {
          LODWORD(Next) = *(_DWORD *)(v27 + 20) - 1;
          *(_DWORD *)(v27 + 20) = Next;
          if ( !(_DWORD)Next )
          {
            LOBYTE(Next) = *(_BYTE *)(v27 + 25);
            if ( !(_BYTE)Next && !*(_BYTE *)(v27 + 27) )
              LOBYTE(Next) = KiPerformUnboostKick(v13);
          }
        }
      }
      v15 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_29;
    }
LABEL_30:
    if ( !v14 )
      break;
    --v14;
  }
  v11 = v71;
  Process = v61;
  BugCheckParameter4 = a1;
  if ( v12 != v60 )
  {
    MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
    v5 = a4;
    v7 = a2;
    v6 = a3;
    goto LABEL_58;
  }
  return Next;
}
