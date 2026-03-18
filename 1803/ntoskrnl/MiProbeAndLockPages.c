/*
 * XREFs of MiProbeAndLockPages @ 0x140020610
 * Callers:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     IopProbeAndLockPages @ 0x140098524 (IopProbeAndLockPages.c)
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     MmProbeAndLockPagesPrivate @ 0x14009ADD8 (MmProbeAndLockPagesPrivate.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiGetWorkingSetInfo @ 0x140144490 (MiGetWorkingSetInfo.c)
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14015D09C (VslpLockMdlForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x14015EE80 (VslFinalizeSecureImageHash.c)
 *     CcLockSystemCacheBuffer @ 0x140220198 (CcLockSystemCacheBuffer.c)
 *     VslValidateDynamicCodePages @ 0x140230AF0 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_0 @ 0x140232AF0 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1402387E8 (IopProbeAndLockPages_1.c)
 *     KiOpPatchCode @ 0x14024B784 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1402850E4 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1402A90EC (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1402AB520 (VmProbeAndLockPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x140021570 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiFaultInProbeAddress @ 0x1400BA738 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1400BBD14 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140138D9C (MiUnlockProbePacketWorkingSet.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     MiAddMdlTracker @ 0x1402539C4 (MiAddMdlTracker.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(_DWORD *a1, char a2, int a3)
{
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 *v5; // rax
  unsigned __int64 Process; // rdx
  unsigned __int64 PageTableLockBuffer; // r8
  int v8; // edi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  NTSTATUS v11; // ebx
  __int64 *v12; // rax
  __int64 v13; // rcx
  volatile signed __int64 *v14; // r9
  signed __int64 v15; // rdx
  bool v16; // zf
  signed __int64 v17; // rax
  struct _MDL *v18; // rdi
  _BYTE *v19; // rdi
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // r9
  __int64 v24; // r10
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  char v41; // r9
  char v42; // al
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v45; // eax
  int v46; // edx
  signed __int32 v47; // ett
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v53[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v54[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-90h]
  unsigned __int64 v56; // [rsp+78h] [rbp-88h]
  unsigned __int64 v57; // [rsp+80h] [rbp-80h]
  unsigned __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v59; // [rsp+90h] [rbp-70h]
  PMDL MemoryDescriptorList; // [rsp+98h] [rbp-68h]
  int v61; // [rsp+A0h] [rbp-60h]
  unsigned __int8 v62; // [rsp+A4h] [rbp-5Ch]
  __int64 v63; // [rsp+B0h] [rbp-50h]
  int v64; // [rsp+B8h] [rbp-48h]
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 i; // [rsp+F0h] [rbp-10h]
  int v71; // [rsp+140h] [rbp+40h] BYREF
  int v72; // [rsp+158h] [rbp+58h] BYREF

  v3 = MiProbeAndLockPrepare((unsigned int)v54, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  v4 = v69;
  v5 = v59;
  Process = v55;
  while ( 1 )
  {
    *v5 = -1LL;
    PageTableLockBuffer = 0xFFFFF6FB7DBED7F8uLL;
    if ( !i )
      break;
    --i;
    if ( (v61 & 4) != 0 )
    {
      v69 = v4 + 1;
    }
    else
    {
      v26 = *(_QWORD *)Process;
      if ( Process >= 0xFFFFF6FB7DBED000uLL
        && Process <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v31 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 8 * ((v55 >> 3) & 0x1FF));
          v33 = v26 | 0x20;
          if ( (v32 & 0x20) == 0 )
            v33 = *(_QWORD *)Process;
          v26 = v33;
          if ( (v32 & 0x42) != 0 )
            v26 = v33 | 0x42;
        }
        PageTableLockBuffer = 0xFFFFF6FB7DBED7F8uLL;
      }
      v52 = v26;
      Process = (unsigned __int64)&v52;
      if ( (unsigned __int64)&v52 >= 0xFFFFF6FB7DBED000uLL )
      {
        Process = (unsigned __int64)&v52;
        if ( (unsigned __int64)&v52 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 640) != 1 && (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            PageTableLockBuffer = *(_QWORD *)(Process + 1544);
            if ( PageTableLockBuffer )
            {
              v34 = *(_QWORD *)(PageTableLockBuffer + 8 * (((unsigned __int64)&v52 >> 3) & 0x1FF));
              PageTableLockBuffer = v26 | 0x20;
              Process = (unsigned __int8)v34;
              LOBYTE(Process) = v34 & 0x20;
              if ( (v34 & 0x20) == 0 )
                PageTableLockBuffer = v26;
              v26 = PageTableLockBuffer;
              if ( (v34 & 0x42) != 0 )
                v26 = PageTableLockBuffer | 0x42;
            }
          }
        }
      }
      v69 = (v26 >> 12) & 0xFFFFFFFFFLL;
    }
LABEL_19:
    v11 = MiProbeLockFrame(v54, Process, PageTableLockBuffer);
    if ( v11 >= 0 )
    {
      v12 = v59;
      v4 = v69;
      Process = v55 + 8;
      v54[0] += 4096LL;
      *v59 = v69;
      v5 = v12 + 1;
      v59 = v5;
      v55 = Process;
      if ( Process <= v56 )
        continue;
    }
    goto LABEL_21;
  }
  v8 = MiLockPageLeafPageTable(v54, Process, 0xFFFFF6FB7DBED7F8uLL);
  while ( v58 != ZeroPte )
  {
    v8 = MiProbeLeafPteAccess(v54, &v71);
    if ( v8 < 0 )
      break;
    if ( !v71 )
    {
      v9 = v58;
      PageTableLockBuffer = (unsigned __int64)&v58;
      Process = (unsigned __int64)&v58;
      if ( (unsigned __int64)&v58 >= 0xFFFFF6FB7DBED000uLL )
      {
        Process = (unsigned __int64)&v58;
        if ( (unsigned __int64)&v58 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 640) != 1 && (v58 & 1) != 0 && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v35 = *(_QWORD *)(Process + 1544);
            if ( v35 )
            {
              PageTableLockBuffer = ((unsigned __int64)&v58 >> 3) & 0x1FF;
              v36 = *(_QWORD *)(v35 + 8 * PageTableLockBuffer);
              if ( (v36 & 0x20) != 0 )
                v9 = v58 | 0x20;
              if ( (v36 & 0x42) != 0 )
                v9 |= 0x42uLL;
            }
            else
            {
              v9 = v58;
            }
          }
        }
      }
      v69 = (v9 >> 12) & 0xFFFFFFFFFLL;
      if ( (v61 & 0xF0) == 0x10 && v64 != 3 )
      {
        v10 = v58;
        v51 = v58;
        if ( (unsigned __int64)&v51 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v51 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v58 & 1) != 0
          && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
        {
          PageTableLockBuffer = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( PageTableLockBuffer )
          {
            v37 = *(_QWORD *)(PageTableLockBuffer + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
            if ( (v37 & 0x20) != 0 )
              v10 = v58 | 0x20;
            if ( (v37 & 0x42) != 0 )
              v10 |= 0x42uLL;
          }
          else
          {
            v10 = v58;
          }
        }
        Process = (v10 >> 12) & 0xFFFFFFFFFLL;
        if ( Process <= qword_1403CB780
          && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * Process - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
        {
          PageTableLockBuffer = v55;
          v51 = v58 & 0xF0FF000000000FFFuLL;
          for ( i = 0LL; ; ++i )
          {
            PageTableLockBuffer += 8LL;
            if ( (PageTableLockBuffer & 0xFFF) == 0 || PageTableLockBuffer > v56 )
              break;
            v20 = *(_QWORD *)PageTableLockBuffer;
            if ( PageTableLockBuffer >= 0xFFFFF6FB7DBED000uLL
              && PageTableLockBuffer <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v20 & 1) != 0
              && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
            {
              Process = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( Process )
              {
                v38 = *(_QWORD *)(Process + 8 * ((PageTableLockBuffer >> 3) & 0x1FF));
                Process = v20 | 0x20;
                if ( (v38 & 0x20) == 0 )
                  Process = *(_QWORD *)PageTableLockBuffer;
                v20 = Process;
                if ( (v38 & 0x42) != 0 )
                  v20 = Process | 0x42;
              }
            }
            v53[0] = v20;
            if ( (v20 & 0xF0FF000000000FFFuLL) != v51 )
              break;
            if ( (unsigned __int64)v53 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v53 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v20 & 1) != 0
              && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
            {
              Process = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( Process )
              {
                v39 = *(_QWORD *)(Process + 8 * (((unsigned __int64)v53 >> 3) & 0x1FF));
                Process = v20 | 0x20;
                if ( (v39 & 0x20) == 0 )
                  Process = v20;
                v20 = Process;
                if ( (v39 & 0x42) != 0 )
                  v20 = Process | 0x42;
              }
            }
            v21 = (v20 >> 12) & 0xFFFFFFFFFLL;
            if ( v21 > qword_1403CB780
              || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v21 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
            {
              break;
            }
            v22 = 48 * v21;
            v23 = (_QWORD *)qword_1403CB788;
            v24 = v22 - 0x58000000000LL;
            if ( qword_1403CB788 )
            {
              if ( ((*(_QWORD *)(v24 + 40) >> 54) & 7) == 1 )
              {
                Process = v22 / 48;
                if ( qword_1403CB788 )
                {
                  do
                  {
                    v40 = v23[3];
                    if ( Process < v40 )
                    {
                      v23 = (_QWORD *)*v23;
                    }
                    else
                    {
                      if ( Process - v40 < v23[4] )
                        goto LABEL_17;
                      v23 = (_QWORD *)v23[1];
                    }
                  }
                  while ( v23 );
                }
              }
            }
            Process = (*(_QWORD *)(v24 + 40) >> 57) & 1LL;
            if ( (*(_QWORD *)(v24 + 40) & 0x200000000000000LL) == 0 )
            {
              v25 = (__int64)(*(_QWORD *)(v24 + 8) << 25) >> 16;
              if ( v25 >= 0xFFFFF68000000000uLL && v25 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                v41 = *(_BYTE *)(v24 + 34);
                if ( ((v41 & 0x20) == 0 || (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v24 + 32))
                  && (v41 & 8) == 0
                  && ((*(_QWORD *)v24 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
                {
                  break;
                }
              }
            }
            if ( !v64
              && (((*(_QWORD *)(v24 + 40) >> 54) & 7) != 1 && *(_QWORD *)(v24 + 8) >= v64 || Process && (v61 & 1) != 0) )
            {
              break;
            }
          }
LABEL_17:
          if ( i )
            v61 &= ~4u;
        }
      }
      goto LABEL_19;
    }
    if ( v71 != 1 )
    {
      MiUnlockProbePacketWorkingSet(v54);
      v8 = MiFaultInProbeAddress(v54);
      MiLockProbePacketWorkingSet(v54);
      if ( v8 < 0 )
      {
        ++dword_1403CBE5C;
        break;
      }
    }
    v8 = MiLockPageLeafPageTable(v54, Process, PageTableLockBuffer);
  }
  v11 = v8;
  if ( v8 >= 0 )
    goto LABEL_19;
LABEL_21:
  v13 = v65;
  if ( v65 )
  {
    v14 = (volatile signed __int64 *)v57;
    if ( v57 )
    {
      if ( v57 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v42 = *(_BYTE *)(v65 + 184) & 7;
        if ( v42 )
        {
          if ( v42 == 7 )
          {
            SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
          }
          else
          {
            CurrentPrcb = KeGetCurrentPrcb();
            if ( v42 == 5 )
              SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
            else
              SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
          }
        }
        else
        {
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
      }
      else if ( (*(_BYTE *)(v65 + 184) & 7) != 0 && v57 >= 0xFFFFF6FB7DBED000uLL && v57 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = MiGetPageTableLockBuffer(v65, v57, &v72);
        v45 = *(_DWORD *)PageTableLockBuffer;
        v46 = ~(3 << v72);
        do
        {
          v47 = v45;
          v45 = _InterlockedCompareExchange((volatile signed __int32 *)PageTableLockBuffer, v45 & v46, v45);
        }
        while ( v47 != v45 );
      }
      else
      {
        v15 = *(_QWORD *)v57;
        if ( v57 >= 0xFFFFF6FB7DBED000uLL && v57 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
            || (v15 & 1) == 0
            || (v15 & 0x20) != 0 && (v15 & 0x42) != 0 )
          {
            v14 = (volatile signed __int64 *)v57;
          }
          else
          {
            v14 = (volatile signed __int64 *)v57;
            v48 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v48 )
            {
              v49 = *(_QWORD *)(v48 + 8 * ((v57 >> 3) & 0x1FF));
              v50 = v15 | 0x20;
              if ( (v49 & 0x20) == 0 )
                v50 = *(_QWORD *)v57;
              v15 = v50;
              if ( (v49 & 0x42) != 0 )
                v15 = v50 | 0x42;
            }
          }
        }
        PageTableLockBuffer = 0xCFFFFFFFFFFFFFFFuLL;
        while ( 1 )
        {
          v17 = _InterlockedCompareExchange64(v14, v15 & 0xCFFFFFFFFFFFFFFFuLL, v15);
          v16 = v15 == v17;
          v15 = v17;
          if ( v16 )
            break;
          v14 = (volatile signed __int64 *)v57;
        }
      }
      v13 = v65;
    }
    if ( (v61 & 2) != 0 )
      MiUnlockWorkingSetExclusive(v13, v62);
    else
      MiUnlockWorkingSetShared(v13, v62, PageTableLockBuffer);
  }
  v18 = MemoryDescriptorList;
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)MemoryDescriptorList);
  if ( v11 < 0 )
  {
    MmUnlockPages(v18);
    ++dword_1403CBE80;
  }
  v19 = P;
  if ( P )
  {
    v27 = *((unsigned int *)P + 13);
    LODWORD(v27) = v27 & 0x7FFFFFFF;
    v28 = v66 + (v27 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31));
    v29 = v67;
    *((_DWORD *)P + 13) ^= (v28 ^ *((_DWORD *)P + 13)) & 0x7FFFFFFF;
    v19[34] = v28 >> 31;
    v30 = v29 - v66;
    if ( v30 )
      MiReturnFullProcessCommitment(v63, v30, PageTableLockBuffer);
    MiUnlockAndDereferenceVad(v19);
  }
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
}
