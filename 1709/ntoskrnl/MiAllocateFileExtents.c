/*
 * XREFs of MiAllocateFileExtents @ 0x1406E3904
 * Callers:
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiUpdateActiveSubsection @ 0x14021F954 (MiUpdateActiveSubsection.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x1406E430C (MiInitializeImageExtents.c)
 * Callees:
 *     MiEndingOffset @ 0x14002B178 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MiSetSubsectionBase @ 0x140110918 (MiSetSubsectionBase.c)
 *     FsRtlGetFileExtents @ 0x1401E6CEC (FsRtlGetFileExtents.c)
 *     MiBuildFileOnlyProtos @ 0x140222428 (MiBuildFileOnlyProtos.c)
 *     MiChangingSubsectionProtos @ 0x1402224DC (MiChangingSubsectionProtos.c)
 *     MiEliminateStaleExtents @ 0x140222B30 (MiEliminateStaleExtents.c)
 *     MiSubsectionProtosCreated @ 0x140223D6C (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x140223E58 (MiUnlinkSubsectionWaitBlock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 *     MiAddFileOnlyPfns @ 0x1406E388C (MiAddFileOnlyPfns.c)
 *     MiConvertRunsToPages @ 0x1406E3F98 (MiConvertRunsToPages.c)
 */

__int64 __fastcall MiAllocateFileExtents(ULONG_PTR BugCheckParameter2, unsigned int a2, ULONG_PTR a3, int a4, char a5)
{
  unsigned __int64 v5; // rax
  _DWORD *v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // r15
  int v12; // r14d
  unsigned int v13; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // rdi
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
  unsigned __int64 v28; // r12
  _QWORD *v29; // rbx
  int v30; // r14d
  bool v31; // zf
  unsigned __int64 v32; // rcx
  int v33; // r13d
  unsigned __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r15
  unsigned __int64 v37; // r14
  unsigned int v38; // [rsp+30h] [rbp-98h]
  struct _FILE_OBJECT *v39; // [rsp+38h] [rbp-90h]
  unsigned __int64 v40; // [rsp+38h] [rbp-90h]
  __int64 v41; // [rsp+40h] [rbp-88h]
  unsigned int v42; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-78h]
  unsigned __int64 v44; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v45; // [rsp+60h] [rbp-68h]
  _BYTE v46[96]; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp+10h]

  v48 = a2;
  v43 = 0LL;
  v5 = (unsigned int)(a4 << 12);
  v45 = v5;
  while ( 1 )
  {
    v7 = *(_DWORD **)BugCheckParameter2;
    v8 = v5;
    v41 = *(_QWORD *)BugCheckParameter2;
    if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x20) != 0 )
    {
      v38 = 1;
      v9 = MiStartingOffset((__int64 *)BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 8), 0);
      v10 = MiEndingOffset(BugCheckParameter2);
      v43 = v10;
      if ( v9 == v10 && !v9 )
        return 0LL;
      if ( v9 + v8 > v10 )
        v8 = ((unsigned int)(v10 - v9) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
    }
    else
    {
      v38 = 2;
      v9 = (a2
          + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
    }
    v11 = MiReferenceControlAreaFile((__int64)v7);
    v39 = (struct _FILE_OBJECT *)v11;
    v12 = (__rdtsc() >> 4) & 7;
    if ( !v12 )
      v12 = 1;
    v13 = v12 + 8;
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (v13 - 1) + 24, 0x6546694Du);
      v15 = PoolWithTag;
      if ( PoolWithTag )
        break;
      v13 >>= 1;
      if ( !v13 )
      {
        MiDereferenceControlAreaFile((__int64)v7, v11);
        return 3221225626LL;
      }
    }
    PoolWithTag[1] = 0;
    *PoolWithTag = v13;
    while ( 1 )
    {
      v17 = v38;
      v18 = 0;
      if ( v38 == 1 )
      {
        if ( v9 + v8 > v43 )
          v8 = (unsigned int)(v43 - v9);
        v19 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v19 )
          v9 = (v19 - *(_QWORD *)(*(_QWORD *)v7 + 64LL)) >> 3;
        v9 <<= 12;
      }
      v8 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v38 != 1 || (v7[14] & 2) == 0 )
      {
        FileExtents = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v46);
        if ( FileExtents < 0 )
          goto LABEL_96;
        v18 = 1;
      }
      FileExtents = FsRtlGetFileExtents(v39, v17, v9, v8, v15);
      if ( FileExtents < 0 )
      {
LABEL_96:
        MiDereferenceControlAreaFile(v41, (unsigned __int64)v39);
        if ( v18 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v46, 0);
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
        MiDereferenceControlAreaFile(v41, (unsigned __int64)v39);
        v31 = v18 == 1;
        goto LABEL_51;
      }
      v21[1] = 0;
      v7 = (_DWORD *)v41;
      *v21 = v13;
      if ( v18 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v46, 0);
    }
    MiDereferenceControlAreaFile(v41, (unsigned __int64)v39);
    v22 = v15[1];
    v23 = 0;
    if ( v22 )
      break;
    v27 = v38;
    if ( v38 == 1 )
    {
      ExFreePoolWithTag(v15, 0);
      if ( v18 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v46, 0);
      return 3221225473LL;
    }
    v28 = 0LL;
    v29 = 0LL;
    v42 = -1;
    v44 = 0LL;
LABEL_42:
    if ( v27 == 1 && (*(_DWORD *)(v41 + 56) & 2) != 0 )
      goto LABEL_63;
    v30 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)v46);
    if ( v30 >= 0 )
    {
      if ( v29 && (a5 & 1) == 0 )
        MiEliminateStaleExtents(a3, (__int64)v29, v28);
LABEL_63:
      ExFreePoolWithTag(v15, 0);
      v32 = 0LL;
      v33 = 0;
      v34 = 0LL;
      v40 = 0LL;
      v35 = -1LL;
      v36 = 0LL;
      while ( 2 )
      {
        if ( (unsigned int)v36 == v28 )
        {
          if ( !v34 )
            goto LABEL_82;
LABEL_66:
          if ( v35 >= 0 )
          {
            if ( v33 >= 0 )
            {
              v33 = MiAddFileOnlyPfns((struct _KPRCB *)v35, v34);
              if ( v33 < 0 )
              {
                v37 = (unsigned int)v36 - v34;
                v34 = 0LL;
                LODWORD(v36) = -1;
                v32 = (unsigned __int64)&v29[v37];
                v40 = v32;
                goto LABEL_81;
              }
            }
            else if ( (unsigned __int64)&v29[v36] <= v32 )
            {
              MiRemovePhysicalMemory((struct _KPRCB *)v35, v34, 18);
            }
          }
          else if ( v33 < 0 && (unsigned __int64)&v29[v36] <= v32 )
          {
            if ( (unsigned int)v36 == v28 )
              goto LABEL_82;
            v34 = 0LL;
            LODWORD(v36) = v36 - 1;
            goto LABEL_81;
          }
          if ( (unsigned int)v36 == v28 )
            goto LABEL_82;
          v34 = 0LL;
          LODWORD(v36) = v36 - 1;
        }
        else
        {
          if ( v34 )
          {
            v32 = v40;
            if ( v29[v36 - 1] + 1LL != v29[v36] )
              goto LABEL_66;
            ++v34;
LABEL_81:
            v36 = (unsigned int)(v36 + 1);
            if ( (unsigned int)v36 > v28 )
            {
LABEL_82:
              if ( v33 >= 0 )
              {
                if ( v29 )
                  MiBuildFileOnlyProtos((__int64)v29, v28, BugCheckParameter2, a3);
                if ( (a5 & 1) != 0 )
                  MiSetSubsectionBase((__int64 *)BugCheckParameter2, a3, v42);
              }
              if ( v38 != 1 || (*(_DWORD *)(v41 + 56) & 2) == 0 )
                MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v46, a4, 0);
              if ( v29 )
                ExFreePoolWithTag(v29, 0);
              return (unsigned int)v33;
            }
            continue;
          }
          v35 = v29[v36];
          v34 = 1LL;
        }
        break;
      }
      v32 = v40;
      goto LABEL_81;
    }
    ExFreePoolWithTag(v15, 0);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    if ( v30 != -1073740748 )
      return (unsigned int)v30;
    v5 = v45;
    a2 = v48;
  }
  v24 = v15 + 4;
  while ( 1 )
  {
    v25 = *(v24 - 1);
    v26 = v25 + *v24;
    if ( v26 >= qword_140388DE0 && v25 < qword_140388DE0 + 2048 )
      break;
    if ( v26 >= 0xFFFFFFFFALL )
      break;
    ++v23;
    v24 += 2;
    if ( v23 >= v22 )
    {
      v29 = (_QWORD *)MiConvertRunsToPages(v15, &v44, &v42);
      if ( v29 )
      {
        v28 = v44;
        v27 = v38;
        goto LABEL_42;
      }
      ExFreePoolWithTag(v15, 0);
      v31 = v18 == 1;
LABEL_51:
      if ( v31 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v46, 0);
      return 3221225626LL;
    }
  }
  ExFreePoolWithTag(v15, 0);
  if ( v18 == 1 )
    MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v46, 0);
  return 3221226535LL;
}
