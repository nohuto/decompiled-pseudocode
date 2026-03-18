/*
 * XREFs of MiWriteComplete @ 0x140014A50
 * Callers:
 *     MiStoreWriteModifiedCompleteApc @ 0x1400140B0 (MiStoreWriteModifiedCompleteApc.c)
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 * Callees:
 *     MiFreeModWriterEntry @ 0x140014FCC (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140015008 (MiReleaseWriteInProgressCharges.c)
 *     MiDecrementModifiedWriteCount @ 0x1400150EC (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x140015158 (MmIsWriteErrorFatal.c)
 *     MiIsRetryIoStatus @ 0x140015264 (MiIsRetryIoStatus.c)
 *     MI_PAGEFILE_WRITE @ 0x1400152A8 (MI_PAGEFILE_WRITE.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400153C0 (FsRtlReleaseFileForModWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140015578 (CcNotifyOfMappedWriteComplete.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x14017CF3C (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x14020AD08 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x14020E700 (MiRetardMdl.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

int __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rdi
  int v4; // esi
  unsigned int v5; // ebx
  int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // r13
  ULONG_PTR v11; // r15
  bool v12; // zf
  int v13; // eax
  __int64 v14; // r12
  struct _FILE_OBJECT *v15; // rax
  unsigned int v16; // r12d
  __int64 PageFilePte; // rax
  __int64 v18; // rdx
  __int64 updated; // rdi
  struct _MDL *v20; // r12
  unsigned __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 PteTimeStamp; // rax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  struct _KEVENT *v28; // rdi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  __int64 v30; // rax
  void *v31; // rcx
  _QWORD *v32; // rcx
  int v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  struct _FILE_OBJECT *v36; // [rsp+40h] [rbp-68h]
  struct _MDL *v37; // [rsp+48h] [rbp-60h]
  __int64 v38; // [rsp+50h] [rbp-58h] BYREF
  __int64 v39; // [rsp+58h] [rbp-50h]
  unsigned __int64 v40; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v41; // [rsp+B0h] [rbp+8h]
  int v42; // [rsp+B8h] [rbp+10h]
  int v44; // [rsp+C8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v4 = 0;
  v5 = 0;
  v44 = 0;
  if ( !v3 )
    v3 = (struct _MDL *)(a1 + 208);
  v8 = *(_DWORD *)(a1 + 136);
  v9 = *(_QWORD *)(a1 + 192);
  v42 = v8;
  if ( (v3->MdlFlags & 0x200) != 0 )
    MiRetardMdl(v3);
  if ( (v3->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v10 = *(_QWORD *)(a1 + 160);
  v11 = *a2;
  v34 = v11;
  v39 = v10;
  if ( v10 )
  {
    v35 = 1032LL;
  }
  else
  {
    v38 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v38, 5, 0, v11);
    v35 = 1028LL;
  }
  v12 = (v8 & 0xFFF) == 0;
  v13 = v8;
  v37 = v3 + 1;
  v14 = *(_QWORD *)(a1 + 168);
  v40 = (unsigned __int64)&v3[1] + 8 * !v12 + 8 * (v13 >> 12);
  if ( v14 )
  {
    v15 = *(struct _FILE_OBJECT **)(a1 + 152);
    v36 = v15;
    if ( (v14 & 1) == 0 )
    {
      CcNotifyOfMappedWriteComplete(
        v15->SectionObjectPointer,
        *(_QWORD *)(a1 + 176),
        (unsigned int)v42,
        (unsigned int)v11);
      v15 = v36;
    }
    FsRtlReleaseFileForModWrite(v15);
    MiDereferenceControlAreaFile(v10, v36);
    if ( (v11 & 0x80000000) != 0LL )
      goto LABEL_15;
  }
  if ( (v11 & 0x80000000) != 0LL )
  {
LABEL_15:
    v16 = *(_DWORD *)(a1 + 40);
    if ( !(unsigned int)MmIsWriteErrorFatal(v10 != 0, (v16 >> 1) & 1, (unsigned int)v11) )
      goto LABEL_22;
    if ( !v10 )
      KeBugCheckEx(0x7Au, 0x20uLL, v11, (ULONG_PTR)v3, 0LL);
    if ( (*(_DWORD *)(v10 + 56) & 0x10) != 0 )
      goto LABEL_23;
    if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v11, v42)
      && (v16 & 2) != 0
      && v40 > (unsigned __int64)&v3[1].Size )
    {
LABEL_22:
      v5 = 1;
    }
    else
    {
      v4 = 1;
      v44 = 1;
    }
LABEL_23:
    if ( v10 )
      *(_DWORD *)(v9 + 712) = v11;
    else
      *(_DWORD *)(v9 + 708) = v11;
  }
  if ( v4 )
    MiSetDeleteOnClose(v10, 1LL);
  PageFilePte = MiMakePageFilePte(0LL);
  v18 = *(_QWORD *)(a1 + 144);
  updated = PageFilePte;
  if ( v18 )
    updated = MiTransferSoftwarePte(PageFilePte, v18, *(_QWORD *)(a1 + 176) >> 12);
  v20 = v37;
  if ( (unsigned __int64)v37 < v40 )
  {
    v21 = v40;
    while ( v20->Next == (struct _MDL *)qword_14036CEC8 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
      {
        v22 = updated;
LABEL_48:
        MiReleasePageFileInfo(v9, v22, 0LL);
      }
LABEL_49:
      PteTimeStamp = MiGetPteTimeStamp(updated);
      v20 = (struct _MDL *)((char *)v20 + 8);
      updated = MiUpdatePageFileHighInPte(updated, PteTimeStamp + 1);
      if ( (unsigned __int64)v20 >= v21 )
      {
        v4 = v44;
        LODWORD(v11) = v34;
        v10 = v39;
        goto LABEL_51;
      }
    }
    v23 = 48 * (__int64)v20->Next - 0x58000000000LL;
    v41 = MiLockPageInline(v23);
    if ( (v5 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v23 + 34) & 0x10) == 0 || (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
        v5 &= ~2u;
      else
        v5 |= 2u;
    }
    v5 &= ~4u;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 && (v5 & 2) == 0 && (*(_QWORD *)(v23 + 24) & 0x4000000000000000LL) == 0 )
    {
      if ( *(_WORD *)(v23 + 32) <= 1u )
      {
        *(_BYTE *)(v23 + 34) = *(_BYTE *)(v23 + 34) & 0xF8 | 2;
        v5 |= 4u;
      }
      else
      {
        *(_BYTE *)(v23 + 34) |= 0x10u;
        v5 |= 2u;
      }
    }
    v24 = MiWriteCompletePfn(v23, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v41);
    if ( !v24 )
      goto LABEL_49;
    v22 = v24;
    goto LABEL_48;
  }
LABEL_51:
  LODWORD(v26) = *(_DWORD *)(a1 + 140);
  if ( (_DWORD)v26 )
  {
    if ( *(_QWORD *)(a1 + 144) )
      LODWORD(v26) = MiReleaseWriteInProgressCharges(v9, (unsigned int)v26, 0LL);
    else
      LODWORD(v26) = MiReleaseWriteInProgressCharges(v9, (unsigned int)v26, 1LL);
  }
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_61;
  if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
    --*(_DWORD *)(v9 + 724);
  v26 = v9 + 936;
  v27 = *(_QWORD **)(v9 + 944);
  if ( *v27 != v9 + 936 )
    __fastfail(3u);
  *(_QWORD *)a1 = v26;
  v28 = (struct _KEVENT *)(v9 + 952);
  *(_QWORD *)(a1 + 8) = v27;
  *v27 = a1;
  *(_QWORD *)(v9 + 944) = a1;
  if ( *(_BYTE *)(v9 + 705) != 1 )
LABEL_61:
    v28 = 0LL;
  if ( v10 )
  {
    if ( v4 )
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v10);
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        LODWORD(PoolWithTag[1].List.Blink) = v11;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    v30 = MiDecrementModifiedWriteCount(v10, 0LL);
    if ( v30 )
      MiReleaseControlAreaWaiters(v30);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 656));
    v31 = *(void **)(a1 + 200);
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v26 = v9 + 664;
      v32 = *(_QWORD **)(v9 + 672);
      if ( *v32 != v9 + 664 )
        __fastfail(3u);
      *(_QWORD *)a1 = v26;
      *(_QWORD *)(a1 + 8) = v32;
      *v32 = a1;
      *(_QWORD *)(v9 + 672) = a1;
      if ( *(_BYTE *)(v9 + 704) == 1 )
      {
        *(_BYTE *)(v9 + 704) = 0;
        LODWORD(v26) = KeSignalGate(v9 + 680, 1LL);
      }
    }
    else
    {
      LODWORD(v26) = MiFreeModWriterEntry(a1, 1LL);
    }
  }
  if ( (v11 & 0x80000000) == 0LL )
  {
    if ( v10 )
      *(_BYTE *)(v9 + 1064) = 0;
    LODWORD(v26) = *(_DWORD *)(v35 + v9);
    if ( (_DWORD)v26 )
    {
      LODWORD(v26) = v26 - 1;
      *(_DWORD *)(v35 + v9) = v26;
    }
  }
  else if ( a3 )
  {
    if ( !v4 )
      *(_BYTE *)(v9 + 1064) = 1;
  }
  else
  {
    LODWORD(v26) = MiIsRetryIoStatus((unsigned int)v11, v42);
    if ( (_DWORD)v26 || (_DWORD)v11 == -1073741740 )
      *(_DWORD *)(v35 + v9) = 10;
  }
  if ( v28 )
    LODWORD(v26) = KeSetEvent(v28, 0, 0);
  return v26;
}
