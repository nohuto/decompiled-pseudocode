/*
 * XREFs of MiGatherMappedPages @ 0x140133168
 * Callers:
 *     MiMappedPageWriter @ 0x140176F10 (MiMappedPageWriter.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     CcNotifyOfMappedWrite @ 0x140133730 (CcNotifyOfMappedWrite.c)
 *     MiBuildMappedCluster @ 0x140133CF8 (MiBuildMappedCluster.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1401346A0 (FsRtlAcquireFileForModWriteEx.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     FsRtlReleaseFileForModWrite @ 0x1401352E8 (FsRtlReleaseFileForModWrite.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiFlushFileOnlyMdl @ 0x14025DA0C (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  int v7; // ebp
  KIRQL v8; // r12
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned __int8 v12; // r13
  __int64 v13; // rbp
  int v14; // ecx
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // r13
  __int64 v21; // r8
  __int64 v22; // r9
  struct _FILE_OBJECT *v23; // r15
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned __int64 v28; // rax
  int v29; // edx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // r12
  unsigned int v34; // edx
  int v35; // eax
  NTSTATUS v36; // edi
  unsigned int v37; // eax
  int v38; // eax
  __int64 v39; // r8
  int v40; // edx
  unsigned __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v45; // di
  __int64 DemandZeroPte; // [rsp+60h] [rbp-68h] BYREF
  __int64 *PrototypePteDirect; // [rsp+68h] [rbp-60h]
  __int64 v49; // [rsp+70h] [rbp-58h]
  PSECTION_OBJECT_POINTERS v50; // [rsp+78h] [rbp-50h]
  LARGE_INTEGER v51[9]; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int8 v52; // [rsp+D8h] [rbp+10h]
  struct _MDL *v53; // [rsp+E8h] [rbp+20h]

  v5 = a2;
  if ( a2 < 0x10 )
    goto LABEL_6;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 3408);
  do
  {
    if ( *v6 != 0xFFFFFFFFFLL )
      break;
    ++v5;
    v6 += 5;
  }
  while ( v5 < 0x10 );
  if ( v5 != 16 )
  {
LABEL_6:
    v7 = 0;
    if ( *(_BYTE *)(a1 + 987) )
    {
      v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 980));
      if ( *(_BYTE *)(a1 + 989) )
      {
        *(_BYTE *)(a1 + 989) = 0;
        v7 = 1;
        *(_BYTE *)(a1 + 987) = 0;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 980));
      __writecr8(v8);
    }
    if ( *(_BYTE *)(a1 + 1016) == 1 )
      v7 = 1;
    if ( v7 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    v9 = 5LL * v5;
    while ( 1 )
    {
      v10 = *(_QWORD *)(a1 + 8 * v9 + 3408);
      if ( v10 == 0xFFFFFFFFFLL )
        return 0LL;
      v11 = 48 * v10 - 0x58000000000LL;
      v12 = MiLockPageInline(v11);
      v52 = v12;
      if ( v10 == *(_QWORD *)(a1 + 8 * v9 + 3408) )
      {
        PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(v11 + 16));
        v13 = *PrototypePteDirect;
        v14 = *(_DWORD *)(*PrototypePteDirect + 56);
        if ( (v14 & 0x20) != 0 )
        {
          MiUnlinkPageFromList(v11, 0LL);
          DemandZeroPte = MI_READ_PTE_LOCK_FREE(v11 + 16);
          v15 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&DemandZeroPte);
          if ( ((*(_QWORD *)(v11 + 40) >> 54) & 7) == 3 )
          {
            MiClearPfnImageVerified(v11, 28);
            if ( (MiFlags & 0x10000) != 0 && (v15 & 2) != 0 && (*(_DWORD *)(v13 + 92) & 0xC0000) != 0 )
              MiMarkPfnVerified(v11);
          }
          DemandZeroPte = MiMakeDemandZeroPte(v15);
          *(_QWORD *)(v11 + 16) = DemandZeroPte;
          if ( MiPteInShadowRange(v11 + 16) )
            MiWritePteShadow(v17, v16, v18);
          MiDereferenceControlAreaPfnList(v13, 0LL, v18, 3);
          MiInsertPageInList(v11, 8u);
          v12 = v52;
        }
        else
        {
          if ( (v14 & 8) == 0 )
          {
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 72));
            if ( (*(_DWORD *)(v13 + 56) & 8) == 0 )
            {
              v19 = *(_QWORD *)(v13 + 120);
              ++*(_DWORD *)(v13 + 76);
              v20 = 8 * v19;
              if ( v20 && _InterlockedIncrement64((volatile signed __int64 *)(v20 + 32)) <= 1 )
                __fastfail(0xEu);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 72));
              MiReferencePageForModifiedWrite(v11, 1, v21, v22);
              _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v52);
              v23 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v13);
              SectionObjectPointer = v23->SectionObjectPointer;
              v50 = SectionObjectPointer;
              if ( *(_BYTE *)(a1 + 987) )
                v25 = 0;
              else
                v25 = CcNotifyOfMappedWrite(SectionObjectPointer, 0LL, 0LL);
              v26 = MiBuildMappedCluster(v11, a3 + 208, v25);
              *(_QWORD *)(a3 + 200) = v26;
              v27 = v26;
              *(_QWORD *)(a3 + 160) = v13;
              v53 = (struct _MDL *)v26;
              v28 = MiStartingOffset(
                      PrototypePteDirect,
                      *(_QWORD *)(48LL * *(_QWORD *)(v26 + 48) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL,
                      0xFFFFFFFF);
              v29 = *(_DWORD *)(a3 + 40);
              v30 = v28;
              v51[0].QuadPart = v28;
              v31 = *(unsigned int *)(v27 + 40);
              *(_DWORD *)(a3 + 136) = v31;
              PrototypePteDirect = (__int64 *)(v31 >> 12);
              *(_DWORD *)(a3 + 140) = (v31 >> 12) - 1;
              v32 = *(unsigned int *)(v27 + 40);
              v33 = (_QWORD *)(a3 + 168);
              *(_QWORD *)(a3 + 168) = 0LL;
              v49 = v30 + v32;
              if ( (v23->DeviceObject->Characteristics & 0x10) != 0 )
                v34 = v29 | 2;
              else
                v34 = v29 & 0xFFFFFFFD;
              *(_DWORD *)(a3 + 40) = v34;
              v35 = *(_DWORD *)(v13 + 56);
              if ( (v35 & 4) != 0 )
              {
                MiDereferenceControlAreaFile(v13, (unsigned __int64)v23);
                v36 = -1073741740;
                v37 = 1;
                goto LABEL_62;
              }
              if ( (v35 & 0x10) != 0 )
              {
                MiDereferenceControlAreaFile(v13, (unsigned __int64)v23);
                v36 = -1073741672;
                v37 = 1;
                goto LABEL_62;
              }
              *(_QWORD *)(a3 + 152) = v23;
              if ( (int)FsRtlAcquireFileForModWriteEx(v23) < 0 )
              {
                v36 = -1073741740;
                MiDereferenceControlAreaFile(v13, (unsigned __int64)v23);
                *v33 = 0LL;
              }
              else
              {
                v38 = CcNotifyOfMappedWrite(v50, v30, v53->ByteCount);
                if ( !v38 )
                {
                  FsRtlReleaseFileForModWrite(v23);
                  MiDereferenceControlAreaFile(v13, (unsigned __int64)v23);
                  *v33 = 0LL;
                  v37 = 1;
                  v36 = -1073741740;
                  goto LABEL_62;
                }
                if ( v38 == 1 )
                  *v33 |= 1uLL;
                *(_QWORD *)(a3 + 176) = v30;
                v40 = *(_DWORD *)(a1 + 672);
                v41 = *(_QWORD *)(a1 + 7040);
                if ( v40 )
                {
                  v42 = v40 - 1;
                  if ( v41 >= 0x420 )
                    v42 = 0;
                  *(_DWORD *)(a1 + 672) = v42;
                  v43 = v41 < 0x420 ? 4 : 2;
                }
                else if ( v41 >= 0x120 )
                {
                  v43 = 2LL;
                }
                else
                {
                  v43 = 4LL;
                  *(_DWORD *)(a1 + 672) = v41 < 0xA0 ? 32 : 8;
                }
                __incgsdword(0x2EB4u);
                __addgsdword(0x2EB0u, (unsigned int)PrototypePteDirect);
                if ( (*(_DWORD *)(v13 + 56) & 0x40000000) != 0 )
                {
                  MiFlushFileOnlyMdl(v43, v53, v39, a3 + 16);
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  MiWriteComplete(a3, a3 + 16, 0LL);
                  __writecr8(CurrentIrql);
                  goto LABEL_63;
                }
                v36 = IoAsynchronousPageWrite(
                        v23,
                        v53,
                        v51,
                        (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
                        (void *)a3,
                        v43,
                        0,
                        0,
                        v20,
                        (struct _IO_STATUS_BLOCK *)(a3 + 16),
                        (IRP **)(a3 + 32));
              }
              if ( (v36 & 0xC0000000) == 0xC0000000 )
              {
                v37 = 0;
LABEL_62:
                *(_QWORD *)(a3 + 24) = 0LL;
                *(_DWORD *)(a3 + 16) = v36;
                v45 = KeGetCurrentIrql();
                __writecr8(1uLL);
                MiWriteComplete(a3, a3 + 16, v37);
                __writecr8(v45);
              }
LABEL_63:
              if ( v20 )
                IoDiskIoAttributionDereference(v20);
              return 1LL;
            }
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 72));
          }
          MiUnlinkPageFromList(v11, 0LL);
          MiInsertPageInList(v11, 0x10u);
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
    }
  }
  return 0LL;
}
