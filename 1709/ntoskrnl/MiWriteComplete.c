/*
 * XREFs of MiWriteComplete @ 0x1400EF800
 * Callers:
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14022CE60 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     CcNotifyOfMappedWriteComplete @ 0x14000DA50 (CcNotifyOfMappedWriteComplete.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiFreeModWriterEntry @ 0x1400EFDA4 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400EFDE0 (MiReleaseWriteInProgressCharges.c)
 *     MiDecrementModifiedWriteCount @ 0x1400EFE28 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x1400EFE94 (MmIsWriteErrorFatal.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400EFF28 (FsRtlReleaseFileForModWrite.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     MiIsRetryIoStatus @ 0x140124FC0 (MiIsRetryIoStatus.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14015C0AC (MiStoreCheckCompleteWriteBatch.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x14017C7A8 (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x140211B84 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 *     MI_PAGEFILE_WRITE @ 0x14022B8B4 (MI_PAGEFILE_WRITE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

int __fastcall MiWriteComplete(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  struct _MDL *v4; // rdi
  int v5; // esi
  int v6; // ebx
  signed int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // r13
  ULONG_PTR v12; // r15
  bool v13; // zf
  struct _MDL *v14; // rdx
  int v15; // eax
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned int v18; // r12d
  struct _KEVENT *v19; // r12
  __int64 PageFilePte; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 updated; // rdi
  struct _MDL *v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 PteTimeStamp; // rax
  __int64 v29; // rax
  _QWORD *v30; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  _QWORD *v32; // rax
  void *v33; // rcx
  _QWORD *v34; // rcx
  int v36; // [rsp+30h] [rbp-78h]
  unsigned __int64 v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+40h] [rbp-68h]
  unsigned __int64 v39; // [rsp+48h] [rbp-60h]
  __int64 v40; // [rsp+50h] [rbp-58h] BYREF
  __int64 v41; // [rsp+58h] [rbp-50h]
  struct _MDL *v42; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v43; // [rsp+B0h] [rbp+8h]
  signed int v44; // [rsp+B8h] [rbp+10h]
  int v45; // [rsp+C0h] [rbp+18h]
  int v46; // [rsp+C8h] [rbp+20h]

  v45 = a3;
  v4 = *(struct _MDL **)(a1 + 200);
  v5 = 0;
  v6 = 0;
  v46 = 0;
  if ( !v4 )
    v4 = (struct _MDL *)(a1 + 208);
  v9 = *(_DWORD *)(a1 + 136);
  v10 = *(_QWORD *)(a1 + 192);
  v44 = v9;
  if ( (v4->MdlFlags & 0x200) != 0 )
    MiRetardMdl(v4);
  if ( (v4->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v4->MappedSystemVa, v4);
  v11 = *(_QWORD *)(a1 + 160);
  v12 = *a2;
  v36 = v12;
  v41 = v11;
  if ( v11 )
  {
    v38 = 984LL;
  }
  else
  {
    v40 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v40, 5, 0, v12);
    v38 = 980LL;
  }
  v13 = (v9 & 0xFFF) == 0;
  v14 = v4 + 1;
  v15 = v9;
  v42 = v4 + 1;
  v16 = *(_QWORD *)(a1 + 168);
  v37 = (unsigned __int64)&v4[1] + 8 * !v13 + 8 * (v15 >> 12);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 152);
    v39 = v17;
    if ( (v16 & 1) == 0 )
    {
      CcNotifyOfMappedWriteComplete(*(_QWORD *)(v17 + 40), *(_QWORD *)(a1 + 176), v44, v12);
      v17 = v39;
    }
    FsRtlReleaseFileForModWrite((PFILE_OBJECT)v17);
    MiDereferenceControlAreaFile(v11, v39);
    if ( (v12 & 0x80000000) != 0LL )
      goto LABEL_15;
  }
  if ( (v12 & 0x80000000) != 0LL )
  {
LABEL_15:
    v18 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
    if ( !(unsigned int)MmIsWriteErrorFatal(v11 != 0, v18, (unsigned int)v12) )
      goto LABEL_22;
    if ( !v11 )
      KeBugCheckEx(0x7Au, 0x20uLL, v12, (ULONG_PTR)v4, 0LL);
    if ( (*(_DWORD *)(v11 + 56) & 0x10) != 0 )
      goto LABEL_23;
    if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v12, v44) && v18 && v37 > (unsigned __int64)&v4[1].Size )
    {
LABEL_22:
      v6 = 1;
    }
    else
    {
      v5 = 1;
      v46 = 1;
    }
LABEL_23:
    if ( v11 )
      *(_DWORD *)(v10 + 664) = v12;
    else
      *(_DWORD *)(v10 + 660) = v12;
  }
  v19 = 0LL;
  if ( v5 )
    MiSetDeleteOnClose(v11, 1LL);
  PageFilePte = MiMakePageFilePte(0LL, v14, a3, a4);
  v22 = *(_QWORD *)(a1 + 144);
  updated = PageFilePte;
  if ( v22 )
    updated = MiTransferSoftwarePte(PageFilePte, v22, *(_QWORD *)(a1 + 176) >> 12, 1LL);
  if ( (unsigned __int64)v42 < v37 )
  {
    v24 = v42;
    while ( v24->Next == (struct _MDL *)qword_140389188 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
      {
        v25 = updated;
LABEL_48:
        MiReleasePageFileInfo((struct _KEVENT *)v10, v25, 0);
      }
LABEL_49:
      PteTimeStamp = MiGetPteTimeStamp(updated);
      v24 = (struct _MDL *)((char *)v24 + 8);
      updated = MiUpdatePageFileHighInPte(updated, PteTimeStamp + 1);
      if ( (unsigned __int64)v24 >= v37 )
      {
        v5 = v46;
        LODWORD(v12) = v36;
        v11 = v41;
        v19 = 0LL;
        goto LABEL_51;
      }
    }
    v26 = 48 * (__int64)v24->Next - 0x58000000000LL;
    v43 = MiLockPageInline(v26);
    if ( (v6 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v26 + 34) & 0x10) == 0 || (*(_DWORD *)(v26 + 16) & 0x400LL) != 0 )
        v6 &= ~2u;
      else
        v6 |= 2u;
    }
    v6 &= ~4u;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 && (v6 & 2) == 0 && (*(_QWORD *)(v26 + 24) & 0x4000000000000000LL) == 0 )
    {
      if ( *(_WORD *)(v26 + 32) <= 1u )
      {
        *(_BYTE *)(v26 + 34) = *(_BYTE *)(v26 + 34) & 0xF8 | 2;
        v6 |= 4u;
      }
      else
      {
        *(_BYTE *)(v26 + 34) |= 0x10u;
        v6 |= 2u;
      }
    }
    v27 = MiWriteCompletePfn(v26, v6);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v43);
    if ( !v27 )
      goto LABEL_49;
    v25 = v27;
    goto LABEL_48;
  }
LABEL_51:
  LODWORD(v29) = *(_DWORD *)(a1 + 140);
  if ( (_DWORD)v29 )
  {
    if ( *(_QWORD *)(a1 + 144) )
      LODWORD(v29) = MiReleaseWriteInProgressCharges(v10, (unsigned int)v29, 0LL, v21);
    else
      LODWORD(v29) = MiReleaseWriteInProgressCharges(v10, (unsigned int)v29, 1LL, v21);
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
      --*(_DWORD *)(v10 + 676);
    v30 = *(_QWORD **)(v10 + 896);
    if ( *v30 != v10 + 888 )
      __fastfail(3u);
    *(_QWORD *)a1 = v10 + 888;
    v19 = (struct _KEVENT *)(v10 + 904);
    *(_QWORD *)(a1 + 8) = v30;
    *v30 = a1;
    *(_QWORD *)(v10 + 896) = a1;
    LODWORD(v29) = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(v10 + 657) != 1 )
      v19 = 0LL;
    if ( (v29 & 0x20) != 0 )
    {
      --*(_DWORD *)(v10 + 1164);
      if ( !*(_BYTE *)(v10 + 658) )
        LODWORD(v29) = MiStoreCheckCompleteWriteBatch(v10, 0xFFFFFFFFLL);
    }
  }
  if ( v11 )
  {
    if ( v5 )
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v11);
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        LODWORD(PoolWithTag[1].List.Blink) = v12;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    v32 = (_QWORD *)MiDecrementModifiedWriteCount(v11, 0LL);
    if ( v32 )
      MiReleaseControlAreaWaiters(v32);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 608));
    v33 = *(void **)(a1 + 200);
    if ( v33 )
      ExFreePoolWithTag(v33, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v29 = v10 + 616;
      v34 = *(_QWORD **)(v10 + 624);
      if ( *v34 != v10 + 616 )
        __fastfail(3u);
      *(_QWORD *)a1 = v29;
      *(_QWORD *)(a1 + 8) = v34;
      *v34 = a1;
      *(_QWORD *)(v10 + 624) = a1;
      if ( *(_BYTE *)(v10 + 656) == 1 )
      {
        *(_BYTE *)(v10 + 656) = 0;
        LODWORD(v29) = KeSignalGate(v10 + 632, 1LL);
      }
    }
    else
    {
      LODWORD(v29) = MiFreeModWriterEntry(a1);
    }
  }
  if ( (v12 & 0x80000000) == 0LL )
  {
    if ( v11 )
      *(_BYTE *)(v10 + 1016) = 0;
    LODWORD(v29) = *(_DWORD *)(v38 + v10);
    if ( (_DWORD)v29 )
    {
      LODWORD(v29) = v29 - 1;
      *(_DWORD *)(v38 + v10) = v29;
    }
  }
  else if ( v45 )
  {
    if ( !v5 )
      *(_BYTE *)(v10 + 1016) = 1;
  }
  else
  {
    LODWORD(v29) = MiIsRetryIoStatus((unsigned int)v12, v44);
    if ( (_DWORD)v29 || (_DWORD)v12 == -1073741740 )
      *(_DWORD *)(v38 + v10) = 10;
  }
  if ( v19 )
    LODWORD(v29) = KeSetEvent(v19, 0, 0);
  return v29;
}
