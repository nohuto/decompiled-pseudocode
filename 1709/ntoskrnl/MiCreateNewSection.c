/*
 * XREFs of MiCreateNewSection @ 0x1404F96D0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x140067110 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     MiPartitionActive @ 0x1400B7264 (MiPartitionActive.c)
 *     MiSectionCreated @ 0x1400B72A4 (MiSectionCreated.c)
 *     MiReturnPfnReferenceCount @ 0x1400B7758 (MiReturnPfnReferenceCount.c)
 *     MiReleaseImageSection @ 0x1400B798C (MiReleaseImageSection.c)
 *     MiMakeImageReadOnly @ 0x140122884 (MiMakeImageReadOnly.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     MiEnablePartitionMappedWrites @ 0x1404F9CA4 (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x1404F9DFC (MiCreateDataFileMap.c)
 *     MiParseComImage @ 0x1404FB3CC (MiParseComImage.c)
 *     MiValidateSectionSigningPolicy @ 0x1405040C8 (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x140504F5C (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406AFDC8 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, __int64 *a2)
{
  struct _FILE_OBJECT *v2; // r13
  int v3; // r14d
  __int64 v4; // rbx
  signed __int64 *v5; // r12
  char v6; // al
  ULONG_PTR **v7; // rdi
  ULONG_PTR *v8; // rdi
  int v9; // esi
  int v10; // r15d
  __int64 v11; // r14
  NTSTATUS DataFileMap; // eax
  int DirectImageOriginalBase; // edi
  __int64 v14; // r12
  signed __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rsi
  int v18; // r15d
  _QWORD *v19; // r13
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // edi
  int UserDirectoryTableBase; // r12d
  unsigned int v28; // ecx
  char v29; // r8
  int v30; // edx
  unsigned int v31; // edx
  PFILE_OBJECT v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int ImageRequiredSigningLevel; // r14d
  int v38; // eax
  char v39; // al
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // [rsp+20h] [rbp-E0h]
  int v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+38h] [rbp-C8h]
  char v47; // [rsp+60h] [rbp-A0h]
  char v48; // [rsp+61h] [rbp-9Fh]
  char v49; // [rsp+62h] [rbp-9Eh]
  char v50; // [rsp+63h] [rbp-9Dh] BYREF
  char v51; // [rsp+64h] [rbp-9Ch] BYREF
  int v52; // [rsp+68h] [rbp-98h]
  int v53; // [rsp+6Ch] [rbp-94h] BYREF
  int v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 *v60; // [rsp+A0h] [rbp-60h]
  signed __int64 *v61; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-50h] BYREF
  int v63; // [rsp+B8h] [rbp-48h]
  int v64; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+10Ch] [rbp+Ch]

  v2 = *(struct _FILE_OBJECT **)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = a1;
  v5 = *(signed __int64 **)(a1 + 152);
  v6 = *(_BYTE *)(a1 + 24);
  LOBYTE(a1) = 0;
  v60 = a2;
  v7 = *(ULONG_PTR ***)(v4 + 176);
  FileObject = v2;
  v53 = v3;
  v54 = 0;
  v61 = v5;
  v50 = 0;
  v47 = v6;
  v52 = a1;
  LODWORD(v55) = 0;
  if ( v7 )
    v8 = *v7;
  else
    v8 = &MiSystemPartition;
  v9 = MiEnablePartitionMappedWrites(v8);
  if ( v9 < 0 )
  {
    if ( (*(_DWORD *)v4 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(v4 + 184));
      FsRtlReleaseFile(v2);
      *(_DWORD *)v4 &= ~2u;
    }
    return (unsigned int)v9;
  }
  else
  {
    MiPartitionActive((__int64)v8);
    v10 = v3 & 0x1000000;
    HIDWORD(v55) = v3 & 0x1000000;
    if ( (v3 & 0x1000000) != 0 )
    {
      DataFileMap = MiCreateImageFileMap(
                      v2,
                      v8,
                      *(_DWORD *)(v4 + 172),
                      *(_DWORD *)v4,
                      (unsigned int **)&v57,
                      &v56,
                      &v62,
                      (PVOID *)&v55);
      v11 = v56;
    }
    else
    {
      v46 = *(_DWORD *)v4;
      v11 = 0LL;
      v45 = *(_DWORD *)(v4 + 172);
      v44 = *(_DWORD *)(v4 + 28);
      v56 = 0LL;
      DataFileMap = MiCreateDataFileMap(v2, v44, v53, v45, v46);
      v63 = 0;
    }
    DirectImageOriginalBase = DataFileMap;
    if ( DataFileMap < 0 )
    {
      if ( (*(_DWORD *)v4 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(v4 + 184));
        FsRtlReleaseFile(v2);
        *(_DWORD *)v4 &= ~2u;
      }
      return (unsigned int)DirectImageOriginalBase;
    }
    v14 = v57;
    *v60 = v57;
    v15 = *v61;
    if ( !*v61 )
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v11 = v56;
      v14 = v57;
    }
    v16 = (*(_DWORD *)v4 & 0x200000) == 0;
    *(_QWORD *)(v4 + 128) = v15;
    v17 = *(_QWORD *)v14;
    if ( !v16 )
      *(_BYTE *)(v17 + 62) |= 1u;
    if ( (*(_DWORD *)v4 & 0x2000) != 0
      && (v2->DeviceObject->Characteristics & 0x10) == 0
      && (!v10 || (v63 & 0xFFF) == 0) )
    {
      *(_DWORD *)(v17 + 56) |= 0x20000000u;
    }
    if ( (*(_DWORD *)v4 & 0x4000) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x20000u;
    if ( (((*(_DWORD *)v4 & 0x10000) != 0) & !_bittest(&v53, 0x18u)) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x40000000u;
    v18 = 2;
    v19 = (_QWORD *)MiSectionCreated((__int64)v2, v17, v11);
    if ( (*(_DWORD *)v4 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(v4 + 184));
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)v4 &= ~2u;
    }
    if ( !HIDWORD(v55) )
      goto LABEL_19;
    v21 = *(_QWORD *)(v14 + 56);
    DirectImageOriginalBase = MiParseComImage(v17, &v62, &v50);
    if ( DirectImageOriginalBase < 0 )
      goto LABEL_84;
    if ( !v64 && !v65 && !*(_BYTE *)(v21 + 50) )
      *(_BYTE *)(v14 + 15) |= 1u;
    if ( (*(_DWORD *)(v17 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)v4 & 0x20000) != 0 )
      {
        dword_1403882F8 = 80;
        DirectImageOriginalBase = -1073740749;
        goto LABEL_84;
      }
      DirectImageOriginalBase = MiSetPagesModified(v17, *(_DWORD *)(v4 + 168), v22, v23);
      if ( DirectImageOriginalBase < 0 )
        goto LABEL_84;
    }
    v24 = *(_DWORD *)v4;
    v25 = 4;
    if ( (*(_DWORD *)v4 & 0x100) == 0 )
    {
      if ( (v24 & 0x20) != 0 )
      {
        v25 = 1;
      }
      else if ( (v24 & 0x10) != 0 )
      {
        v25 = (*(_DWORD *)v4 & 0x1000) != 0 ? 8 : 2;
      }
      else
      {
        v25 = 0;
      }
    }
    v26 = v25 | 0x10;
    if ( (v24 & 0x800) == 0 )
      v26 = v25;
    if ( (v24 & 0x400) == 0 && (v24 & 0x8000) == 0 || (v24 & 0x10) != 0 || (v24 & 0x800) != 0 )
    {
      LOBYTE(v23) = v52;
LABEL_39:
      v28 = *(_DWORD *)v4;
      if ( (*(_DWORD *)v4 & 0x20000) != 0 )
      {
        v26 |= 0x40000000u;
        v39 = v47;
        if ( !v47 )
          v39 = 4;
        v29 = v39;
        v47 = v39;
      }
      else
      {
        v29 = v47;
      }
      v30 = v26 | 0x20000000;
      if ( (v28 & 0x100000) == 0 )
        v30 = v26;
      HIDWORD(v55) = v30;
      if ( (MiFlags & 0x40000) != 0 )
      {
        v40 = v29;
        *(_DWORD *)v4 = v28 | 0x8000;
        if ( !v29 )
          v40 = 1;
        v29 = v40;
        v47 = v40;
      }
      v31 = *(_DWORD *)v4;
      if ( ((*(_DWORD *)v4 >> 10) & 1) != 0 && v29 || (v31 & 0x8000) != 0 || (v49 = 0, *(char *)(v21 + 46) < 0) )
        v49 = 1;
      if ( ((*(_DWORD *)v4 >> 10) & 1) == 0 || (v48 = 1, !(_BYTE)v23) )
        v48 = 0;
      if ( (v31 & 0x40) == 0 )
        v18 = (v31 & 0x20) != 0;
      v53 = 0;
      v32 = FileObject;
      if ( (*(_DWORD *)(v17 + 56) & 0x40000000) != 0 )
      {
        DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_84;
        v33 = v59;
      }
      else
      {
        v33 = -1LL;
        v59 = -1LL;
      }
      if ( v49 != 1 && v48 != 1 )
        goto LABEL_57;
      if ( v33 != -1 )
      {
        DirectImageOriginalBase = MiRelocateImage(v14, (__int64)&v62, (unsigned int)v55, v18, v33, 0);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_84;
        v53 = 1;
        if ( v50 == 1 )
          MiMakeImageReadOnly(v17, v41, v42, v43);
      }
      DirectImageOriginalBase = MiValidateSectionSigningPolicy(
                                  0,
                                  (_DWORD)v32,
                                  v17,
                                  *(_DWORD *)(v4 + 168),
                                  *(_QWORD *)(v4 + 160),
                                  (*(_DWORD *)v4 >> 11) & 1,
                                  HIDWORD(v55),
                                  v49,
                                  v48,
                                  v54,
                                  v47,
                                  v52);
      if ( DirectImageOriginalBase >= 0 )
      {
        if ( v53 )
        {
LABEL_60:
          MiReturnPfnReferenceCount(v11);
          if ( DirectImageOriginalBase < 0 )
            return (unsigned int)DirectImageOriginalBase;
          v19 = (_QWORD *)MiReleaseImageSection((__int64)v32, v17);
LABEL_19:
          MiReleaseControlAreaWaiters(v19);
          return (unsigned int)DirectImageOriginalBase;
        }
        v33 = v59;
LABEL_57:
        DirectImageOriginalBase = MiRelocateImage(v14, (__int64)&v62, (unsigned int)v55, v18, v33, 0);
        if ( DirectImageOriginalBase >= 0 && v50 == 1 )
          MiMakeImageReadOnly(v17, v34, v35, v36);
        goto LABEL_60;
      }
LABEL_84:
      MiReturnPfnReferenceCount(v11);
      return (unsigned int)DirectImageOriginalBase;
    }
    UserDirectoryTableBase = KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase;
    if ( !v47 )
    {
LABEL_35:
      v11 = v56;
      if ( (UserDirectoryTableBase & 0x1000000) != 0 )
      {
        LOBYTE(v23) = 8;
      }
      else
      {
        LODWORD(v23) = (unsigned __int8)v52;
        if ( (UserDirectoryTableBase & 0x2000000) != 0 )
          LODWORD(v23) = 6;
      }
      v14 = v57;
      v52 = v23;
      goto LABEL_39;
    }
    ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, (__int64)&v51);
    if ( ImageRequiredSigningLevel >= 0 )
    {
      v47 = v51;
      *(_BYTE *)(v4 + 24) = v51;
      v38 = v54;
      if ( (UserDirectoryTableBase & 0x800000) != 0 )
        v38 = 1;
      v54 = v38;
      goto LABEL_35;
    }
    MiReturnPfnReferenceCount(v56);
    return (unsigned int)ImageRequiredSigningLevel;
  }
}
