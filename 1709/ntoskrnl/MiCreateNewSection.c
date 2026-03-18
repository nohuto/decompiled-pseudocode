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
  int v26; // r8d
  int v27; // edi
  int UserDirectoryTableBase; // r12d
  unsigned int v29; // ecx
  char v30; // r8
  int v31; // edx
  unsigned int v32; // edx
  PFILE_OBJECT v33; // r13
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int ImageRequiredSigningLevel; // r14d
  int v39; // eax
  char v40; // al
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // [rsp+20h] [rbp-E0h]
  int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+38h] [rbp-C8h]
  char v48; // [rsp+60h] [rbp-A0h]
  char v49; // [rsp+61h] [rbp-9Fh]
  char v50; // [rsp+62h] [rbp-9Eh]
  char v51; // [rsp+63h] [rbp-9Dh] BYREF
  char v52[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+6Ch] [rbp-94h] BYREF
  int v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  __int64 *v61; // [rsp+A0h] [rbp-60h]
  signed __int64 *v62; // [rsp+A8h] [rbp-58h]
  __int64 v63; // [rsp+B0h] [rbp-50h] BYREF
  int v64; // [rsp+B8h] [rbp-48h]
  int v65; // [rsp+108h] [rbp+8h]
  int v66; // [rsp+10Ch] [rbp+Ch]

  v2 = *(struct _FILE_OBJECT **)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = a1;
  v5 = *(signed __int64 **)(a1 + 152);
  v6 = *(_BYTE *)(a1 + 24);
  LOBYTE(a1) = 0;
  v61 = a2;
  v7 = *(ULONG_PTR ***)(v4 + 176);
  FileObject = v2;
  v54 = v3;
  v55 = 0;
  v62 = v5;
  v51 = 0;
  v48 = v6;
  v53 = a1;
  LODWORD(v56) = 0;
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
    HIDWORD(v56) = v3 & 0x1000000;
    if ( (v3 & 0x1000000) != 0 )
    {
      DataFileMap = MiCreateImageFileMap(
                      v2,
                      v8,
                      *(_DWORD *)(v4 + 172),
                      *(_DWORD *)v4,
                      (unsigned int **)&v58,
                      &v57,
                      &v63,
                      (PVOID *)&v56);
      v11 = v57;
    }
    else
    {
      v47 = *(_DWORD *)v4;
      v11 = 0LL;
      v46 = *(_DWORD *)(v4 + 172);
      v45 = *(_DWORD *)(v4 + 28);
      v57 = 0LL;
      DataFileMap = MiCreateDataFileMap(v2, v45, v54, v46, v47);
      v64 = 0;
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
    v14 = v58;
    *v61 = v58;
    v15 = *v62;
    if ( !*v62 )
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v11 = v57;
      v14 = v58;
    }
    v16 = (*(_DWORD *)v4 & 0x200000) == 0;
    *(_QWORD *)(v4 + 128) = v15;
    v17 = *(_QWORD *)v14;
    if ( !v16 )
      *(_BYTE *)(v17 + 62) |= 1u;
    if ( (*(_DWORD *)v4 & 0x2000) != 0
      && (v2->DeviceObject->Characteristics & 0x10) == 0
      && (!v10 || (v64 & 0xFFF) == 0) )
    {
      *(_DWORD *)(v17 + 56) |= 0x20000000u;
    }
    if ( (*(_DWORD *)v4 & 0x4000) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x20000u;
    if ( (((*(_DWORD *)v4 & 0x10000) != 0) & !_bittest(&v54, 0x18u)) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x40000000u;
    v18 = 2;
    v19 = (_QWORD *)MiSectionCreated((__int64)v2, v17, v11);
    if ( (*(_DWORD *)v4 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(v4 + 184));
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)v4 &= ~2u;
    }
    if ( !HIDWORD(v56) )
      goto LABEL_19;
    v21 = *(_QWORD *)(v14 + 56);
    DirectImageOriginalBase = MiParseComImage(v17, &v63, &v51);
    if ( DirectImageOriginalBase < 0 )
      goto LABEL_84;
    if ( !v65 && !v66 && !*(_BYTE *)(v21 + 50) )
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
    v26 = 6;
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
    v27 = v25 | 0x10;
    if ( (v24 & 0x800) == 0 )
      v27 = v25;
    if ( (v24 & 0x400) == 0 && (v24 & 0x8000) == 0 || (v24 & 0x10) != 0 || (v24 & 0x800) != 0 )
    {
      LOBYTE(v23) = v53;
LABEL_39:
      v29 = *(_DWORD *)v4;
      if ( (*(_DWORD *)v4 & 0x20000) != 0 )
      {
        v27 |= 0x40000000u;
        v40 = v48;
        if ( !v48 )
          v40 = 4;
        v30 = v40;
        v48 = v40;
      }
      else
      {
        v30 = v48;
      }
      v31 = v27 | 0x20000000;
      if ( (v29 & 0x100000) == 0 )
        v31 = v27;
      HIDWORD(v56) = v31;
      if ( (MiFlags & 0x40000) != 0 )
      {
        v41 = v30;
        *(_DWORD *)v4 = v29 | 0x8000;
        if ( !v30 )
          v41 = 1;
        v30 = v41;
        v48 = v41;
      }
      v32 = *(_DWORD *)v4;
      if ( ((*(_DWORD *)v4 >> 10) & 1) != 0 && v30 || (v32 & 0x8000) != 0 || (v50 = 0, *(char *)(v21 + 46) < 0) )
        v50 = 1;
      if ( ((*(_DWORD *)v4 >> 10) & 1) == 0 || (v49 = 1, !(_BYTE)v23) )
        v49 = 0;
      if ( (v32 & 0x40) == 0 )
        v18 = (v32 & 0x20) != 0;
      v54 = 0;
      v33 = FileObject;
      if ( (*(_DWORD *)(v17 + 56) & 0x40000000) != 0 )
      {
        DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_84;
        v34 = v60;
      }
      else
      {
        v34 = -1LL;
        v60 = -1LL;
      }
      if ( v50 != 1 && v49 != 1 )
        goto LABEL_57;
      if ( v34 != -1 )
      {
        DirectImageOriginalBase = MiRelocateImage(v14, (__int64)&v63, (unsigned int)v56, v18, v34, 0);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_84;
        v54 = 1;
        if ( v51 == 1 )
          MiMakeImageReadOnly(v17, v42, v43, v44);
      }
      DirectImageOriginalBase = MiValidateSectionSigningPolicy(
                                  0,
                                  (_DWORD)v33,
                                  v17,
                                  *(_DWORD *)(v4 + 168),
                                  *(_QWORD *)(v4 + 160),
                                  (*(_DWORD *)v4 >> 11) & 1,
                                  HIDWORD(v56),
                                  v50,
                                  v49,
                                  v55,
                                  v48,
                                  v53);
      if ( DirectImageOriginalBase >= 0 )
      {
        if ( v54 )
        {
LABEL_60:
          MiReturnPfnReferenceCount(v11);
          if ( DirectImageOriginalBase < 0 )
            return (unsigned int)DirectImageOriginalBase;
          v19 = (_QWORD *)MiReleaseImageSection((__int64)v33, v17);
LABEL_19:
          MiReleaseControlAreaWaiters(v19);
          return (unsigned int)DirectImageOriginalBase;
        }
        v34 = v60;
LABEL_57:
        DirectImageOriginalBase = MiRelocateImage(v14, (__int64)&v63, (unsigned int)v56, v18, v34, 0);
        if ( DirectImageOriginalBase >= 0 && v51 == 1 )
          MiMakeImageReadOnly(v17, v35, v36, v37);
        goto LABEL_60;
      }
LABEL_84:
      MiReturnPfnReferenceCount(v11);
      return (unsigned int)DirectImageOriginalBase;
    }
    UserDirectoryTableBase = KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase;
    if ( !v48 )
    {
LABEL_35:
      v11 = v57;
      if ( (UserDirectoryTableBase & 0x1000000) != 0 )
      {
        LOBYTE(v23) = 8;
      }
      else
      {
        LODWORD(v23) = (unsigned __int8)v53;
        if ( (UserDirectoryTableBase & 0x2000000) != 0 )
          LODWORD(v23) = 6;
      }
      v14 = v58;
      v53 = v23;
      goto LABEL_39;
    }
    LOBYTE(v26) = v48;
    ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v27, v26, 0, (__int64)v52);
    if ( ImageRequiredSigningLevel >= 0 )
    {
      v48 = v52[0];
      *(_BYTE *)(v4 + 24) = v52[0];
      v39 = v55;
      if ( (UserDirectoryTableBase & 0x800000) != 0 )
        v39 = 1;
      v55 = v39;
      goto LABEL_35;
    }
    MiReturnPfnReferenceCount(v57);
    return (unsigned int)ImageRequiredSigningLevel;
  }
}
