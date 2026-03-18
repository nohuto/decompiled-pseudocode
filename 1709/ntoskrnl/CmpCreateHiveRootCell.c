/*
 * XREFs of CmpCreateHiveRootCell @ 0x14046F4A4
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14000DEA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     HvMarkBaseBlockDirty @ 0x14046F414 (HvMarkBaseBlockDirty.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140471198 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     SeAssignSecurity @ 0x140475B00 (SeAssignSecurity.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpCopyName @ 0x140477D28 (CmpCopyName.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     CmpNameSize @ 0x1405750F8 (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x14057D4B0 (SeDeassignSecurity.c)
 *     CmpRecordParseFailure @ 0x14057F118 (CmpRecordParseFailure.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter2,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  struct _ERESOURCE *v9; // rcx
  unsigned int v10; // ebx
  unsigned int Cell; // r12d
  size_t v12; // r8
  _WORD *v13; // rbx
  _DWORD *v14; // r13
  unsigned __int16 v15; // ax
  int SecurityDescriptorNode; // edi
  PSECURITY_DESCRIPTOR v17; // r15
  __int64 v18; // rbx
  void *v19; // rcx
  __int64 v21; // rdx
  void *v22; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-8h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+90h] [rbp+40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *v25; // [rsp+98h] [rbp+48h]

  v25 = a2;
  v22 = 0LL;
  HvpGetCellContextReinitialize((__int64)v23);
  v9 = *(struct _ERESOURCE **)(BugCheckParameter2 + 2848);
  NewDescriptor = 0LL;
  ExAcquireResourceSharedLite(v9, 1u);
  v10 = (unsigned __int16)CmpNameSize(a3) + 76;
  Cell = HvAllocateCell(BugCheckParameter2, v10, 0, (unsigned int)&v22, (__int64)v23);
  if ( Cell == -1 )
  {
    SecurityDescriptorNode = -1073741670;
    CmpRecordParseFailure(a4, 196864LL);
    v14 = v22;
    goto LABEL_17;
  }
  v12 = v10;
  v13 = v22;
  memset(v22, 0, v12);
  *(_DWORD *)v13 = 813934;
  v14 = v22;
  *(_QWORD *)((char *)v22 + 4) = MEMORY[0xFFFFF78000000014];
  v14[4] = -1;
  v14[7] = -1;
  v14[8] = -1;
  v14[10] = -1;
  v14[11] = -1;
  v14[12] = -1;
  v15 = CmpCopyName(v14 + 19, a3);
  *((_WORD *)v14 + 36) = v15;
  if ( v15 < *a3 )
    v13[1] |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
  {
    NewDescriptor = CmpGenerateAppHiveSecurityDescriptor();
    v17 = NewDescriptor;
    if ( !NewDescriptor )
    {
      SecurityDescriptorNode = -1073741670;
      CmpRecordParseFailure(a4, 197120LL);
      goto LABEL_17;
    }
  }
  else
  {
    SecurityDescriptorNode = SeAssignSecurity(
                               0LL,
                               a2[2].ClientToken,
                               &NewDescriptor,
                               1u,
                               a2 + 1,
                               (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                               *((POOL_TYPE *)CmKeyObjectType + 25));
    if ( SecurityDescriptorNode < 0 )
    {
      CmpRecordParseFailure(a4, 197376LL);
      v17 = NewDescriptor;
      goto LABEL_10;
    }
    v17 = NewDescriptor;
  }
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 2952, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(BugCheckParameter2, Cell, (__int64)v14, v17, 0, v14 + 11);
  ExReleasePushLockEx(BugCheckParameter2 + 2952, 0LL);
  if ( SecurityDescriptorNode < 0 )
  {
    v21 = 197632LL;
  }
  else
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(a4 + 48) + 2840LL));
    HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
    SecurityDescriptorNode = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(a4 + 48) + 2840LL));
    if ( SecurityDescriptorNode >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) = Cell;
      *a5 = Cell;
      Cell = -1;
      SecurityDescriptorNode = 0;
      goto LABEL_10;
    }
    v21 = 197888LL;
  }
  CmpRecordParseFailure(a4, v21);
LABEL_10:
  if ( v17 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
    {
      ExFreePoolWithTag(v17, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v18 = *(_QWORD *)&v25[2].ImpersonationLevel;
      v19 = *(void **)(v18 + 48);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(v18 + 48) = v17;
    }
  }
LABEL_17:
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
  if ( Cell != -1 )
    HvFreeCell(BugCheckParameter2, Cell);
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  return (unsigned int)SecurityDescriptorNode;
}
