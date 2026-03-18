/*
 * XREFs of MiWriteComplete @ 0x140134890
 * Callers:
 *     MiStoreWriteModifiedCompleteApc @ 0x1400D16E0 (MiStoreWriteModifiedCompleteApc.c)
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     MI_PAGEFILE_WRITE @ 0x1400C99D0 (MI_PAGEFILE_WRITE.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400D0618 (CcNotifyOfMappedWriteComplete.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1400D0C58 (MiStoreCheckCompleteWriteBatch.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeModWriterEntry @ 0x140134EFC (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140134F38 (MiReleaseWriteInProgressCharges.c)
 *     MiDecrementModifiedWriteCount @ 0x1401351A4 (MiDecrementModifiedWriteCount.c)
 *     MiIsRetryIoStatus @ 0x140135210 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140135254 (MmIsWriteErrorFatal.c)
 *     FsRtlReleaseFileForModWrite @ 0x1401352E8 (FsRtlReleaseFileForModWrite.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x1401A65FC (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x14024FFD8 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

int __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rdi
  __int64 v4; // rbp
  int v5; // esi
  int v6; // ebx
  CSHORT MdlFlags; // ax
  __int64 v10; // r13
  struct _KEVENT *v11; // r9
  ULONG_PTR v12; // r12
  __int64 v13; // r15
  int v14; // ecx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // r15d
  int v18; // eax
  int IsRetryIoStatus; // eax
  __int64 PageFilePte; // rax
  __int64 v21; // r15
  __int64 updated; // rdi
  struct _MDL *v23; // r12
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r8
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rax
  __int64 PteTimeStamp; // rax
  unsigned int v32; // eax
  __int64 *v33; // rcx
  struct _KEVENT *v34; // r15
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  _QWORD *v36; // rax
  void *v37; // rcx
  __int64 v38; // rax
  unsigned __int8 *v39; // rbx
  KIRQL v40; // al
  unsigned __int8 v41; // cl
  KIRQL v42; // di
  __int64 *v43; // rcx
  bool v44; // zf
  KIRQL v45; // al
  unsigned __int8 v46; // cl
  int v48; // [rsp+30h] [rbp-78h]
  unsigned __int64 v49; // [rsp+38h] [rbp-70h]
  struct _KEVENT *v50; // [rsp+38h] [rbp-70h]
  struct _MDL *v51; // [rsp+40h] [rbp-68h]
  __int64 v52; // [rsp+48h] [rbp-60h] BYREF
  __int64 v53; // [rsp+50h] [rbp-58h]
  unsigned __int64 v54; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v55; // [rsp+B0h] [rbp+8h]
  signed int v56; // [rsp+B8h] [rbp+10h]
  int v58; // [rsp+C8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v4 = *(_QWORD *)(a1 + 192);
  v5 = 0;
  v58 = 0;
  v6 = 0;
  v56 = *(_DWORD *)(a1 + 136);
  MdlFlags = v3->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(v3);
    MdlFlags = v3->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v10 = *(_QWORD *)(a1 + 160);
  v11 = 0LL;
  v12 = *a2;
  v13 = *(_QWORD *)(a1 + 168);
  v48 = v12;
  v53 = v10;
  if ( !v10 )
  {
    v52 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, &v52, 5, 0, v12);
  }
  v51 = v3 + 1;
  v14 = (int)v11;
  LOBYTE(v14) = (v56 & 0xFFF) != 0;
  v54 = (unsigned __int64)&v3[1] + 8 * v14 + 8 * (v56 >> 12);
  if ( v13 )
  {
    v15 = *(_QWORD *)(a1 + 152);
    v49 = v15;
    if ( (v13 & 1) == 0 )
    {
      CcNotifyOfMappedWriteComplete(*(_QWORD *)(v15 + 40), *(_QWORD *)(a1 + 176), v56, v12);
      v15 = v49;
    }
    FsRtlReleaseFileForModWrite((PFILE_OBJECT)v15);
    MiDereferenceControlAreaFile(v10, v49);
    v11 = 0LL;
    if ( (v12 & 0x80000000) != 0LL )
      goto LABEL_12;
  }
  if ( (v12 & 0x80000000) != 0LL )
  {
LABEL_12:
    v16 = (unsigned int)v11;
    v17 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
    LOBYTE(v16) = v10 != 0;
    v18 = MmIsWriteErrorFatal(v16, v17, (unsigned int)v12);
    v11 = 0LL;
    if ( !v18 )
      goto LABEL_19;
    if ( !v10 )
      KeBugCheckEx(0x7Au, 0x20uLL, v12, (ULONG_PTR)v3, 0LL);
    if ( (*(_DWORD *)(v10 + 56) & 0x10) != 0 )
      goto LABEL_20;
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v12, v56);
    v11 = 0LL;
    if ( IsRetryIoStatus && v17 && v54 > (unsigned __int64)&v3[1].Size )
    {
LABEL_19:
      v6 = 1;
    }
    else
    {
      v5 = 1;
      v58 = 1;
    }
LABEL_20:
    if ( v10 )
      *(_DWORD *)(v4 + 664) = v12;
    else
      *(_DWORD *)(v4 + 660) = v12;
  }
  v50 = v11;
  if ( v5 )
    MiSetDeleteOnClose(v10, 1LL);
  PageFilePte = MiMakePageFilePte(0LL);
  v21 = *(_QWORD *)(a1 + 144);
  updated = PageFilePte;
  if ( v21 )
    updated = MiTransferSoftwarePte(PageFilePte, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 176) >> 12, 1LL);
  if ( (unsigned __int64)v51 < v54 )
  {
    v23 = v51;
    v24 = v54;
    while ( v23->Next == (struct _MDL *)qword_1403CC408 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
      {
        v25 = updated;
LABEL_47:
        MiReleasePageFileInfo((struct _KEVENT *)v4, v25, 0);
      }
LABEL_48:
      PteTimeStamp = MiGetPteTimeStamp(updated);
      v23 = (struct _MDL *)((char *)v23 + 8);
      updated = MiUpdatePageFileHighInPte(updated, PteTimeStamp + 1);
      if ( (unsigned __int64)v23 >= v24 )
      {
        v21 = *(_QWORD *)(a1 + 144);
        v5 = v58;
        LODWORD(v12) = v48;
        v10 = v53;
        goto LABEL_50;
      }
    }
    v26 = 48 * (__int64)v23->Next - 0x58000000000LL;
    v55 = MiLockPageInline(v26);
    if ( (v6 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v26 + 34) & 0x10) == 0 || (*(_DWORD *)(v26 + 16) & 0x400LL) != 0 )
        v6 &= ~2u;
      else
        v6 |= 2u;
    }
    v6 &= 0xFFFFFFF3;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      v28 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v26 + 40) >> 40) & 0x3FFLL));
      if ( (v6 & 2) == 0 && (*(_QWORD *)(v26 + 24) & 0x4000000000000000LL) == 0 )
      {
        v29 = *(_BYTE *)(v26 + 34);
        if ( *(_WORD *)(v26 + 32) <= 1u )
        {
          *(_BYTE *)(v26 + 34) = v29 & 0xF8 | 2;
          if ( *(_DWORD *)(v28 + 1272) )
            v6 |= 4u;
          else
            v6 |= 8u;
        }
        else
        {
          *(_BYTE *)(v26 + 34) = v29 | 0x10;
          v6 |= 2u;
        }
      }
    }
    v30 = MiWriteCompletePfn(v26, v6, v27);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v55);
    if ( !v30 )
      goto LABEL_48;
    v25 = v30;
    goto LABEL_47;
  }
LABEL_50:
  v32 = *(_DWORD *)(a1 + 140);
  if ( v32 )
  {
    if ( v21 )
      MiReleaseWriteInProgressCharges(v4, v32, 0LL);
    else
      MiReleaseWriteInProgressCharges(v4, v32, 1LL);
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
      --*(_DWORD *)(v4 + 676);
    v33 = *(__int64 **)(v4 + 896);
    if ( *v33 != v4 + 888 )
      __fastfail(3u);
    *(_QWORD *)a1 = v4 + 888;
    v34 = (struct _KEVENT *)(v4 + 904);
    *(_QWORD *)(a1 + 8) = v33;
    *v33 = a1;
    *(_QWORD *)(v4 + 896) = a1;
    if ( *(_BYTE *)(v4 + 657) != 1 )
      v34 = 0LL;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      --*(_DWORD *)(v4 + 1164);
      if ( !*(_BYTE *)(v4 + 658) )
        MiStoreCheckCompleteWriteBatch(v4);
    }
  }
  else
  {
    v34 = v50;
  }
  if ( v10 )
  {
    if ( v5 )
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v10);
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        LODWORD(PoolWithTag[1].List.Blink) = v12;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    v36 = (_QWORD *)MiDecrementModifiedWriteCount(v10, 0LL);
    if ( v36 )
      MiReleaseControlAreaWaiters(v36);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 608));
    v37 = *(void **)(a1 + 200);
    if ( v37 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v37, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v43 = *(__int64 **)(v4 + 624);
      if ( *v43 != v4 + 616 )
        __fastfail(3u);
      *(_QWORD *)a1 = v4 + 616;
      *(_QWORD *)(a1 + 8) = v43;
      *v43 = a1;
      *(_QWORD *)(v4 + 624) = a1;
      if ( *(_BYTE *)(v4 + 656) == 1 )
      {
        *(_BYTE *)(v4 + 656) = 0;
        KeSignalGate(v4 + 632, 1);
      }
    }
    else
    {
      MiFreeModWriterEntry(a1, 1LL);
    }
  }
  v38 = -v10;
  v39 = (unsigned __int8 *)(v4 + (v10 != 0 ? 987LL : 984LL));
  if ( (v12 & 0x80000000) != 0LL )
  {
    LODWORD(v38) = MiIsRetryIoStatus((unsigned int)v12, v56);
    if ( a3 )
    {
      if ( !v5 && !(_DWORD)v38 )
        *(_BYTE *)(v4 + 1016) = 1;
    }
    else if ( (_DWORD)v38 || (_DWORD)v12 == -1073741740 )
    {
      v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 980));
      v46 = *v39;
      v42 = v45;
      if ( !*v39 )
      {
        *(_WORD *)v39 = 4112;
        goto LABEL_100;
      }
      if ( v46 > 1u )
        *v39 = v46 >> 1;
      if ( v39[2] )
        goto LABEL_100;
      v44 = v39[1]-- == 1;
      if ( !v44 )
        goto LABEL_100;
      goto LABEL_99;
    }
  }
  else
  {
    if ( v10 )
      *(_BYTE *)(v4 + 1016) = 0;
    if ( *v39 )
    {
      v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 980));
      v41 = *v39;
      v42 = v40;
      if ( !*v39 )
        goto LABEL_100;
      if ( v39[2] )
      {
        if ( v41 > 1u )
        {
          v39[2] = 0;
LABEL_89:
          *v39 = 0;
        }
LABEL_100:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 980));
        LODWORD(v38) = v42;
        __writecr8(v42);
        goto LABEL_104;
      }
      v44 = v39[1]-- == 1;
      if ( !v44 )
        goto LABEL_100;
      if ( v41 > 1u )
        goto LABEL_89;
LABEL_99:
      v39[2] = 1;
      goto LABEL_100;
    }
  }
LABEL_104:
  if ( v34 )
    LODWORD(v38) = KeSetEvent(v34, 0, 0);
  return v38;
}
