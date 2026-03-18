/*
 * XREFs of CmpCreateHiveRootCell @ 0x1405D06F4
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401DF718 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14043A5F4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpRecordParseFailure @ 0x140444E0C (CmpRecordParseFailure.c)
 *     SeDeassignSecurity @ 0x140449CF0 (SeDeassignSecurity.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpCopyName @ 0x140491A0C (CmpCopyName.c)
 *     CmpNameSize @ 0x140491A5C (CmpNameSize.c)
 *     SeAssignSecurity @ 0x1404D1000 (SeAssignSecurity.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
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
  NTSTATUS v16; // eax
  int SecurityDescriptorNode; // edi
  PSECURITY_DESCRIPTOR v18; // r15
  __int64 v19; // rbx
  void *v20; // rcx
  int v22; // edx
  void *v23; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-8h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+90h] [rbp+40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *v26; // [rsp+98h] [rbp+48h]

  v26 = a2;
  v23 = 0LL;
  HvpGetCellContextReinitialize((__int64)v24);
  v9 = *(struct _ERESOURCE **)(BugCheckParameter2 + 2848);
  NewDescriptor = 0LL;
  ExAcquireResourceSharedLite(v9, 1u);
  v10 = (unsigned __int16)CmpNameSize(a3) + 76;
  Cell = HvAllocateCell(BugCheckParameter2, v10, 0LL, (__int64)&v23, (__int64)v24);
  if ( Cell == -1 )
  {
    SecurityDescriptorNode = -1073741670;
    CmpRecordParseFailure(a4, 196864, -1073741670);
    v14 = v23;
    goto LABEL_17;
  }
  v12 = v10;
  v13 = v23;
  memset(v23, 0, v12);
  *(_DWORD *)v13 = 813934;
  v14 = v23;
  *(_QWORD *)((char *)v23 + 4) = MEMORY[0xFFFFF78000000014];
  v14[4] = -1;
  v14[7] = -1;
  v14[8] = -1;
  v14[10] = -1;
  v14[11] = -1;
  v14[12] = -1;
  v15 = CmpCopyName((_BYTE *)v14 + 76, (const void **)a3);
  *((_WORD *)v14 + 36) = v15;
  if ( v15 < *a3 )
    v13[1] |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
  {
    NewDescriptor = CmpGenerateAppHiveSecurityDescriptor();
    v18 = NewDescriptor;
    if ( !NewDescriptor )
    {
      SecurityDescriptorNode = -1073741670;
      CmpRecordParseFailure(a4, 197120, -1073741670);
      goto LABEL_17;
    }
  }
  else
  {
    v16 = SeAssignSecurity(
            0LL,
            a2[2].ClientToken,
            &NewDescriptor,
            1u,
            a2 + 1,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            *((POOL_TYPE *)CmKeyObjectType + 25));
    SecurityDescriptorNode = v16;
    if ( v16 < 0 )
    {
      CmpRecordParseFailure(a4, 197376, v16);
      v18 = NewDescriptor;
      goto LABEL_10;
    }
    v18 = NewDescriptor;
  }
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 2952, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(BugCheckParameter2, Cell, (__int64)v14, v18, 0, v14 + 11);
  ExReleasePushLockEx(BugCheckParameter2 + 2952, 0LL);
  if ( SecurityDescriptorNode < 0 )
  {
    v22 = 197632;
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
    v22 = 197888;
  }
  CmpRecordParseFailure(a4, v22, SecurityDescriptorNode);
LABEL_10:
  if ( v18 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
    {
      ExFreePoolWithTag(v18, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v19 = *(_QWORD *)&v26[2].ImpersonationLevel;
      v20 = *(void **)(v19 + 48);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(v19 + 48) = v18;
    }
  }
LABEL_17:
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
  if ( Cell != -1 )
    HvFreeCell(BugCheckParameter2, Cell);
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  return (unsigned int)SecurityDescriptorNode;
}
