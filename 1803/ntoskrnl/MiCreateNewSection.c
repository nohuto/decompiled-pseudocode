/*
 * XREFs of MiCreateNewSection @ 0x1404BE6AC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReturnPfnReferenceCount @ 0x14004CD68 (MiReturnPfnReferenceCount.c)
 *     MiReleaseImageSection @ 0x14004CDAC (MiReleaseImageSection.c)
 *     MiSectionCreated @ 0x14004D194 (MiSectionCreated.c)
 *     IoSetTopLevelIrp @ 0x14005C1B0 (IoSetTopLevelIrp.c)
 *     MiMakeImageReadOnly @ 0x1400C2CC0 (MiMakeImageReadOnly.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiEnablePartitionMappedWrites @ 0x1404BEC88 (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x1404BEDE8 (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 *     MiValidateSectionSigningPolicy @ 0x1404F1598 (MiValidateSectionSigningPolicy.c)
 *     MiParseComImage @ 0x14053B9A0 (MiParseComImage.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     SeGetImageRequiredSigningLevel @ 0x1405626F0 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140714570 (FsRtlGetDirectImageOriginalBase.c)
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
  int ImageFileMap; // eax
  int DirectImageOriginalBase; // edi
  __int64 v14; // r12
  signed __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // r15d
  _QWORD *v20; // r13
  __int64 v22; // r13
  int v23; // r9d
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // r8d
  int v27; // edi
  unsigned int v28; // ecx
  char v29; // r8
  int v30; // edx
  int v31; // r13d
  __int64 v32; // rax
  PFILE_OBJECT v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int UserDirectoryTableBase; // r12d
  int v38; // r9d
  __int64 v39; // rax
  int ImageRequiredSigningLevel; // r14d
  int v41; // eax
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // [rsp+20h] [rbp-E0h]
  int v47; // [rsp+28h] [rbp-D8h]
  int v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+38h] [rbp-C8h]
  char v50; // [rsp+60h] [rbp-A0h]
  char v51; // [rsp+61h] [rbp-9Fh]
  char v52; // [rsp+62h] [rbp-9Eh]
  char v53; // [rsp+63h] [rbp-9Dh] BYREF
  char v54[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v55; // [rsp+68h] [rbp-98h]
  int v56; // [rsp+6Ch] [rbp-94h]
  int v57; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+74h] [rbp-8Ch]
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  int v60; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  __int64 *v64; // [rsp+A0h] [rbp-60h]
  signed __int64 *v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  int v67; // [rsp+B8h] [rbp-48h]
  int v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+10Ch] [rbp+Ch]

  v2 = *(struct _FILE_OBJECT **)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = a1;
  v5 = *(signed __int64 **)(a1 + 152);
  v6 = *(_BYTE *)(a1 + 24);
  LOBYTE(a1) = 0;
  v64 = a2;
  v7 = *(ULONG_PTR ***)(v4 + 176);
  FileObject = v2;
  v60 = v3;
  v56 = 0;
  v65 = v5;
  v53 = 0;
  v50 = v6;
  v55 = a1;
  v57 = 0;
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
    v10 = v3 & 0x1000000;
    v58 = v3 & 0x1000000;
    if ( (v3 & 0x1000000) != 0 )
    {
      ImageFileMap = MiCreateImageFileMap(v2, (__int64)&v61, (__int64)&v59, (__int64)&v66, (__int64)&v57);
      v11 = v59;
    }
    else
    {
      v49 = *(_DWORD *)v4;
      v11 = 0LL;
      v48 = *(_DWORD *)(v4 + 172);
      v46 = *(_DWORD *)(v4 + 28);
      v59 = 0LL;
      ImageFileMap = MiCreateDataFileMap(v2, v46, v60, v48, v49);
      v67 = 0;
    }
    DirectImageOriginalBase = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*(_DWORD *)v4 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(v4 + 184));
        FsRtlReleaseFile(v2);
        *(_DWORD *)v4 &= ~2u;
      }
      return (unsigned int)DirectImageOriginalBase;
    }
    v14 = v61;
    *v64 = v61;
    v15 = *v65;
    if ( !*v65 )
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v11 = v59;
      v14 = v61;
    }
    v16 = *(_DWORD *)v4;
    *(_QWORD *)(v4 + 128) = v15;
    v17 = *(_QWORD *)v14;
    if ( (v16 & 0x200000) != 0 )
    {
      *(_BYTE *)(v17 + 62) |= 1u;
      v16 = *(_DWORD *)v4;
    }
    v18 = v16;
    if ( (v16 & 0x2000) != 0 && (v2->DeviceObject->Characteristics & 0x10) == 0 && (!v10 || (v67 & 0xFFF) == 0) )
    {
      *(_DWORD *)(v17 + 56) |= 0x20000000u;
      v18 = *(_DWORD *)v4;
    }
    if ( (v18 & 0x4000) != 0 )
    {
      *(_DWORD *)(v17 + 56) |= 0x20000u;
      v18 = *(_DWORD *)v4;
    }
    if ( (((v18 & 0x10000) != 0) & !_bittest(&v60, 0x18u)) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x40000000u;
    v19 = 2;
    v20 = (_QWORD *)MiSectionCreated((__int64)v2, v17, v11);
    if ( (*(_DWORD *)v4 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(v4 + 184));
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)v4 &= ~2u;
    }
    if ( !v58 )
      goto LABEL_19;
    v22 = *(_QWORD *)(v14 + 56);
    DirectImageOriginalBase = MiParseComImage(v17, &v66, &v53);
    if ( DirectImageOriginalBase < 0 )
      goto LABEL_93;
    if ( !v68 && !v69 && !*(_BYTE *)(v22 + 50) )
      *(_BYTE *)(v14 + 15) |= 1u;
    if ( (*(_DWORD *)(v17 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)v4 & 0x20000) != 0 )
      {
        dword_1403CB498 = 80;
        DirectImageOriginalBase = -1073740749;
        goto LABEL_93;
      }
      DirectImageOriginalBase = MiSetPagesModified((__int64 *)v17, *(_DWORD *)(v4 + 168));
      if ( DirectImageOriginalBase < 0 )
        goto LABEL_93;
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
    if ( ((v24 >> 11) & 1) == 0 )
      v27 = v25;
    if ( (v24 & 0x400) == 0 && (v24 & 0x8000) == 0 || (v24 & 0x10) != 0 || ((v24 >> 11) & 1) != 0 )
    {
      LOBYTE(v23) = v55;
LABEL_34:
      v28 = *(_DWORD *)v4;
      if ( (*(_DWORD *)v4 & 0x20000) != 0 )
      {
        v27 |= 0x40000000u;
        v42 = v50;
        if ( !v50 )
          v42 = 4;
        v29 = v42;
        v50 = v42;
      }
      else
      {
        v29 = v50;
      }
      v30 = v27 | 0x20000000;
      if ( (v28 & 0x100000) == 0 )
        v30 = v27;
      v58 = v30;
      if ( (MiFlags & 0x40000) != 0 )
      {
        v28 |= 0x8000u;
        *(_DWORD *)v4 = v28;
        if ( !v29 )
        {
          v29 = 1;
          v50 = 1;
        }
      }
      if ( ((v28 >> 10) & 1) != 0 && v29 || (v28 & 0x8000) != 0 || (v52 = 0, *(char *)(v22 + 46) < 0) )
        v52 = 1;
      if ( ((v28 >> 10) & 1) == 0 || (v51 = 1, !(_BYTE)v23) )
        v51 = 0;
      if ( (v28 & 0x40) == 0 )
        v19 = (v28 & 0x20) != 0;
      v31 = 0;
      if ( (*(_DWORD *)(v17 + 56) & 0x40000000) != 0 )
      {
        DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_93;
        v32 = v63;
      }
      else
      {
        v32 = -1LL;
        v63 = -1LL;
      }
      if ( v52 != 1 && v51 != 1 )
      {
        v33 = FileObject;
        goto LABEL_51;
      }
      if ( v32 != -1 )
      {
        DirectImageOriginalBase = MiRelocateImage(v14, (unsigned int)&v66, v57, v19, v32, 0);
        if ( DirectImageOriginalBase < 0 )
          goto LABEL_93;
        v31 = 1;
        if ( v53 == 1 )
          MiMakeImageReadOnly(v17, v43, v44, v45);
      }
      v38 = *(_DWORD *)(v4 + 168);
      v47 = (*(_DWORD *)v4 >> 11) & 1;
      v39 = *(_QWORD *)(v4 + 160);
      v33 = FileObject;
      DirectImageOriginalBase = MiValidateSectionSigningPolicy(
                                  0,
                                  (_DWORD)FileObject,
                                  v17,
                                  v38,
                                  v39,
                                  v47,
                                  v58,
                                  v52,
                                  v51,
                                  v56,
                                  v50,
                                  v55);
      if ( DirectImageOriginalBase >= 0 )
      {
        if ( v31 )
        {
LABEL_54:
          MiReturnPfnReferenceCount(v11);
          if ( DirectImageOriginalBase < 0 )
            return (unsigned int)DirectImageOriginalBase;
          v20 = (_QWORD *)MiReleaseImageSection((__int64)v33, v17);
LABEL_19:
          MiReleaseControlAreaWaiters(v20);
          return (unsigned int)DirectImageOriginalBase;
        }
        v32 = v63;
LABEL_51:
        DirectImageOriginalBase = MiRelocateImage(v14, (unsigned int)&v66, v57, v19, v32, 0);
        if ( DirectImageOriginalBase >= 0 && v53 == 1 )
          MiMakeImageReadOnly(v17, v34, v35, v36);
        goto LABEL_54;
      }
LABEL_93:
      MiReturnPfnReferenceCount(v11);
      return (unsigned int)DirectImageOriginalBase;
    }
    UserDirectoryTableBase = KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase;
    if ( !v50 )
    {
LABEL_59:
      v11 = v59;
      if ( (UserDirectoryTableBase & 0x1000000) != 0 )
      {
        LOBYTE(v23) = 8;
      }
      else
      {
        v23 = (unsigned __int8)v55;
        if ( (UserDirectoryTableBase & 0x2000000) != 0 )
          v23 = 6;
      }
      LODWORD(v14) = v61;
      v55 = v23;
      goto LABEL_34;
    }
    LOBYTE(v26) = v50;
    ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v27, v26, 0, (__int64)v54);
    if ( ImageRequiredSigningLevel >= 0 )
    {
      v50 = v54[0];
      *(_BYTE *)(v4 + 24) = v54[0];
      v41 = v56;
      if ( (UserDirectoryTableBase & 0x800000) != 0 )
        v41 = 1;
      v56 = v41;
      goto LABEL_59;
    }
    MiReturnPfnReferenceCount(v59);
    return (unsigned int)ImageRequiredSigningLevel;
  }
}
