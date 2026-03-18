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
  int v3; // r12d
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
  int v21; // r8d
  int v22; // ecx
  int v23; // edi
  char v24; // dl
  signed __int32 v25; // ecx
  int v26; // r8d
  signed __int32 v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  char v31; // al
  char v32; // al
  __int64 v33; // rdx
  char v34; // [rsp+20h] [rbp-B9h]
  int v35; // [rsp+30h] [rbp-A9h]
  int v36; // [rsp+38h] [rbp-A1h]
  char v37; // [rsp+40h] [rbp-99h]
  char v38; // [rsp+41h] [rbp-98h] BYREF
  char v39[2]; // [rsp+42h] [rbp-97h] BYREF
  unsigned int ImageRequiredSigningLevel; // [rsp+44h] [rbp-95h] BYREF
  __int64 v41; // [rsp+48h] [rbp-91h] BYREF
  __int64 v42; // [rsp+50h] [rbp-89h]
  __int64 v43; // [rsp+58h] [rbp-81h] BYREF
  __int64 *v44; // [rsp+60h] [rbp-79h]
  __int64 v45; // [rsp+68h] [rbp-71h] BYREF
  __int64 v46; // [rsp+70h] [rbp-69h]
  __int64 v47; // [rsp+80h] [rbp-59h] BYREF
  int v48; // [rsp+88h] [rbp-51h]
  int v49; // [rsp+D8h] [rbp-1h]
  int v50; // [rsp+DCh] [rbp+3h]

  LODWORD(v41) = 0;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(signed __int64 **)(a1 + 152);
  v37 = *(_BYTE *)(a1 + 24);
  v44 = a2;
  ImageRequiredSigningLevel = v3;
  v38 = 0;
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
    LODWORD(v42) = v3 & 0x1000000;
    if ( (v3 & 0x1000000) != 0 )
    {
      DataFileMap = MiCreateImageFileMap(
                      v4,
                      ThreadPartition,
                      *(_DWORD *)(a1 + 172),
                      *(_DWORD *)a1,
                      (unsigned int **)&v45,
                      &v43,
                      &v47,
                      (PVOID *)&v41);
      v9 = v43;
    }
    else
    {
      v36 = *(_DWORD *)a1;
      v9 = 0LL;
      v35 = *(_DWORD *)(a1 + 172);
      v34 = *(_DWORD *)(a1 + 28);
      v43 = 0LL;
      DataFileMap = MiCreateDataFileMap(v4, v34, v3, v35, v36);
      v48 = 0;
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
    v12 = v45;
    *v44 = v45;
    v13 = *v5;
    if ( !*v5 )
    {
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), -1LL, -1LL);
      v9 = v43;
      v12 = v45;
    }
    v14 = (*(_DWORD *)a1 & 0x200000) == 0;
    *(_QWORD *)(a1 + 128) = v13;
    v15 = *(_QWORD *)v12;
    if ( !v14 )
      *(_BYTE *)(v15 + 62) |= 1u;
    if ( (*(_DWORD *)a1 & 0x2000) != 0 && (v4->DeviceObject->Characteristics & 0x10) == 0 && (!v8 || (v48 & 0xFFF) == 0) )
      *(_DWORD *)(v15 + 56) |= 0x20000000u;
    if ( (*(_DWORD *)a1 & 0x4000) != 0 )
      *(_DWORD *)(v15 + 56) |= 0x20000u;
    if ( (((*(_DWORD *)a1 & 0x10000) != 0) & !_bittest((const signed __int32 *)&ImageRequiredSigningLevel, 0x18u)) != 0 )
      *(_DWORD *)(v15 + 56) |= 0x40000000u;
    v16 = (__int64 *)MiSectionCreated((__int64)v4, v15, v9);
    v17 = *(_DWORD *)a1;
    v18 = 2;
    v44 = v16;
    if ( (v17 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 176));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
      v16 = v44;
    }
    if ( !(_DWORD)v42 )
      goto LABEL_19;
    v42 = *(_QWORD *)(v12 + 56);
    DirectImageOriginalBase = MiParseComImage(v15, &v47, &v38);
    if ( DirectImageOriginalBase < 0 )
      goto LABEL_76;
    if ( !v49 && !v50 && !*(_BYTE *)(v42 + 50) )
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
    v21 = 4;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v22 = 4;
    }
    else if ( (v20 & 0x20) != 0 )
    {
      v22 = 1;
    }
    else if ( (v20 & 0x10) != 0 )
    {
      v22 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v22 = 0;
    }
    v23 = v22 | 0x10;
    if ( (v20 & 0x800) == 0 )
      v23 = v22;
    if ( (v20 & 0x400) == 0 && (v20 & 0x8000) == 0 )
    {
      v24 = v37;
      goto LABEL_38;
    }
    v24 = v37;
    if ( (*(_DWORD *)a1 & 0x810) != 0 || !v37 )
      goto LABEL_38;
    LOBYTE(v21) = v37;
    ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)v4, v23, v21, 0, (__int64)v39);
    if ( (ImageRequiredSigningLevel & 0x80000000) == 0 )
    {
      v24 = v39[0];
      v37 = v39[0];
      *(_BYTE *)(a1 + 24) = v39[0];
LABEL_38:
      v25 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x20000) != 0 )
      {
        v31 = v24;
        v23 |= 0x40000000u;
        if ( !v24 )
          v31 = 4;
        v24 = v31;
        v37 = v31;
      }
      v26 = v23 | 0x20000000;
      if ( (v25 & 0x100000) == 0 )
        v26 = v23;
      LODWORD(v44) = v26;
      if ( (MiFlags & 0x40000) != 0 )
      {
        v32 = v24;
        *(_DWORD *)a1 = v25 | 0x8000;
        if ( !v24 )
          v32 = 1;
        v24 = v32;
        v37 = v32;
      }
      v27 = *(_DWORD *)a1;
      LODWORD(v42) = (*(_DWORD *)a1 & 0x400) != 0 && v24 || (v27 & 0x8000) != 0 || *(char *)(v42 + 46) < 0;
      if ( (v27 & 0x40) == 0 )
        v18 = (v27 & 0x20) != 0;
      ImageRequiredSigningLevel = 0;
      if ( (*(_DWORD *)(v15 + 56) & 0x40000000) != 0 )
      {
        DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v4);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_76;
        v28 = v46;
      }
      else
      {
        v28 = -1LL;
        v46 = -1LL;
      }
      if ( (_DWORD)v42 != 1 )
        goto LABEL_52;
      if ( v28 != -1 )
      {
        DirectImageOriginalBase = MiRelocateImage(v12, (unsigned int)&v47, v41, v18, v28, 0);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_76;
        ImageRequiredSigningLevel = 1;
        if ( v38 == 1 )
          MiMakeImageReadOnly(v15, v33);
      }
      DirectImageOriginalBase = MiValidateSectionCreate(
                                  (ULONG_PTR)v4,
                                  v15,
                                  *(_DWORD *)(a1 + 168),
                                  *(_QWORD *)(a1 + 160),
                                  (int)v44,
                                  v37);
      if ( DirectImageOriginalBase >= 0 )
      {
        LODWORD(v12) = v45;
        v30 = SeCompareSigningLevelsForAuditableProcess(
                (__int64)KeGetCurrentThread()->ApcState.Process,
                (*(_DWORD *)a1 >> 11) & 1,
                *(_BYTE *)(v45 + 15) >> 4,
                v37);
        v9 = v43;
        if ( !v30 )
          DirectImageOriginalBase = -1073740760;
        if ( DirectImageOriginalBase >= 0 )
        {
          if ( ImageRequiredSigningLevel )
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
          v28 = v46;
LABEL_52:
          DirectImageOriginalBase = MiRelocateImage(v12, (unsigned int)&v47, v41, v18, v28, 0);
          if ( DirectImageOriginalBase >= 0 && v38 == 1 )
            MiMakeImageReadOnly(v15, v29);
          goto LABEL_55;
        }
      }
LABEL_76:
      MiReturnPfnReferenceCount(v9);
      return (unsigned int)DirectImageOriginalBase;
    }
    MiReturnPfnReferenceCount(v9);
    return ImageRequiredSigningLevel;
  }
}
