/*
 * XREFs of MiGatherMappedPages @ 0x1400EEBD4
 * Callers:
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiBuildMappedCluster @ 0x1400EE1F0 (MiBuildMappedCluster.c)
 *     CcNotifyOfMappedWrite @ 0x1400EF1C8 (CcNotifyOfMappedWrite.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400EF610 (FsRtlAcquireFileForModWriteEx.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400EFF28 (FsRtlReleaseFileForModWrite.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiFlushFileOnlyMdl @ 0x140222DFC (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int8 v10; // r12
  __int64 *v11; // r15
  __int64 v12; // rsi
  int v13; // ecx
  __int64 PteShadow; // rax
  unsigned int v15; // r12d
  __int64 DemandZeroPte; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v20; // r13
  __int64 v21; // r13
  struct _FILE_OBJECT *v22; // r15
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  int v24; // eax
  char *v25; // r12
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // r12
  int v30; // eax
  int v31; // edi
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  int v37; // eax
  int v38; // edx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v40; // di
  __int64 v41; // [rsp+60h] [rbp-68h] BYREF
  __int64 *PrototypePteDirect; // [rsp+68h] [rbp-60h]
  __int64 v43; // [rsp+70h] [rbp-58h]
  PSECTION_OBJECT_POINTERS v44; // [rsp+78h] [rbp-50h]
  unsigned __int64 v45; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int8 v46; // [rsp+D8h] [rbp+10h]
  char *v47; // [rsp+E8h] [rbp+20h]

  v5 = a2;
  if ( a2 >= 0x10 )
  {
    v5 = 0;
    v6 = (_QWORD *)(a1 + 3344);
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
  if ( *(_DWORD *)(a1 + 984) || *(_BYTE *)(a1 + 1016) == 1 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  v7 = 5LL * v5;
  v8 = *(_QWORD *)(a1 + 40LL * v5 + 3344);
  if ( v8 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    v46 = v10;
    if ( v8 == *(_QWORD *)(a1 + 8 * v7 + 3344) )
      break;
LABEL_28:
    v18 = v10;
LABEL_29:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v18);
    v8 = *(_QWORD *)(a1 + 8 * v7 + 3344);
    if ( v8 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  v11 = (__int64 *)(v9 + 16);
  PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(v9 + 16));
  v12 = *PrototypePteDirect;
  v13 = *(_DWORD *)(*PrototypePteDirect + 56);
  if ( (v13 & 0x20) != 0 )
  {
    MiUnlinkPageFromList(v9, 0LL);
    PteShadow = *v11;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v9 + 16, *v11);
    v41 = PteShadow;
    v15 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v41);
    if ( ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v9, 28);
      if ( (MiFlags & 0x10000) != 0 && (v15 & 2) != 0 && (*(_DWORD *)(v12 + 92) & 0xC0000) != 0 )
        MiMarkPfnVerified(v9, 32 * ((((unsigned int)MiFlags >> 17) & 1) == 0) + 6);
    }
    DemandZeroPte = MiMakeDemandZeroPte(v15);
    v41 = DemandZeroPte;
    *v11 = DemandZeroPte;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v9 + 16, DemandZeroPte);
    MiDereferenceControlAreaPfnList(v12, 0LL, v17, 3LL);
    MiInsertPageInList(v9, 8);
    v18 = v46;
    goto LABEL_29;
  }
  if ( (v13 & 8) != 0 )
  {
LABEL_27:
    MiUnlinkPageFromList(v9, 0LL);
    MiInsertPageInList(v9, 16);
    goto LABEL_28;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( (*(_DWORD *)(v12 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    goto LABEL_27;
  }
  v20 = *(_QWORD *)(v12 + 120);
  ++*(_DWORD *)(v12 + 76);
  v21 = 8 * v20;
  if ( v21 && _InterlockedIncrement64((volatile signed __int64 *)(v21 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  MiReferencePageForModifiedWrite(v9);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  v22 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v12);
  SectionObjectPointer = v22->SectionObjectPointer;
  v44 = SectionObjectPointer;
  if ( *(_DWORD *)(a1 + 984) )
    v24 = 0;
  else
    v24 = CcNotifyOfMappedWrite(SectionObjectPointer, 0LL, 0LL);
  v25 = MiBuildMappedCluster((_QWORD *)v9, (char *)(a3 + 208), v24);
  v47 = v25;
  if ( v25 != (char *)(a3 + 208) )
    *(_QWORD *)(a3 + 200) = v25;
  *(_QWORD *)(a3 + 160) = v12;
  v26 = MiStartingOffset(
          PrototypePteDirect,
          *(_QWORD *)(48LL * *((_QWORD *)v25 + 6) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL,
          0xFFFFFFFF);
  v45 = v26;
  v27 = *((unsigned int *)v25 + 10);
  *(_DWORD *)(a3 + 136) = v27;
  PrototypePteDirect = (__int64 *)(v27 >> 12);
  *(_DWORD *)(a3 + 140) = (v27 >> 12) - 1;
  v28 = *((unsigned int *)v25 + 10);
  v29 = (_QWORD *)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v43 = v26 + v28;
  if ( (v22->DeviceObject->Characteristics & 0x10) != 0 )
    *(_DWORD *)(a3 + 40) |= 2u;
  else
    *(_DWORD *)(a3 + 40) &= ~2u;
  v30 = *(_DWORD *)(v12 + 56);
  if ( (v30 & 4) != 0 )
  {
    MiDereferenceControlAreaFile(v12, (unsigned __int64)v22);
    v31 = -1073741740;
    v32 = 1;
    goto LABEL_65;
  }
  if ( (v30 & 0x10) != 0 )
  {
    MiDereferenceControlAreaFile(v12, (unsigned __int64)v22);
    v31 = -1073741672;
    v32 = 1;
    goto LABEL_65;
  }
  *(_QWORD *)(a3 + 152) = v22;
  if ( (int)FsRtlAcquireFileForModWriteEx(v22) < 0 )
  {
    v31 = -1073741740;
    MiDereferenceControlAreaFile(v12, (unsigned __int64)v22);
    *v29 = 0LL;
  }
  else
  {
    v33 = CcNotifyOfMappedWrite(v44, v26, *((unsigned int *)v47 + 10));
    if ( !v33 )
    {
      FsRtlReleaseFileForModWrite(v22);
      MiDereferenceControlAreaFile(v12, (unsigned __int64)v22);
      v32 = 1;
      *v29 = 0LL;
      v31 = -1073741740;
      goto LABEL_65;
    }
    if ( v33 == 1 )
      *v29 |= 1uLL;
    *(_QWORD *)(a3 + 176) = v26;
    v35 = *(unsigned int *)(a1 + 672);
    v36 = *(_QWORD *)(a1 + 5952);
    if ( (_DWORD)v35 )
    {
      if ( v36 < 0x420 )
      {
        v37 = v35 - 1;
        goto LABEL_54;
      }
      *(_DWORD *)(a1 + 672) = 0;
LABEL_56:
      v38 = 2;
    }
    else
    {
      if ( v36 >= 0x120 )
        goto LABEL_56;
      v37 = v36 < 0xA0 ? 32 : 8;
LABEL_54:
      *(_DWORD *)(a1 + 672) = v37;
      v38 = 4;
    }
    __incgsdword(0x2EB4u);
    __addgsdword(0x2EB0u, (unsigned int)PrototypePteDirect);
    if ( (*(_DWORD *)(v12 + 56) & 0x40000000) != 0 )
    {
      MiFlushFileOnlyMdl(v35, v47, v34, a3 + 16);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(a3, a3 + 16, 0LL);
      __writecr8(CurrentIrql);
      goto LABEL_66;
    }
    v31 = IoAsynchronousPageWrite(
            (_DWORD)v22,
            (_DWORD)v47,
            (unsigned int)&v45,
            (unsigned int)MiWriteComplete,
            a3,
            v38,
            0,
            0,
            v21,
            a3 + 16,
            a3 + 32);
  }
  if ( (v31 & 0xC0000000) == 0xC0000000 )
  {
    v32 = 0;
LABEL_65:
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_DWORD *)(a3 + 16) = v31;
    v40 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a3, a3 + 16, v32);
    __writecr8(v40);
  }
LABEL_66:
  if ( v21 )
    IoDiskIoAttributionDereference(v21);
  return 1LL;
}
