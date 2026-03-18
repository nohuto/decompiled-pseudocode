/*
 * XREFs of MiGatherMappedPages @ 0x1400AFB14
 * Callers:
 *     MiMappedPageWriter @ 0x14015DC00 (MiMappedPageWriter.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400153C0 (FsRtlReleaseFileForModWrite.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiBuildMappedCluster @ 0x140020978 (MiBuildMappedCluster.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     CcNotifyOfMappedWrite @ 0x1400B00A8 (CcNotifyOfMappedWrite.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiFlushFileOnlyMdl @ 0x140218B04 (MiFlushFileOnlyMdl.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r12
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v22; // r13
  __int64 v23; // r13
  struct _FILE_OBJECT *v24; // r15
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  int v26; // eax
  char *v27; // r12
  LARGE_INTEGER v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  struct _ERESOURCE **v31; // r12
  int v32; // eax
  NTSTATUS v33; // edi
  int v34; // eax
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  int v39; // eax
  int v40; // edx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v42; // di
  __int64 DemandZeroPte; // [rsp+60h] [rbp-68h] BYREF
  __int64 PrototypePteDirect; // [rsp+68h] [rbp-60h]
  LONGLONG v45; // [rsp+70h] [rbp-58h] BYREF
  PSECTION_OBJECT_POINTERS v46; // [rsp+78h] [rbp-50h]
  LARGE_INTEGER v47[9]; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp+10h]
  struct _MDL *v49; // [rsp+E8h] [rbp+20h]

  v5 = a2;
  if ( a2 >= 0x10 )
  {
    v5 = 0;
    v6 = (_QWORD *)(a1 + 3216);
    do
    {
      if ( *v6 != 0xFFFFFFFFFLL )
        break;
      ++v5;
      v6 += 5;
    }
    while ( v5 < 0x10 );
    if ( v5 == 16 )
      return 0LL;
  }
  if ( *(_DWORD *)(a1 + 1032) || *(_BYTE *)(a1 + 1064) == 1 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  v7 = 5LL * v5;
  v8 = *(_QWORD *)(a1 + 40LL * v5 + 3216);
  if ( v8 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v9 = 48 * v8 - 0x58000000000LL;
    v13 = MiLockPageInline(v9);
    if ( v8 == *(_QWORD *)(a1 + 8 * v7 + 3216) )
      break;
LABEL_26:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v13);
    v8 = *(_QWORD *)(a1 + 8 * v7 + 3216);
    if ( v8 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v9 + 16), v10, v11, v12);
  v14 = *(_QWORD *)PrototypePteDirect;
  v15 = *(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL);
  if ( (v15 & 0x20) != 0 )
  {
    MiUnlinkPageFromList(v9);
    DemandZeroPte = MI_READ_PTE_LOCK_FREE(v9 + 16);
    v48 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&DemandZeroPte);
    if ( ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v9, 28LL, v16);
      v17 = v48;
      if ( (MiFlags & 0x10000) == 0 || (v48 & 2) == 0 || (*(_DWORD *)(v14 + 92) & 0xC0000) == 0 )
      {
LABEL_18:
        DemandZeroPte = MiMakeDemandZeroPte(v17);
        *(_QWORD *)(v9 + 16) = DemandZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v9 + 16) )
          MiWritePteShadow(v18);
        MiDereferenceControlAreaPfnList(v14, 0LL, v19, 3);
        v20 = 8LL;
        goto LABEL_25;
      }
      MiMarkPfnVerified(v9, ~(unsigned __int8)((unsigned int)MiFlags >> 12) & 0x20 | 6);
    }
    v17 = v48;
    goto LABEL_18;
  }
  if ( (v15 & 8) != 0 )
  {
LABEL_24:
    MiUnlinkPageFromList(v9);
    v20 = 16LL;
LABEL_25:
    MiInsertPageInList(v9, v20);
    goto LABEL_26;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  if ( (*(_DWORD *)(v14 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
    goto LABEL_24;
  }
  v22 = *(_QWORD *)(v14 + 120);
  ++*(_DWORD *)(v14 + 76);
  v23 = 8 * v22;
  if ( v23 && _InterlockedIncrement64((volatile signed __int64 *)(v23 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  MiReferencePageForModifiedWrite(v9);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v13);
  v24 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  SectionObjectPointer = v24->SectionObjectPointer;
  v46 = SectionObjectPointer;
  if ( *(_DWORD *)(a1 + 1032) )
    v26 = 0;
  else
    v26 = CcNotifyOfMappedWrite(SectionObjectPointer, 0LL, 0LL);
  v27 = MiBuildMappedCluster((_QWORD *)v9, (char *)(a3 + 208), v26);
  v49 = (struct _MDL *)v27;
  if ( v27 != (char *)(a3 + 208) )
    *(_QWORD *)(a3 + 200) = v27;
  *(_QWORD *)(a3 + 160) = v14;
  v28.QuadPart = MiStartingOffset(
                   PrototypePteDirect,
                   *(_QWORD *)(48LL * *((_QWORD *)v27 + 6) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL,
                   0xFFFFFFFFLL);
  v47[0] = v28;
  v29 = *((unsigned int *)v27 + 10);
  *(_DWORD *)(a3 + 136) = v29;
  PrototypePteDirect = v29 >> 12;
  *(_DWORD *)(a3 + 140) = (v29 >> 12) - 1;
  v30 = *((unsigned int *)v27 + 10);
  v31 = (struct _ERESOURCE **)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v45 = v28.QuadPart + v30;
  if ( (v24->DeviceObject->Characteristics & 0x10) != 0 )
    *(_DWORD *)(a3 + 40) |= 2u;
  else
    *(_DWORD *)(a3 + 40) &= ~2u;
  v32 = *(_DWORD *)(v14 + 56);
  if ( (v32 & 4) != 0 )
  {
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v24);
    v33 = -1073741740;
    v34 = 1;
    goto LABEL_62;
  }
  if ( (v32 & 0x10) != 0 )
  {
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v24);
    v33 = -1073741672;
    v34 = 1;
    goto LABEL_62;
  }
  *(_QWORD *)(a3 + 152) = v24;
  if ( (int)FsRtlAcquireFileForModWriteEx(v24, &v45, (struct _ERESOURCE **)(a3 + 168)) < 0 )
  {
    v33 = -1073741740;
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v24);
    *v31 = 0LL;
  }
  else
  {
    v35 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CcNotifyOfMappedWrite)(
            v46,
            (LARGE_INTEGER)v28.QuadPart,
            v49->ByteCount);
    if ( !v35 )
    {
      FsRtlReleaseFileForModWrite(v24, *v31);
      MiDereferenceControlAreaFile(v14, (unsigned __int64)v24);
      v34 = 1;
      *v31 = 0LL;
      v33 = -1073741740;
      goto LABEL_62;
    }
    if ( v35 == 1 )
      *v31 = (struct _ERESOURCE *)((unsigned __int64)*v31 | 1);
    *(LARGE_INTEGER *)(a3 + 176) = v28;
    v37 = *(unsigned int *)(a1 + 720);
    v38 = *(_QWORD *)(a1 + 5760);
    if ( (_DWORD)v37 )
    {
      if ( v38 < 0x420 )
      {
        v39 = v37 - 1;
        goto LABEL_51;
      }
      *(_DWORD *)(a1 + 720) = 0;
LABEL_53:
      v40 = 2;
    }
    else
    {
      if ( v38 >= 0x120 )
        goto LABEL_53;
      v39 = v38 < 0xA0 ? 32 : 8;
LABEL_51:
      *(_DWORD *)(a1 + 720) = v39;
      v40 = 4;
    }
    __incgsdword(0x2EB4u);
    __addgsdword(0x2EB0u, PrototypePteDirect);
    if ( (*(_DWORD *)(v14 + 56) & 0x40000000) != 0 )
    {
      MiFlushFileOnlyMdl(v37, v49, v36, a3 + 16);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(a3, (int *)(a3 + 16), 0);
      __writecr8(CurrentIrql);
      goto LABEL_63;
    }
    v33 = IoAsynchronousPageWrite(
            v24,
            v49,
            v47,
            (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
            (void *)a3,
            v40,
            0,
            0,
            v23,
            (struct _IO_STATUS_BLOCK *)(a3 + 16),
            (IRP **)(a3 + 32));
  }
  if ( (v33 & 0xC0000000) == 0xC0000000 )
  {
    v34 = 0;
LABEL_62:
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_DWORD *)(a3 + 16) = v33;
    v42 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a3, (int *)(a3 + 16), v34);
    __writecr8(v42);
  }
LABEL_63:
  if ( v23 )
    IoDiskIoAttributionDereference(v23);
  return 1LL;
}
