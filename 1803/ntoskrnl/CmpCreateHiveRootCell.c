/*
 * XREFs of CmpCreateHiveRootCell @ 0x14064F024
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140221EE4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140498080 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpCopyName @ 0x1405157EC (CmpCopyName.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     SeAssignSecurity @ 0x140516CC0 (SeAssignSecurity.c)
 *     CmpNameSize @ 0x140560BD4 (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x14056A020 (SeDeassignSecurity.c)
 *     CmpRecordParseFailure @ 0x14056D188 (CmpRecordParseFailure.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  signed __int64 *v6; // r12
  unsigned int v9; // edi
  unsigned int v10; // ebx
  _WORD *v11; // rbx
  _DWORD *v12; // r15
  unsigned __int16 v13; // ax
  NTSTATUS v14; // eax
  int SecurityDescriptorNode; // esi
  PSECURITY_DESCRIPTOR v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  char v24; // al
  unsigned int v25; // ecx
  __int64 v26; // rbx
  void *v27; // rcx
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+40h] [rbp-20h] BYREF
  void *v30; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int Cell; // [rsp+A0h] [rbp+40h]

  v30 = 0LL;
  NewDescriptor = 0LL;
  v6 = (signed __int64 *)(BugCheckParameter2 + 72);
  v31[0] = 0xFFFFFFFFLL;
  ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
  v9 = (unsigned __int16)CmpNameSize(a3) + 76;
  Cell = HvAllocateCell(BugCheckParameter2, v9, 0LL, (__int64)&v30, (__int64)v31);
  v10 = Cell;
  if ( Cell == -1 )
  {
    SecurityDescriptorNode = -1073741670;
    CmpRecordParseFailure(a4, 196864, -1073741670);
    v12 = v30;
    goto LABEL_21;
  }
  v11 = v30;
  memset(v30, 0, v9);
  *(_DWORD *)v11 = 813934;
  v12 = v30;
  *(_QWORD *)((char *)v30 + 4) = MEMORY[0xFFFFF78000000014];
  v12[4] = -1;
  v12[7] = -1;
  v12[8] = -1;
  v12[10] = -1;
  v12[11] = -1;
  v12[12] = -1;
  v13 = CmpCopyName((_BYTE *)v12 + 76, (const void **)a3);
  *((_WORD *)v12 + 36) = v13;
  if ( v13 < *a3 )
    v11[1] |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0 )
  {
    NewDescriptor = CmpGenerateAppHiveSecurityDescriptor(a2 + 32);
    v16 = NewDescriptor;
    if ( !NewDescriptor )
    {
      SecurityDescriptorNode = -1073741670;
      CmpRecordParseFailure(a4, 197120, -1073741670);
LABEL_20:
      v10 = Cell;
      goto LABEL_21;
    }
  }
  else
  {
    v14 = SeAssignSecurity(
            0LL,
            *(PSECURITY_DESCRIPTOR *)(a2 + 64),
            &NewDescriptor,
            1u,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            *((POOL_TYPE *)CmKeyObjectType + 25));
    SecurityDescriptorNode = v14;
    if ( v14 < 0 )
    {
      CmpRecordParseFailure(a4, 197376, v14);
      v10 = Cell;
LABEL_12:
      v16 = NewDescriptor;
      goto LABEL_13;
    }
    v16 = NewDescriptor;
  }
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1776, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(BugCheckParameter2, Cell, (__int64)v12, v16, 0, v12 + 11);
  ExReleasePushLockEx(BugCheckParameter2 + 1776, 0LL, v17, v18);
  if ( SecurityDescriptorNode >= 0 )
  {
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a4 + 48) + 80LL, 0LL);
    HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
    v19 = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
    v23 = *(_QWORD *)(a4 + 48);
    SecurityDescriptorNode = v19;
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 80), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v23 + 80), v20, v21, v22);
    KeAbPostRelease(v23 + 80);
    if ( SecurityDescriptorNode < 0 )
    {
      CmpRecordParseFailure(a4, 197888, SecurityDescriptorNode);
      v10 = Cell;
    }
    else
    {
      v10 = -1;
      v25 = Cell;
      SecurityDescriptorNode = 0;
      Cell = -1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) = v25;
      *a5 = v25;
    }
    v12 = v30;
    goto LABEL_12;
  }
  CmpRecordParseFailure(a4, 197632, SecurityDescriptorNode);
  v10 = Cell;
LABEL_13:
  if ( !v16 )
    goto LABEL_21;
  if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0 )
  {
    ExFreePoolWithTag(v16, 0);
  }
  else
  {
    if ( (*(_DWORD *)a4 & 1) == 0 || (*(_DWORD *)(a4 + 24) & 4) == 0 )
    {
      v26 = *(_QWORD *)(a2 + 72);
      v27 = *(void **)(v26 + 48);
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(v26 + 48) = v16;
      goto LABEL_20;
    }
    SeDeassignSecurity(&NewDescriptor);
  }
LABEL_21:
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, _QWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
  if ( v10 != -1 )
    HvFreeCell(BugCheckParameter2, v10);
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return (unsigned int)SecurityDescriptorNode;
}
