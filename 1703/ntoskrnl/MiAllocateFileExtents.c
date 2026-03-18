/*
 * XREFs of MiAllocateFileExtents @ 0x1406B6DDC
 * Callers:
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     MiUpdateActiveSubsection @ 0x1402161AC (MiUpdateActiveSubsection.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x1406B76C8 (MiInitializeImageExtents.c)
 * Callees:
 *     MiSetSubsectionBase @ 0x140039EF0 (MiSetSubsectionBase.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiEndingOffset @ 0x1400CDDC0 (MiEndingOffset.c)
 *     FsRtlGetFileExtents @ 0x1401E2B1C (FsRtlGetFileExtents.c)
 *     MiBuildFileOnlyProtos @ 0x14021816C (MiBuildFileOnlyProtos.c)
 *     MiChangingSubsectionProtos @ 0x140218224 (MiChangingSubsectionProtos.c)
 *     MiEliminateStaleExtents @ 0x140218880 (MiEliminateStaleExtents.c)
 *     MiSubsectionProtosCreated @ 0x140219418 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402194EC (MiUnlinkSubsectionWaitBlock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 *     MiAddFileOnlyPfns @ 0x1406B6D64 (MiAddFileOnlyPfns.c)
 *     MiConvertRunsToPages @ 0x1406B7394 (MiConvertRunsToPages.c)
 */

__int64 __fastcall MiAllocateFileExtents(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        int a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  struct _FILE_OBJECT *v11; // r15
  int v12; // r14d
  unsigned int v13; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // rsi
  __int64 v17; // rdx
  int v18; // r15d
  __int64 v19; // rcx
  int FileExtents; // r12d
  _DWORD *v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // r8d
  _QWORD *v24; // rcx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r10
  unsigned int v27; // eax
  unsigned __int64 v28; // r15
  _QWORD *v29; // rbx
  int v30; // r14d
  bool v31; // zf
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // [rsp+30h] [rbp-98h]
  unsigned __int64 v37; // [rsp+30h] [rbp-98h]
  unsigned int v38; // [rsp+38h] [rbp-90h] BYREF
  struct _FILE_OBJECT *v39; // [rsp+40h] [rbp-88h]
  unsigned __int64 v40; // [rsp+48h] [rbp-80h]
  unsigned __int64 v41; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-70h]
  _BYTE v43[104]; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+D0h] [rbp+8h]
  unsigned int v45; // [rsp+D8h] [rbp+10h]

  v45 = a2;
  v40 = 0LL;
  v5 = (unsigned int)(a4 << 12);
  v42 = v5;
  while ( 2 )
  {
    v7 = *(_QWORD *)BugCheckParameter2;
    v8 = v5;
    v36 = *(_QWORD *)BugCheckParameter2;
    if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x20) != 0 )
    {
      v44 = 1;
      v9 = MiStartingOffset((__int64 *)BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 8), 0);
      v10 = MiEndingOffset(BugCheckParameter2);
      v40 = v10;
      if ( v9 == v10 && !v9 )
        return 0LL;
      if ( v9 + v8 > v10 )
        v8 = ((unsigned int)(v10 - v9) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
    }
    else
    {
      v44 = 2;
      v9 = (a2
          + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
    }
    v11 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v7);
    v39 = v11;
    v12 = (__rdtsc() >> 4) & 7;
    if ( !v12 )
      v12 = 1;
    v13 = v12 + 8;
    if ( !v13 )
    {
LABEL_13:
      MiDereferenceControlAreaFile(v7, (unsigned __int64)v11);
      return 3221225626LL;
    }
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (v13 - 1) + 24, 0x6546694Du);
      v15 = PoolWithTag;
      if ( PoolWithTag )
        break;
      v13 >>= 1;
      if ( !v13 )
        goto LABEL_13;
    }
    PoolWithTag[1] = 0;
    *PoolWithTag = v13;
    while ( 1 )
    {
      v17 = v44;
      v18 = 0;
      if ( v44 == 1 )
      {
        if ( v9 + v8 > v40 )
          v8 = (unsigned int)(v40 - v9);
        v19 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v19 )
          v9 = (v19 - *(_QWORD *)(*(_QWORD *)v7 + 64LL)) >> 3;
        v9 <<= 12;
      }
      v8 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v44 != 1 )
      {
        FileExtents = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v43);
        if ( FileExtents < 0 )
          goto LABEL_92;
        v18 = 1;
      }
      FileExtents = FsRtlGetFileExtents(v39, v17, v9, v8, v15);
      if ( FileExtents < 0 )
      {
LABEL_92:
        MiDereferenceControlAreaFile(v36, (unsigned __int64)v39);
        if ( v18 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v43, 0);
        return (unsigned int)FileExtents;
      }
      if ( v15[1] <= v13 )
        break;
      v13 = v15[1];
      ExFreePoolWithTag(v15, 0);
      v21 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (v13 - 1) + 24, 0x6546694Du);
      v15 = v21;
      if ( !v21 )
      {
        MiDereferenceControlAreaFile(v36, (unsigned __int64)v39);
        v31 = v18 == 1;
LABEL_49:
        if ( v31 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v43, 0);
        return 3221225626LL;
      }
      v21[1] = 0;
      v7 = v36;
      *v21 = v13;
      if ( v18 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v43, 0);
    }
    MiDereferenceControlAreaFile(v36, (unsigned __int64)v39);
    v22 = v15[1];
    v23 = 0;
    if ( !v22 )
    {
      v27 = v44;
      if ( v44 != 1 )
      {
        v28 = 0LL;
        v29 = 0LL;
        v38 = -1;
        v41 = 0LL;
        goto LABEL_41;
      }
      ExFreePoolWithTag(v15, 0);
      if ( v18 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v43, 0);
      return 3221225473LL;
    }
    v24 = v15 + 4;
    do
    {
      v25 = *(v24 - 1);
      v26 = v25 + *v24;
      if ( v26 >= qword_14036CBE0 && v25 < qword_14036CBE0 + 2048 || v26 >= 0xFFFFFFFFALL )
      {
        ExFreePoolWithTag(v15, 0);
        if ( v18 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v43, 0);
        return 3221226535LL;
      }
      ++v23;
      v24 += 2;
    }
    while ( v23 < v22 );
    v29 = (_QWORD *)MiConvertRunsToPages(v15, &v41, &v38);
    if ( !v29 )
    {
      ExFreePoolWithTag(v15, 0);
      v31 = v18 == 1;
      goto LABEL_49;
    }
    v28 = v41;
    v27 = v44;
LABEL_41:
    if ( v27 == 1 )
      goto LABEL_61;
    v30 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)v43);
    if ( v30 >= 0 )
    {
      if ( v29 && (a5 & 1) == 0 )
        MiEliminateStaleExtents(a3, (__int64)v29, v28);
LABEL_61:
      ExFreePoolWithTag(v15, 0);
      v32 = 0LL;
      v33 = 0LL;
      FileExtents = 0;
      v37 = 0LL;
      v34 = -1LL;
      v35 = 0LL;
      while ( (unsigned int)v35 != v28 )
      {
        if ( !v33 )
        {
          v34 = v29[v35];
          v33 = 1LL;
          goto LABEL_78;
        }
        v32 = v37;
        if ( v29[v35 - 1] + 1LL != v29[v35] )
          goto LABEL_64;
        ++v33;
LABEL_79:
        v35 = (unsigned int)(v35 + 1);
        if ( (unsigned int)v35 > v28 )
        {
LABEL_80:
          if ( FileExtents >= 0 )
          {
            if ( v29 )
              MiBuildFileOnlyProtos((__int64)v29, v28, BugCheckParameter2, a3);
            if ( (a5 & 1) != 0 )
              MiSetSubsectionBase((__int64 *)BugCheckParameter2, a3, v38);
          }
          if ( v44 == 2 )
            MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v43, a4, 0);
          if ( v29 )
            ExFreePoolWithTag(v29, 0);
          return (unsigned int)FileExtents;
        }
      }
      if ( !v33 )
        goto LABEL_80;
LABEL_64:
      if ( v34 >= 0 )
      {
        if ( FileExtents >= 0 )
        {
          FileExtents = MiAddFileOnlyPfns(v34, v33);
          if ( FileExtents < 0 )
          {
            v32 = (unsigned __int64)&v29[v35];
            v33 = 0LL;
            v37 = v32;
            LODWORD(v35) = -1;
            goto LABEL_79;
          }
        }
        else if ( (unsigned __int64)&v29[v35] <= v32 )
        {
          MiRemovePhysicalMemory(v34, v33, 18);
        }
      }
      else if ( FileExtents < 0 && (unsigned __int64)&v29[v35] <= v32 )
      {
        if ( (unsigned int)v35 == v28 )
          goto LABEL_80;
        v33 = 0LL;
        LODWORD(v35) = v35 - 1;
        goto LABEL_79;
      }
      if ( (unsigned int)v35 == v28 )
        goto LABEL_80;
      v33 = 0LL;
      LODWORD(v35) = v35 - 1;
LABEL_78:
      v32 = v37;
      goto LABEL_79;
    }
    ExFreePoolWithTag(v15, 0);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    if ( v30 == -1073740748 )
    {
      v5 = v42;
      a2 = v45;
      continue;
    }
    return (unsigned int)v30;
  }
}
