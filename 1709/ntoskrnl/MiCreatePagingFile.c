/*
 * XREFs of MiCreatePagingFile @ 0x1405D3FF0
 * Callers:
 *     NtManagePartition @ 0x1404FC278 (NtManagePartition.c)
 *     NtCreatePagingFile @ 0x1405D3FB8 (NtCreatePagingFile.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiIncreaseCommitLimits @ 0x14014FD74 (MiIncreaseCommitLimits.c)
 *     MiReservePageHash @ 0x1401501B4 (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x140150244 (MiCheckPageFileMapping.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x140180C60 (ZwSetSecurityObject.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiReduceCommitLimits @ 0x1402223B4 (MiReduceCommitLimits.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x140224DC8 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x14022501C (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x1402266AC (MiIssuePageExtendRequest.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     MiEnablePartitionMappedWrites @ 0x1404F9CA4 (MiEnablePartitionMappedWrites.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     IoCreateFile @ 0x140583760 (IoCreateFile.c)
 *     IoInitializeCrashDump @ 0x1405D46BC (IoInitializeCrashDump.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1405D4884 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x1405D4984 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405D4DF4 (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x1405D4E68 (MiZeroPageFileFirstPage.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 *     SmpSystemStoreCreate @ 0x140739E04 (SmpSystemStoreCreate.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6)
{
  __int64 QuadPart; // rdi
  unsigned __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  void *v13; // r14
  unsigned __int16 v14; // cx
  char *v15; // r8
  __int64 v16; // r14
  int Acl; // r15d
  ULONG v18; // esi
  ULONG v19; // esi
  ACL *v20; // rax
  unsigned int v21; // esi
  struct _FILE_OBJECT *v22; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v24; // rax
  __int64 Pagefile; // rax
  __int64 v26; // rbx
  int inserted; // edi
  __int64 v29; // r13
  struct _KTHREAD *CurrentThread; // r12
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // r9d
  unsigned int v34; // r11d
  __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rdx
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v41; // rbx
  int v42; // eax
  volatile signed __int64 *v43; // rsi
  HANDLE FileHandle; // [rsp+70h] [rbp-128h] BYREF
  __int64 v45; // [rsp+78h] [rbp-120h]
  struct _KTHREAD *v46; // [rsp+80h] [rbp-118h]
  void *Src[2]; // [rsp+88h] [rbp-110h] BYREF
  unsigned int v48; // [rsp+98h] [rbp-100h]
  LARGE_INTEGER AllocationSize; // [rsp+A0h] [rbp-F8h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-F0h]
  PVOID v51; // [rsp+B0h] [rbp-E8h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp-E0h]
  ULONG_PTR v53; // [rsp+C0h] [rbp-D8h]
  PVOID v54; // [rsp+C8h] [rbp-D0h]
  PVOID P; // [rsp+D0h] [rbp-C8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-B0h] BYREF
  unsigned __int64 FileInformation; // [rsp+F0h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+100h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-90h] BYREF
  __int128 v62; // [rsp+140h] [rbp-58h]
  _BYTE SecurityDescriptor[48]; // [rsp+150h] [rbp-48h] BYREF

  Dacl = 0LL;
  if ( (ULONG_PTR *)a6 != &MiSystemPartition && a5 || (a5 & 0xFFFFFF) != 0 || a5 < 0 && (a5 & 0x42000000) != 0 )
    return 3221225714LL;
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePagefilePrivilege, a4) || PsIsCurrentThreadInServerSilo() )
      return 3221225569LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = a2->QuadPart;
    AllocationSize.QuadPart = QuadPart;
  }
  else
  {
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  if ( (unsigned __int64)QuadPart > 0xFFFFFFFE000LL || QuadPart < 0x100000 )
    return 3221225712LL;
  v11 = *a3;
  v52 = v11;
  if ( v11 > 0xFFFFFFFE000LL || QuadPart > (__int64)v11 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x20206D4Du);
  v13 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( a4 )
  {
    v14 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) )
    {
      v15 = (char *)Src[1] + LOWORD(Src[0]);
      if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < Src[1] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v14 = (unsigned __int16)Src[0];
      }
    }
    memmove(PoolWithTag, Src[1], v14);
  }
  else
  {
    memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v13;
  v16 = 0LL;
  v45 = 0LL;
  FileHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl < 0 )
    goto LABEL_123;
  v18 = RtlLengthSid(SeAliasAdminsSid);
  v19 = RtlLengthSid(SeLocalSystemSid) + 32 + v18;
  v20 = (ACL *)ExAllocatePoolWithTag(PagedPool, v19, 0x6C636144u);
  Dacl = v20;
  if ( !v20 )
  {
    Acl = -1073741670;
    goto LABEL_123;
  }
  Acl = RtlCreateAcl(v20, v19, 2u);
  if ( Acl < 0
    || (Acl = RtlpAddKnownAce(Dacl, 2u, 0, 2032127, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
    || (Acl = RtlpAddKnownAce(Dacl, 2u, 0, 2032127, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0), Acl < 0) )
  {
LABEL_123:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_125;
  }
  if ( a5 < 0 )
  {
    v21 = 3;
  }
  else
  {
    v21 = 0;
    if ( (a5 & 0x2000000) != 0 )
      v21 = 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  FileInformation = (QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( IoCreateFile(
         &FileHandle,
         0x140003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         6u,
         2u,
         0,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x112u) >= 0 )
  {
    Acl = MiEnablePartitionMappedWrites((_QWORD *)a6);
    if ( Acl >= 0 )
    {
      if ( IoStatusBlock.Status < 0 || (Acl = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor), Acl >= 0) )
      {
        ExFreePoolWithTag(Dacl, 0);
        Dacl = 0LL;
        Acl = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 )
        {
          Acl = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
          if ( Acl >= 0 )
          {
            Acl = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
              v22 = (struct _FILE_OBJECT *)Object;
              v54 = Object;
              if ( Acl >= 0 )
              {
                DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object)->DeviceType;
                if ( (unsigned int)DeviceType > 0x36 || (v24 = 0x60000000100100LL, !_bittest64(&v24, DeviceType)) )
                {
                  Acl = -1073741489;
                  goto LABEL_121;
                }
                Acl = MiCheckPageFileMapping((__int64)v22);
                if ( Acl < 0 )
                  goto LABEL_121;
                Acl = IopQueryXxxInformation(v22, 4, 8, 0, (__int64)&v60, &v57, 0);
                if ( Acl < 0 )
                  goto LABEL_121;
                if ( (v60 & 0x400000000LL) != 0 )
                {
                  Acl = -1073741468;
                  goto LABEL_121;
                }
                Acl = PiPagePathSetState(v22);
                if ( Acl >= 0 )
                {
                  FsRtlIssueFileNotificationFsctl(v22);
                  if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                  {
                    Acl = MiZeroPageFileFirstPage(v22);
                    if ( Acl < 0 )
                    {
                      PiPagePathSetState(v22);
                      goto LABEL_121;
                    }
                  }
                  Pagefile = MiCreatePagefile(
                               a6,
                               (_DWORD)v22,
                               (_DWORD)FileHandle,
                               (unsigned __int64)AllocationSize.QuadPart >> 12,
                               v11 >> 12,
                               (__int64)Src,
                               a5,
                               1);
                  v26 = Pagefile;
                  if ( Pagefile )
                  {
                    inserted = MiInsertPageFileInList(Pagefile);
                    if ( inserted < 0 )
                    {
                      MiDeletePagefile((PVOID)v26);
                      return (unsigned int)inserted;
                    }
                    else
                    {
                      if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                      {
                        if ( (*(_BYTE *)(v26 + 204) & 0xF) == 0 && (dword_14041B170 & 3) != 0 )
                          SmpSystemStoreCreate();
                        if ( !byte_140388B08 && (*(_BYTE *)(v26 + 204) & 0x10) == 0 )
                        {
                          v62 = *(_OWORD *)(v26 + 96);
                          byte_140388B08 = IoInitializeCrashDump(FileHandle);
                        }
                      }
                      return 0LL;
                    }
                  }
                  return 3221225626LL;
                }
LABEL_121:
                if ( v54 )
                  ObfDereferenceObject(v54);
              }
            }
          }
        }
      }
    }
    goto LABEL_123;
  }
  Acl = IoCreateFile(
          &FileHandle,
          0x100002u,
          &ObjectAttributes,
          &IoStatusBlock,
          &AllocationSize,
          6u,
          3u,
          1u,
          0x8008u,
          0LL,
          0,
          CreateFileTypeNone,
          0LL,
          0x112u);
  if ( Acl >= 0 )
  {
    Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v51, 0LL);
    v54 = v51;
    if ( Acl >= 0 )
    {
      v29 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v46 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a6 + 1024, 0LL);
      v32 = a6;
      v33 = *(_DWORD *)(a6 + 5784);
      v34 = 0;
      v48 = 0;
      if ( !v33 )
        goto LABEL_87;
      while ( 1 )
      {
        v35 = *(_QWORD *)(v32 + 8LL * v34 + 5792);
        v31 = *(unsigned __int16 *)(v35 + 204);
        if ( (v31 & 0x40) == 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v35 + 56) + 40LL) == *((_QWORD *)v51 + 5) )
          {
            if ( ((~(_WORD)v31 & 0x10) != 0) != ((v21 & 1) == 0) )
            {
              Acl = -1073741811;
              goto LABEL_117;
            }
            v29 = *(_QWORD *)(v32 + 8LL * v34 + 5792);
LABEL_87:
            if ( !v29 )
            {
              Acl = -1073741275;
              goto LABEL_117;
            }
            v36 = v52 >> 12;
            v37 = (unsigned __int64)AllocationSize.QuadPart >> 12;
            v38 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
            if ( *(_QWORD *)(v29 + 16) > v38 )
            {
              Acl = -1073741584;
              goto LABEL_115;
            }
            v39 = *(_QWORD *)(v29 + 8);
            if ( (unsigned int)v36 < v39 )
            {
              Acl = -1073741583;
              goto LABEL_115;
            }
            if ( (unsigned int)v36 <= v39 )
              goto LABEL_105;
            if ( (*(_BYTE *)(v29 + 204) & 0x10) == 0 )
            {
              v45 = (unsigned int)v36 - v39;
              if ( !(unsigned int)MiIncreaseCommitLimits(a6, 0LL, v45, 0, 0LL) )
              {
                v16 = 0LL;
                Acl = -1073741583;
                goto LABEL_116;
              }
            }
            v53 = 0LL;
            if ( *(_QWORD *)(v29 + 216) && (v53 = MiReservePageHash(v36, v39, v31)) == 0
              || (PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v36)) == 0 )
            {
              Acl = -1073741670;
              goto LABEL_115;
            }
            MiExtendPagingFileMaximum((_QWORD *)v29, PageFileSpaceBitmaps, v53);
            if ( (unsigned __int64)(*(_QWORD *)(a6 + 6320) + 100LL) <= *(_QWORD *)(a6 + 6440) )
            {
              v41 = a6;
            }
            else
            {
              if ( (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0LL, a6) == 1 )
              {
                v41 = a6;
                MiReturnCommit(a6, 0xC8uLL);
                goto LABEL_106;
              }
LABEL_105:
              v41 = a6;
            }
LABEL_106:
            if ( v38 > *(_QWORD *)(v29 + 16) )
            {
              while ( v38 <= *(_QWORD *)v29 )
              {
                if ( MiCheckAndUpdatePagingFileMinimum((unsigned __int64 *)v29, v37) )
                  goto LABEL_113;
              }
              MiIssuePageExtendRequest(v41, v38 - *(_QWORD *)v29, 1LL, v48);
              v42 = Acl;
              if ( *(_QWORD *)(v29 + 16) < v38 )
                v42 = -1073741670;
              Acl = v42;
            }
LABEL_113:
            if ( v21 >= 2 )
              *(_WORD *)(v29 + 204) |= 0x80u;
LABEL_115:
            v16 = v45;
LABEL_116:
            CurrentThread = v46;
LABEL_117:
            v43 = (volatile signed __int64 *)(a6 + 1024);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a6 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v43);
            KeAbPostRelease((ULONG_PTR)v43);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            if ( v16 )
              MiReduceCommitLimits((_QWORD *)a6, 0LL, v16);
            goto LABEL_121;
          }
          v32 = a6;
        }
        v48 = ++v34;
        if ( v34 >= v33 )
          goto LABEL_87;
      }
    }
    goto LABEL_123;
  }
LABEL_125:
  if ( Dacl )
    ExFreePoolWithTag(Dacl, 0);
  ExFreePoolWithTag(P, 0);
  return (unsigned int)Acl;
}
