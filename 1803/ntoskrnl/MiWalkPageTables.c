/*
 * XREFs of MiWalkPageTables @ 0x14000D8E0
 * Callers:
 *     MiCombineWorkingSet @ 0x140004854 (MiCombineWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiDeleteSystemPageTables @ 0x14004975C (MiDeleteSystemPageTables.c)
 *     MiOutSwapWorkingSet @ 0x140062EF0 (MiOutSwapWorkingSet.c)
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 *     MiEmptyWorkingSetInitiate @ 0x1400839D0 (MiEmptyWorkingSetInitiate.c)
 *     MiTrimWorkingSet @ 0x140083D80 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x140084154 (MiSimpleAging.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MmRemoveExecuteGrants @ 0x1400D10BC (MmRemoveExecuteGrants.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiClearNonPagedPtes @ 0x1401354A0 (MiClearNonPagedPtes.c)
 *     MiGetWorkingSetInfoEx @ 0x140144614 (MiGetWorkingSetInfoEx.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14016A1C8 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiWalkResetCommitPages @ 0x1402519D4 (MiWalkResetCommitPages.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402577EC (MmRemoveSystemCacheFromDump.c)
 *     MmUpdateOldWorkingSetPages @ 0x14025AB14 (MmUpdateOldWorkingSetPages.c)
 *     MiConvertHiberPhasePages @ 0x140475478 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x14048548C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1404855D8 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14048566C (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkLargePageMappings @ 0x140898CBC (MiMarkLargePageMappings.c)
 *     MiAddLoaderHalIoMappings @ 0x14089C610 (MiAddLoaderHalIoMappings.c)
 *     MiCreateInitialSystemWsles @ 0x1408AD704 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall MiWalkPageTables(int *a1)
{
  int *v1; // rbx
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned int v4; // r13d
  unsigned __int64 *v5; // r12
  unsigned __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  int v20; // eax
  int v21; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  char v26; // al
  volatile __int64 *v27; // r11
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // r10
  _KPROCESS *Process; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __int64 v31; // rbx
  __int64 i; // r15
  unsigned __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  struct _KPRCB *CurrentPrcb; // r10
  int Next_high; // eax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // [rsp+20h] [rbp-C8h]
  __m128i si128; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v44; // [rsp+38h] [rbp-B0h]
  __int64 v45; // [rsp+40h] [rbp-A8h]
  __int64 v46; // [rsp+48h] [rbp-A0h]
  unsigned __int64 *v47; // [rsp+50h] [rbp-98h]
  __int64 v48; // [rsp+58h] [rbp-90h]
  unsigned __int64 v49; // [rsp+60h] [rbp-88h]
  unsigned __int64 v50; // [rsp+68h] [rbp-80h]
  unsigned __int64 v51; // [rsp+70h] [rbp-78h] BYREF
  __int64 v52; // [rsp+78h] [rbp-70h]
  __int64 v53; // [rsp+80h] [rbp-68h]
  unsigned __int64 v54; // [rsp+88h] [rbp-60h]
  unsigned __int64 v55; // [rsp+90h] [rbp-58h]
  unsigned __int64 v56; // [rsp+98h] [rbp-50h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-48h]
  __int64 v58; // [rsp+A8h] [rbp-40h]
  unsigned int v60; // [rsp+F8h] [rbp+10h]
  unsigned int v61; // [rsp+100h] [rbp+18h]
  unsigned int v62; // [rsp+108h] [rbp+20h]

  v1 = a1;
  if ( !*((_BYTE *)a1 + 6) )
    *((_BYTE *)a1 + 6) = 15;
  v2 = *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 9) = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v2 + 174));
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 )
  {
    if ( v3 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v3 = 0xFFFFF6FB7DBEDF70uLL;
      *((_QWORD *)v1 + 7) = 0xFFFFF6FB7DBEDF70uLL;
    }
    v36 = -1;
    if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v3 = 0LL;
      *((_QWORD *)v1 + 7) = 0LL;
    }
    else
    {
      do
      {
        ++v36;
        v3 = (__int64)(v3 << 25) >> 16;
      }
      while ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL );
    }
    v51 = v3;
    v52 = -1LL;
    v60 = 1;
    if ( v36 != -1 )
    {
      v53 = 0LL;
      v54 = v3 - 1;
      v60 = 2;
    }
  }
  else
  {
    v51 = *((_QWORD *)v1 + 4);
    v52 = *((_QWORD *)v1 + 5);
    v60 = 1;
  }
  if ( (*v1 & 0x800) != 0 )
  {
    si128.m128i_i64[0] = 0LL;
    si128.m128i_i64[1] = 0xFFFFF67FFFFFFFFFuLL;
    v44 = 0xFFFFF70000000000uLL;
    v45 = -1LL;
LABEL_7:
    v4 = 2;
    goto LABEL_8;
  }
  v4 = 1;
  switch ( *(_BYTE *)(v2 + 184) & 7 )
  {
    case 0:
      v44 = qword_1403CBB68;
      v35 = qword_1403CBB68 + 276840447;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
LABEL_47:
      v45 = v35;
      goto LABEL_7;
    case 1:
      si128.m128i_i64[0] = qword_1403CB638;
      si128.m128i_i64[1] = qword_1403CB638 + 0x7FFFFFFFFFLL;
      goto LABEL_8;
    case 2:
      si128.m128i_i64[0] = qword_1403CBA28;
      si128.m128i_i64[1] = qword_1403CBA28 + (qword_1403CBA08 << 21) - 1;
      goto LABEL_8;
  }
  if ( (*(_BYTE *)(v2 + 184) & 7) != 3 )
  {
    if ( (*(_BYTE *)(v2 + 184) & 7) == 4 )
    {
      si128.m128i_i64[0] = qword_1403CB8C0;
      si128.m128i_i64[1] = qword_1403CB8C0 + (qword_1403CB8A0 << 21) - 1;
    }
    else if ( (*(_BYTE *)(v2 + 184) & 7) == 6 )
    {
      si128.m128i_i64[0] = qword_1403CB830;
      si128.m128i_i64[1] = qword_1403CB830 + (qword_1403CB810 << 21) - 1;
    }
    goto LABEL_8;
  }
  si128.m128i_i64[0] = qword_1403CB950;
  si128.m128i_i64[1] = qword_1403CB950 - 1 + (qword_1403CB930 << 21);
  if ( qword_1403CB9C0 )
  {
    v44 = qword_1403CB9E0;
    v35 = (qword_1403CB9C0 << 21) + qword_1403CB9E0 - 1;
    goto LABEL_47;
  }
LABEL_8:
  v5 = &v51;
  v62 = 0;
  v47 = &v51;
  do
  {
    v6 = *v5;
    v7 = 0;
    v8 = v5[1];
    v50 = *v5;
    v49 = v8;
    v61 = 0;
    do
    {
      v9 = v6;
      v10 = si128.m128i_u64[2 * v7 + 1];
      if ( v6 > v10 )
        goto LABEL_25;
      v11 = si128.m128i_u64[2 * v7];
      if ( v8 < v11 )
        goto LABEL_25;
      if ( v6 < v11 )
        v9 = si128.m128i_u64[2 * v7];
      v12 = v8;
      if ( v8 > v10 )
        v12 = si128.m128i_u64[2 * v7 + 1];
      v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 10) = v13;
      v14 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 11) = v14;
      v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 12) = v15;
      v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 13) = v16;
      v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 14) = v17;
      v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 15) = v18;
      v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v1 + 16) = v19;
      *((_QWORD *)v1 + 17) = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v20 = *v1;
      *((_QWORD *)v1 + 8) = 0LL;
      if ( (v20 & 4) == 0 )
      {
        *((_QWORD *)v1 + 6) = 0LL;
        if ( (v20 & 0x400) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CBB24);
        goto LABEL_19;
      }
      v23 = *((_QWORD *)v1 + 3);
      v48 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v24 = v48 << 25;
      *((_BYTE *)v1 + 8) = 1;
      v46 = v23;
      v55 = (((unsigned __int64)(v24 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v56 = ((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v57 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v58 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v25 = 0xFFFFF6FB7DBEDF68uLL;
      v42 = 0xFFFFF6FB7DBEDF68uLL;
      v26 = *(_BYTE *)(v23 + 184) & 7;
      if ( v26 )
      {
        if ( v26 == 7 )
        {
          v27 = (volatile __int64 *)&unk_1403CBCE8;
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v26 == 5 )
          {
            v27 = (volatile __int64 *)&unk_1403CBCE0;
            SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
          }
          else
          {
            v27 = (volatile __int64 *)&unk_1403CBCF8;
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
          }
        }
      }
      else
      {
        v27 = (volatile __int64 *)(v23 + 176);
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
      }
      SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v27;
      SelfmapLockHandle->LockQueue.Next = 0LL;
      Process = (_KPROCESS *)KeGetCurrentPrcb();
      Next = Process[34].SwapListEntry.Next;
      if ( Next )
      {
        if ( LOBYTE(Process->ProfileListHead.Blink) <= 1u )
        {
          Next_high = HIDWORD(Next[2].Next);
          HIDWORD(Next[2].Next) = Next_high + 1;
          if ( Next_high == -1 && !BYTE1(Next[3].Next) && !BYTE3(Next[3].Next) )
          {
            KiPerformUnboostKick(Process);
            v25 = 0xFFFFF6FB7DBEDF68uLL;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v27);
      }
      else
      {
        if ( !_InterlockedExchange64(v27, (__int64)SelfmapLockHandle) )
          goto LABEL_33;
        KxWaitForLockOwnerShip(SelfmapLockHandle);
      }
      v25 = 0xFFFFF6FB7DBEDF68uLL;
LABEL_33:
      v31 = v46;
      for ( i = 2LL; ; --i )
      {
        v33 = *(&v55 + i);
        v34 = *(_QWORD *)v33;
        if ( v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v34 & 1) != 0 && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v39 = Process[2].Affinity.Bitmap[0];
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 8 * ((v33 >> 3) & 0x1FF));
              v41 = v34 | 0x20;
              Process = (_KPROCESS *)(unsigned __int8)v40;
              LOBYTE(Process) = v40 & 0x20;
              if ( (v40 & 0x20) == 0 )
                v41 = *(_QWORD *)v33;
              v34 = v41;
              if ( (v40 & 0x42) != 0 )
                v34 = v41 | 0x42;
            }
          }
        }
        if ( (v34 & 0x81) != 1 )
          break;
        if ( (v34 & 0x20) == 0 )
        {
          MiPerformSafePdeWrite(Process, *(&v55 + i), v34, 1LL);
          v25 = v42;
        }
        if ( v33 != v25 )
        {
          MiLockPageTableInternal(v31, v33, 0LL);
          MiUnlockPageTableInternal(v31, v42);
          v25 = v33;
          v42 = v33;
        }
        if ( !i )
          break;
      }
      v1 = a1;
      v7 = v61;
      v5 = v47;
      if ( v25 != v48 )
      {
        MiUnlockPageTableInternal(v46, v25);
        goto LABEL_20;
      }
      *((_QWORD *)a1 + 6) = v48;
LABEL_19:
      *((_BYTE *)v1 + 8) = 0;
LABEL_20:
      v21 = MiWalkPageTablesRecursively(v1, v19, 3LL);
      if ( (*v1 & 0x400) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CBB24);
      if ( v21 >= 3 )
        return (unsigned int)v21;
      v8 = v49;
LABEL_25:
      v6 = v50;
      v61 = ++v7;
    }
    while ( v7 < v4 );
    v5 += 2;
    v47 = v5;
    ++v62;
  }
  while ( v62 < v60 );
  return 3LL;
}
