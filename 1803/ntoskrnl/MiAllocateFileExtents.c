/*
 * XREFs of MiAllocateFileExtents @ 0x14074DC04
 * Callers:
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiUpdateActiveSubsection @ 0x14025B23C (MiUpdateActiveSubsection.c)
 *     MiRefillPurgedExtents @ 0x14025E774 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x14026194C (MiFaultGetFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x14074E70C (MiInitializeImageExtents.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiSetSubsectionBase @ 0x1400CD53C (MiSetSubsectionBase.c)
 *     MiEndingOffset @ 0x140128958 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     FsRtlGetFileExtents @ 0x140224358 (FsRtlGetFileExtents.c)
 *     MiBuildFileOnlyProtos @ 0x14025D034 (MiBuildFileOnlyProtos.c)
 *     MiChangingSubsectionProtos @ 0x14025D140 (MiChangingSubsectionProtos.c)
 *     MiEliminateStaleExtents @ 0x14025D78C (MiEliminateStaleExtents.c)
 *     MiSubsectionProtosCreated @ 0x14025EA5C (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14025EB58 (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x14026A73C (MiReplaceSystemProtoPtesNode.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 *     MiConvertRunsToPages @ 0x14074E384 (MiConvertRunsToPages.c)
 */

__int64 __fastcall MiAllocateFileExtents(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        char a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  struct _FILE_OBJECT *v12; // r12
  unsigned __int64 v13; // rax
  int v14; // esi
  unsigned __int64 v15; // r15
  unsigned int v16; // r15d
  bool i; // cf
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // rdi
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  int FileExtents; // r12d
  unsigned int v25; // r12d
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned int v30; // eax
  unsigned __int64 v31; // r12
  void *v32; // rbx
  unsigned __int64 v34; // rcx
  int v35; // r13d
  unsigned __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // r15
  int v39; // eax
  unsigned __int64 v40; // rsi
  _DWORD *v41; // rdx
  _DWORD *v42; // [rsp+30h] [rbp-D8h]
  unsigned int v43; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v44; // [rsp+40h] [rbp-C8h]
  unsigned int v45; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  struct _FILE_OBJECT *v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp-A0h]
  _BYTE v50[40]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v51[14]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v53; // [rsp+118h] [rbp+10h]

  v53 = a2;
  v49 = 0LL;
  v5 = (unsigned int)(a4 << 12);
  v6 = a3;
  v48 = v5;
  while ( 1 )
  {
    v8 = *(_QWORD *)BugCheckParameter2;
    v9 = v5;
    v42 = *(_DWORD **)BugCheckParameter2;
    if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x20) != 0 )
    {
      v43 = 1;
      if ( *(_QWORD *)(BugCheckParameter2 + 8) )
        v10 = MiStartingOffset((__int64 *)BugCheckParameter2, v6, 0);
      else
        v10 = 0LL;
      v11 = MiEndingOffset(BugCheckParameter2);
      v49 = v11;
      if ( v10 == v11 && !v10 )
        return 0LL;
      if ( v10 + v9 > v11 )
        v9 = ((unsigned int)(v11 - v10) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
    }
    else
    {
      v43 = 2;
      v10 = (a2
           + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
    }
    v12 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v8);
    v47 = v12;
    v13 = __rdtsc();
    v14 = 1;
    v15 = (v13 >> 4) & 7;
    if ( ((v13 >> 4) & 7) == 0 )
      LODWORD(v15) = 1;
    v16 = v15 + 8;
    while ( 2 )
    {
      for ( i = v16 == 0; ; i = v16 == 0 )
      {
        if ( i )
        {
LABEL_110:
          MiDereferenceControlAreaFile((__int64)v42, (unsigned __int64)v12);
          return 3221225626LL;
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (v16 - 1) + 24, 0x6546694Du);
        v19 = PoolWithTag;
        if ( PoolWithTag )
          break;
        if ( !v14 )
          goto LABEL_110;
        v16 >>= 1;
      }
      PoolWithTag[1] = 0;
      v20 = 0;
      v21 = v43;
      *PoolWithTag = v16;
      if ( v43 == 1 )
      {
        if ( v10 + v9 > v49 )
          v9 = (unsigned int)(v49 - v10);
        v22 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v22 )
          v10 = (v22 - *(_QWORD *)(*(_QWORD *)v42 + 64LL)) >> 3;
        v10 <<= 12;
      }
      v9 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v43 != 1 || (v42[14] & 2) == 0 )
      {
        v23 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v50);
        if ( v23 >= 0 )
        {
          v20 = 1;
          goto LABEL_29;
        }
        MiDereferenceControlAreaFile((__int64)v42, (unsigned __int64)v12);
        ExFreePoolWithTag(v19, 0);
        return (unsigned int)v23;
      }
LABEL_29:
      FileExtents = FsRtlGetFileExtents(v12, v21, v10, v9, v19);
      if ( FileExtents < 0 )
      {
        MiDereferenceControlAreaFile((__int64)v42, (unsigned __int64)v47);
        if ( v20 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v50, 0);
        ExFreePoolWithTag(v19, 0);
        return (unsigned int)FileExtents;
      }
      v25 = v19[1];
      if ( v25 > v16 )
      {
        if ( v20 == 1 )
        {
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v50, 0);
          v25 = v19[1];
        }
        v19[1] = v16;
        ExFreePoolWithTag(v19, 0);
        v14 = 0;
        v16 = v25;
        v12 = v47;
        continue;
      }
      break;
    }
    MiDereferenceControlAreaFile((__int64)v42, (unsigned __int64)v47);
    v26 = v19[1];
    v27 = 0;
    if ( v26 )
    {
      do
      {
        v28 = *(_QWORD *)&v19[4 * v27 + 2];
        v29 = v28 + *(_QWORD *)&v19[4 * v27 + 4];
        if ( v29 >= qword_1403CC0A0 && v28 < qword_1403CC0A0 + 2048 || v29 >= 0xFFFFFFFFALL )
        {
          ExFreePoolWithTag(v19, 0);
          if ( v20 == 1 )
            MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v50, 0);
          return 3221226535LL;
        }
        ++v27;
      }
      while ( v27 < v26 );
      v32 = (void *)MiConvertRunsToPages(v19, &v46, &v45);
      if ( v32 )
      {
        v31 = v46;
        v30 = v43;
        goto LABEL_44;
      }
      ExFreePoolWithTag(v19, 0);
      if ( v20 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v50, 0);
      return 3221225626LL;
    }
    v30 = v43;
    if ( v43 == 1 )
    {
      ExFreePoolWithTag(v19, 0);
      if ( v20 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v50, 0);
      return 3221225473LL;
    }
    v31 = 0LL;
    v32 = 0LL;
    v45 = -1;
    v46 = 0LL;
LABEL_44:
    if ( v30 == 1 && (v42[14] & 2) != 0 )
      break;
    v23 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)v50);
    if ( v23 >= 0 )
    {
      if ( v32 && (a5 & 1) == 0 )
        MiEliminateStaleExtents(a3, (__int64)v32, v31);
      break;
    }
    ExFreePoolWithTag(v19, 0);
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
    if ( v23 != -1073740748 )
      return (unsigned int)v23;
    v5 = v48;
    a2 = v53;
    v6 = a3;
  }
  ExFreePoolWithTag(v19, 0);
  v34 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v44 = 0LL;
  v37 = -1LL;
  v38 = 0LL;
  do
  {
    if ( (unsigned int)v38 == v31 )
    {
      if ( !v36 )
        break;
    }
    else
    {
      if ( !v36 )
      {
        v37 = *((_QWORD *)v32 + v38);
        v36 = 1LL;
        goto LABEL_78;
      }
      v34 = v44;
      if ( *((_QWORD *)v32 + v38 - 1) + 1LL == *((_QWORD *)v32 + v38) )
      {
        ++v36;
        goto LABEL_79;
      }
    }
    if ( v37 >= 0 )
    {
      if ( v35 >= 0 )
      {
        v48 = v37 << 12;
        v46 = v36 << 12;
        v39 = MiAddPhysicalMemory(&MiSystemPartition, &v48, &v46, 2);
        if ( v39 < 0 || v46 == v36 << 12 )
        {
          v35 = v39;
          if ( v39 >= 0 )
            goto LABEL_76;
        }
        else
        {
          MiRemovePhysicalMemory(v37, v46 >> 12, 18);
          v35 = -1073741585;
        }
        v40 = (unsigned int)v38 - v36;
        v36 = 0LL;
        LODWORD(v38) = -1;
        v34 = (unsigned __int64)v32 + 8 * v40;
        v44 = v34;
        goto LABEL_79;
      }
      if ( (unsigned __int64)v32 + 8 * v38 <= v34 )
        MiRemovePhysicalMemory(v37, v36, 18);
LABEL_76:
      if ( (unsigned int)v38 == v31 )
        break;
      v36 = 0LL;
      LODWORD(v38) = v38 - 1;
LABEL_78:
      v34 = v44;
      goto LABEL_79;
    }
    if ( v35 >= 0 || (unsigned __int64)v32 + 8 * v38 > v34 )
      goto LABEL_76;
    if ( (unsigned int)v38 == v31 )
      break;
    v36 = 0LL;
    LODWORD(v38) = v38 - 1;
LABEL_79:
    v38 = (unsigned int)(v38 + 1);
  }
  while ( (unsigned int)v38 <= v31 );
  if ( v35 < 0 )
    goto LABEL_96;
  memset(v51, 0, 0x30uLL);
  if ( v32 )
  {
    if ( (a5 & 1) != 0 && (v42[14] & 0x20) == 0 )
    {
      v51[4] = a3;
      v51[3] = 4LL;
      v51[5] = v31;
      MiUpdateSystemProtoPtesTree((__int64)v51, 1);
    }
    MiBuildFileOnlyProtos((__int64)v32, v31, BugCheckParameter2, a3);
  }
  if ( (a5 & 1) != 0 )
  {
    MiSetSubsectionBase((__int64 *)BugCheckParameter2, a3, v45);
    if ( v51[4] )
    {
      MiReplaceSystemProtoPtesNode(v51, (_QWORD *)(BugCheckParameter2 + 112));
      goto LABEL_96;
    }
    v41 = v42;
    if ( (v42[14] & 0x20) == 0 )
    {
      MiUpdateSystemProtoPtesTree(BugCheckParameter2 + 112, 1);
      goto LABEL_96;
    }
  }
  else
  {
LABEL_96:
    v41 = v42;
  }
  if ( v43 != 1 || (v41[14] & 2) == 0 )
    MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v50, a4, 0);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  return (unsigned int)v35;
}
