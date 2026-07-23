/*
 * XREFs of MiCreateNewSection @ 0x1404933A8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiMakeImageReadOnly @ 0x140028ABC (MiMakeImageReadOnly.c)
 *     MiSectionCreated @ 0x14005E604 (MiSectionCreated.c)
 *     MiReturnPfnReferenceCount @ 0x14005EAC8 (MiReturnPfnReferenceCount.c)
 *     MiReleaseImageSection @ 0x14005EB60 (MiReleaseImageSection.c)
 *     IoSetTopLevelIrp @ 0x140096520 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiGetThreadPartition @ 0x14012BA50 (MiGetThreadPartition.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x140456BE0 (SeCompareSigningLevelsForAuditableProcess.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MiEnablePartitionMappedWrites @ 0x1404938EC (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x140493A2C (MiCreateDataFileMap.c)
 *     MiParseComImage @ 0x140494F54 (MiParseComImage.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 *     SeGetImageRequiredSigningLevel @ 0x140546BA4 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406849D8 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, __int64 *a2)
{
  unsigned int v3; // r12d
  struct _FILE_OBJECT *v4; // r13
  signed __int64 *v5; // r14
  ULONG_PTR *ThreadPartition; // rdi
  int v7; // esi
  int v8; // r15d
  __int64 v9; // rsi
  NTSTATUS DataFileMap; // eax
  int DirectImageOriginalBase; // edi
  __int64 v12; // r12
  signed __int64 v13; // rax
  bool v14; // zf
  ULONG_PTR v15; // r14
  __int64 *v16; // rax
  signed __int32 v17; // ecx
  int v18; // r15d
  signed __int32 v20; // edx
  int v21; // ecx
  int v22; // edi
  char v23; // dl
  signed __int32 v24; // ecx
  int v25; // r8d
  signed __int32 v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  char v30; // al
  char v31; // al
  __int64 v32; // rdx
  char v33; // [rsp+20h] [rbp-B9h]
  int v34; // [rsp+30h] [rbp-A9h]
  int v35; // [rsp+38h] [rbp-A1h]
  char v36; // [rsp+40h] [rbp-99h]
  char v37; // [rsp+41h] [rbp-98h] BYREF
  _BYTE v38[14]; // [rsp+42h] [rbp-97h] BYREF
  __int64 v39; // [rsp+50h] [rbp-89h]
  __int64 v40; // [rsp+58h] [rbp-81h] BYREF
  __int64 *v41; // [rsp+60h] [rbp-79h]
  __int64 v42; // [rsp+68h] [rbp-71h] BYREF
  __int64 v43; // [rsp+70h] [rbp-69h]
  __int64 v44; // [rsp+80h] [rbp-59h] BYREF
  int v45; // [rsp+88h] [rbp-51h]
  int v46; // [rsp+D8h] [rbp-1h]
  int v47; // [rsp+DCh] [rbp+3h]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(signed __int64 **)(a1 + 152);
  v36 = *(_BYTE *)(a1 + 24);
  v41 = a2;
  *(_QWORD *)&v38[2] = v3;
  v37 = 0;
  if ( (_bittest((const signed __int32 *)a1, 0x16u) & !_bittest((const signed __int32 *)a1, 0x10u)) != 0 )
    ThreadPartition = (ULONG_PTR *)MiGetThreadPartition((__int64)KeGetCurrentThread());
  else
    ThreadPartition = &MiSystemPartition;
  v7 = MiEnablePartitionMappedWrites(ThreadPartition);
  if ( v7 < 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 176));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v7;
  }
  else
  {
    v8 = v3 & 0x1000000;
    LODWORD(v39) = v3 & 0x1000000;
    if ( (v3 & 0x1000000) != 0 )
    {
      DataFileMap = MiCreateImageFileMap(
                      v4,
                      ThreadPartition,
                      *(_DWORD *)(a1 + 172),
                      *(_DWORD *)a1,
                      (unsigned int **)&v42,
                      &v40,
                      &v44,
                      (PVOID *)&v38[6]);
      v9 = v40;
    }
    else
    {
      v35 = *(_DWORD *)a1;
      v9 = 0LL;
      v34 = *(_DWORD *)(a1 + 172);
      v33 = *(_DWORD *)(a1 + 28);
      v40 = 0LL;
      DataFileMap = MiCreateDataFileMap(v4, v33, v3, v34, v35);
      v45 = 0;
    }
    DirectImageOriginalBase = DataFileMap;
    if ( DataFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 176));
        FsRtlReleaseFile(v4);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)DirectImageOriginalBase;
    }
    v12 = v42;
    *v41 = v42;
    v13 = *v5;
    if ( !*v5 )
    {
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), -1LL, -1LL);
      v9 = v40;
      v12 = v42;
    }
    v14 = (*(_DWORD *)a1 & 0x200000) == 0;
    *(_QWORD *)(a1 + 128) = v13;
    v15 = *(_QWORD *)v12;
    if ( !v14 )
      *(_BYTE *)(v15 + 62) |= 1u;
    if ( (*(_DWORD *)a1 & 0x2000) != 0 && (v4->DeviceObject->Characteristics & 0x10) == 0 && (!v8 || (v45 & 0xFFF) == 0) )
      *(_DWORD *)(v15 + 56) |= 0x20000000u;
    if ( (*(_DWORD *)a1 & 0x4000) != 0 )
      *(_DWORD *)(v15 + 56) |= 0x20000u;
    if ( (((*(_DWORD *)a1 & 0x10000) != 0) & !_bittest((const signed __int32 *)&v38[2], 0x18u)) != 0 )
      *(_DWORD *)(v15 + 56) |= 0x40000000u;
    v16 = (__int64 *)MiSectionCreated((__int64)v4, v15, v9);
    v17 = *(_DWORD *)a1;
    v18 = 2;
    v41 = v16;
    if ( (v17 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 176));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
      v16 = v41;
    }
    if ( !(_DWORD)v39 )
      goto LABEL_19;
    v39 = *(_QWORD *)(v12 + 56);
    DirectImageOriginalBase = MiParseComImage(v15, &v44, &v37);
    if ( DirectImageOriginalBase < 0 )
      goto LABEL_76;
    if ( !v46 && !v47 && !*(_BYTE *)(v39 + 50) )
      *(_BYTE *)(v12 + 15) |= 1u;
    if ( (*(_DWORD *)(v15 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x20000) != 0 )
      {
        dword_14036BFD8 = 80;
        DirectImageOriginalBase = -1073740749;
        goto LABEL_76;
      }
      DirectImageOriginalBase = MiSetPagesModified(v15, *(_DWORD *)(a1 + 168));
      if ( DirectImageOriginalBase < 0 )
        goto LABEL_76;
    }
    v20 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v21 = 4;
    }
    else if ( (v20 & 0x20) != 0 )
    {
      v21 = 1;
    }
    else if ( (v20 & 0x10) != 0 )
    {
      v21 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v21 = 0;
    }
    v22 = v21 | 0x10;
    if ( (v20 & 0x800) == 0 )
      v22 = v21;
    if ( (v20 & 0x400) == 0 && (v20 & 0x8000) == 0 )
    {
      v23 = v36;
      goto LABEL_38;
    }
    v23 = v36;
    if ( (*(_DWORD *)a1 & 0x810) != 0 || !v36 )
      goto LABEL_38;
    *(_DWORD *)&v38[2] = SeGetImageRequiredSigningLevel(v4, (__int64)v38);
    if ( *(int *)&v38[2] >= 0 )
    {
      v23 = v38[0];
      v36 = v38[0];
      *(_BYTE *)(a1 + 24) = v38[0];
LABEL_38:
      v24 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x20000) != 0 )
      {
        v30 = v23;
        v22 |= 0x40000000u;
        if ( !v23 )
          v30 = 4;
        v23 = v30;
        v36 = v30;
      }
      v25 = v22 | 0x20000000;
      if ( (v24 & 0x100000) == 0 )
        v25 = v22;
      LODWORD(v41) = v25;
      if ( (MiFlags & 0x40000) != 0 )
      {
        v31 = v23;
        *(_DWORD *)a1 = v24 | 0x8000;
        if ( !v23 )
          v31 = 1;
        v23 = v31;
        v36 = v31;
      }
      v26 = *(_DWORD *)a1;
      LODWORD(v39) = (*(_DWORD *)a1 & 0x400) != 0 && v23 || (v26 & 0x8000) != 0 || *(char *)(v39 + 46) < 0;
      if ( (v26 & 0x40) == 0 )
        v18 = (v26 & 0x20) != 0;
      *(_DWORD *)&v38[2] = 0;
      if ( (*(_DWORD *)(v15 + 56) & 0x40000000) != 0 )
      {
        DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v4);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_76;
        v27 = v43;
      }
      else
      {
        v27 = -1LL;
        v43 = -1LL;
      }
      if ( (_DWORD)v39 != 1 )
        goto LABEL_52;
      if ( v27 != -1 )
      {
        DirectImageOriginalBase = MiRelocateImage(v12, (unsigned int)&v44, *(_DWORD *)&v38[6], v18, v27, 0);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_76;
        *(_DWORD *)&v38[2] = 1;
        if ( v37 == 1 )
          MiMakeImageReadOnly(v15, v32);
      }
      DirectImageOriginalBase = MiValidateSectionCreate(
                                  (ULONG_PTR)v4,
                                  v15,
                                  *(_DWORD *)(a1 + 168),
                                  *(_QWORD *)(a1 + 160),
                                  (int)v41,
                                  v36);
      if ( DirectImageOriginalBase >= 0 )
      {
        LODWORD(v12) = v42;
        v29 = SeCompareSigningLevelsForAuditableProcess(
                (__int64)KeGetCurrentThread()->ApcState.Process,
                (*(_DWORD *)a1 >> 11) & 1,
                *(_BYTE *)(v42 + 15) >> 4,
                v36);
        v9 = v40;
        if ( !v29 )
          DirectImageOriginalBase = -1073740760;
        if ( DirectImageOriginalBase >= 0 )
        {
          if ( *(_DWORD *)&v38[2] )
          {
LABEL_55:
            MiReturnPfnReferenceCount(v9);
            if ( DirectImageOriginalBase < 0 )
              return (unsigned int)DirectImageOriginalBase;
            v16 = (__int64 *)MiReleaseImageSection((__int64)v4, v15);
LABEL_19:
            MiReleaseControlAreaWaiters(v16);
            return (unsigned int)DirectImageOriginalBase;
          }
          v27 = v43;
LABEL_52:
          DirectImageOriginalBase = MiRelocateImage(v12, (unsigned int)&v44, *(_DWORD *)&v38[6], v18, v27, 0);
          if ( DirectImageOriginalBase >= 0 && v37 == 1 )
            MiMakeImageReadOnly(v15, v28);
          goto LABEL_55;
        }
      }
LABEL_76:
      MiReturnPfnReferenceCount(v9);
      return (unsigned int)DirectImageOriginalBase;
    }
    MiReturnPfnReferenceCount(v9);
    return *(unsigned int *)&v38[2];
  }
}
