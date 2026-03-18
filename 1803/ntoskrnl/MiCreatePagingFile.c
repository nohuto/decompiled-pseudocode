/*
 * XREFs of MiCreatePagingFile @ 0x14063BE50
 * Callers:
 *     NtManagePartition @ 0x1405121CC (NtManagePartition.c)
 *     NtCreatePagingFile @ 0x14063BE18 (NtCreatePagingFile.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x14017DC60 (MiIncreaseCommitLimits.c)
 *     MiReservePageHash @ 0x14017E168 (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x14017E1F8 (MiCheckPageFileMapping.c)
 *     ZwSetInformationFile @ 0x1401A79A0 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x1401AA8A0 (ZwSetSecurityObject.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x14025F1AC (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x14025F210 (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x14025F94C (MiIssuePageExtendRequest.c)
 *     MiReduceCommitLimits @ 0x140265970 (MiReduceCommitLimits.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     MiEnablePartitionMappedWrites @ 0x1404BEC88 (MiEnablePartitionMappedWrites.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     IoCreateFile @ 0x1404F1130 (IoCreateFile.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140613450 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x14063C7A8 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14063CCAC (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x14063CD20 (MiZeroPageFileFirstPage.c)
 *     IoInitializeCrashDump @ 0x14063CE44 (IoInitializeCrashDump.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 *     SmpSystemStoreCreate @ 0x140650800 (SmpSystemStoreCreate.c)
 *     MiDeletePagefile @ 0x14074E938 (MiDeletePagefile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  PVOID v13; // r15
  unsigned __int16 v14; // cx
  char *v15; // r8
  int Acl; // r14d
  ULONG v17; // esi
  ULONG v18; // esi
  ACL *v19; // rax
  unsigned int v20; // esi
  __int64 v21; // rdi
  struct _FILE_OBJECT *v22; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 Pagefile; // rax
  __int64 v27; // rbx
  int inserted; // edi
  __int64 v30; // r15
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned int v36; // r12d
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r13
  volatile signed __int64 *v40; // rsi
  char v41; // al
  ULONG_PTR v42; // r12
  __int64 PageFileSpaceBitmaps; // rax
  int v44; // eax
  unsigned int v45; // [rsp+70h] [rbp-118h]
  __int64 v46; // [rsp+78h] [rbp-110h]
  HANDLE FileHandle; // [rsp+80h] [rbp-108h] BYREF
  struct _KTHREAD *v48; // [rsp+88h] [rbp-100h]
  void *Src[2]; // [rsp+90h] [rbp-F8h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+A0h] [rbp-E8h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-E0h]
  PVOID P; // [rsp+B0h] [rbp-D8h]
  PVOID v53; // [rsp+B8h] [rbp-D0h] BYREF
  unsigned __int64 v54; // [rsp+C0h] [rbp-C8h]
  PVOID v55; // [rsp+C8h] [rbp-C0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+E0h] [rbp-A8h] BYREF
  unsigned __int64 FileInformation; // [rsp+E8h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-88h] BYREF
  __int128 v62; // [rsp+130h] [rbp-58h]
  _BYTE SecurityDescriptor[48]; // [rsp+140h] [rbp-48h] BYREF

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
  v54 = v11;
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
  v46 = 0LL;
  FileHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl < 0 )
    goto LABEL_86;
  v17 = RtlLengthSid(SeAliasAdminsSid);
  v18 = RtlLengthSid(SeLocalSystemSid) + 32 + v17;
  v19 = (ACL *)ExAllocatePoolWithTag(PagedPool, v18, 0x6C636144u);
  Dacl = v19;
  if ( !v19 )
  {
    Acl = -1073741670;
    goto LABEL_86;
  }
  Acl = RtlCreateAcl(v19, v18, 2u);
  if ( Acl < 0
    || (Acl = RtlpAddKnownAce(Dacl, 2u, 0, 2032127, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
    || (Acl = RtlpAddKnownAce(Dacl, 2u, 0, 2032127, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0), Acl < 0) )
  {
LABEL_86:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_88;
  }
  if ( a5 < 0 )
  {
    v20 = 3;
  }
  else
  {
    v20 = 0;
    if ( (a5 & 0x2000000) != 0 )
      v20 = 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  FileInformation = (QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v21 = 0LL;
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
              v55 = Object;
              if ( Acl >= 0 )
              {
                DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object)->DeviceType;
                if ( (unsigned int)DeviceType > 0x36 || (v24 = 0x60000000100100LL, !_bittest64(&v24, DeviceType)) )
                {
                  Acl = -1073741489;
                  goto LABEL_84;
                }
                Acl = MiCheckPageFileMapping((__int64)v22);
                if ( Acl < 0 )
                  goto LABEL_84;
                Acl = IopQueryXxxInformation(v22, 4u, 8u, 0, (struct _IRP *)&v60, &v57, 0);
                if ( Acl < 0 )
                  goto LABEL_84;
                if ( (v60 & 0x400000000LL) != 0 )
                {
                  Acl = -1073741468;
                  goto LABEL_84;
                }
                Acl = PiPagePathSetState(v22);
                if ( Acl >= 0 )
                {
                  FsRtlIssueFileNotificationFsctl(v22, v25, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
                  if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                  {
                    Acl = MiZeroPageFileFirstPage(v22);
                    if ( Acl < 0 )
                    {
                      PiPagePathSetState(v22);
                      goto LABEL_84;
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
                  v27 = Pagefile;
                  if ( Pagefile )
                  {
                    inserted = MiInsertPageFileInList(Pagefile);
                    if ( inserted < 0 )
                    {
                      MiDeletePagefile((PVOID)v27);
                      return (unsigned int)inserted;
                    }
                    else
                    {
                      if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                      {
                        if ( (*(_BYTE *)(v27 + 204) & 0xF) == 0 && (dword_140466180 & 3) != 0 )
                          SmpSystemStoreCreate();
                        if ( !byte_1403CBDA0 && (*(_BYTE *)(v27 + 204) & 0x10) == 0 )
                        {
                          v62 = *(_OWORD *)(v27 + 96);
                          byte_1403CBDA0 = IoInitializeCrashDump(FileHandle);
                        }
                      }
                      return 0LL;
                    }
                  }
                  return 3221225626LL;
                }
LABEL_84:
                if ( v55 )
                  ObfDereferenceObject(v55);
              }
            }
          }
        }
      }
    }
    goto LABEL_86;
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
    Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v53, 0LL);
    v55 = v53;
    if ( Acl >= 0 )
    {
      v30 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v48 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a6 + 1024, 0LL);
      v34 = a6;
      v35 = *(unsigned int *)(a6 + 6872);
      v36 = 0;
      v45 = 0;
      if ( !(_DWORD)v35 )
        goto LABEL_71;
      while ( 1 )
      {
        v32 = *(_QWORD *)(v34 + 8LL * v36 + 6880);
        v33 = *(unsigned __int16 *)(v32 + 204);
        if ( (v33 & 0x40) == 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v32 + 56) + 40LL) == *((_QWORD *)v53 + 5) )
          {
            if ( ((~(_WORD)v33 & 0x10) != 0) != ((v20 & 1) == 0) )
            {
              Acl = -1073741811;
              goto LABEL_80;
            }
            v30 = *(_QWORD *)(v34 + 8LL * v36 + 6880);
LABEL_71:
            if ( !v30 )
            {
              Acl = -1073741275;
              goto LABEL_80;
            }
            v37 = v54 >> 12;
            v38 = (unsigned __int64)AllocationSize.QuadPart >> 12;
            v39 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
            if ( *(_QWORD *)(v30 + 16) > v39 )
            {
              Acl = -1073741584;
            }
            else
            {
              v32 = *(_QWORD *)(v30 + 8);
              if ( (unsigned int)v37 < v32 )
              {
                Acl = -1073741583;
              }
              else
              {
                if ( (unsigned int)v37 <= v32 )
                  goto LABEL_75;
                v42 = 0LL;
                if ( (*(_BYTE *)(v30 + 204) & 0x10) == 0 )
                {
                  v46 = (unsigned int)v37 - v32;
                  if ( !(unsigned int)MiIncreaseCommitLimits(a6, 0LL, v46, 0, 0LL) )
                  {
                    v21 = 0LL;
                    Acl = -1073741583;
LABEL_79:
                    CurrentThread = v48;
LABEL_80:
                    v40 = (volatile signed __int64 *)(a6 + 1024);
                    v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a6 + 1024), 0xFFFFFFFFFFFFFFFFuLL);
                    if ( (v41 & 2) != 0 && (v41 & 4) == 0 )
                      ExfTryToWakePushLock(v40, v32, v33, v35);
                    KeAbPostRelease((ULONG_PTR)v40);
                    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                    if ( v21 )
                      MiReduceCommitLimits((_QWORD *)a6, 0LL, v21);
                    v13 = P;
                    goto LABEL_84;
                  }
                }
                if ( (!*(_QWORD *)(v30 + 216) || (v42 = MiReservePageHash(v37)) != 0)
                  && (PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v37)) != 0 )
                {
                  MiExtendPagingFileMaximum((_QWORD *)v30, PageFileSpaceBitmaps, v42);
                  if ( (unsigned __int64)(*(_QWORD *)(a6 + 7400) + 100LL) > *(_QWORD *)(a6 + 7528)
                    && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0) == 1 )
                  {
                    MiReturnCommit(a6, 0xC8uLL);
                  }
                  v36 = v45;
LABEL_75:
                  if ( v39 > *(_QWORD *)(v30 + 16) )
                  {
                    while ( v39 <= *(_QWORD *)v30 )
                    {
                      if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum((unsigned __int64 *)v30, v38) == 1 )
                        goto LABEL_76;
                    }
                    MiIssuePageExtendRequest(a6, v39 - *(_QWORD *)v30, 1LL, v36);
                    v44 = Acl;
                    if ( *(_QWORD *)(v30 + 16) < v39 )
                      v44 = -1073741670;
                    Acl = v44;
                  }
LABEL_76:
                  if ( v20 >= 2 )
                    *(_WORD *)(v30 + 204) |= 0x80u;
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
            v21 = v46;
            goto LABEL_79;
          }
          v34 = a6;
        }
        v45 = ++v36;
        if ( v36 >= (unsigned int)v35 )
          goto LABEL_71;
      }
    }
    goto LABEL_86;
  }
LABEL_88:
  if ( Dacl )
    ExFreePoolWithTag(Dacl, 0);
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)Acl;
}
