/*
 * XREFs of ObInitSystem @ 0x140843034
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14001908C (ObpReleaseLookupContext.c)
 *     RtlGetAce @ 0x140019210 (RtlGetAce.c)
 *     ObpLockDirectoryExclusive @ 0x140024034 (ObpLockDirectoryExclusive.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140146390 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExInitializeSystemLookasideList @ 0x1404275CC (ExInitializeSystemLookasideList.c)
 *     ExCreateHandleTable @ 0x14045DA4C (ExCreateHandleTable.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14054A4F0 (RtlSetSaclSecurityDescriptor.c)
 *     ObpInsertDirectoryEntry @ 0x140577208 (ObpInsertDirectoryEntry.c)
 *     NtCreateDirectoryObject @ 0x140579AF8 (NtCreateDirectoryObject.c)
 *     ObpInitializeRootNamespace @ 0x1405B1FD8 (ObpInitializeRootNamespace.c)
 *     ObInitializeProcessor @ 0x1405C6A20 (ObInitializeProcessor.c)
 *     ObCreateObjectType @ 0x1405C6D70 (ObCreateObjectType.c)
 *     ObpInitObjectTypeSD @ 0x1405C7398 (ObpInitObjectTypeSD.c)
 *     ObpLookupDirectoryEntry @ 0x1405C75A4 (ObpLookupDirectoryEntry.c)
 *     ObInitServerSilo @ 0x1405E6350 (ObInitServerSilo.c)
 *     RtlAddAuditAccessAce @ 0x1407206D8 (RtlAddAuditAccessAce.c)
 *     ObpInitInfoBlockOffsets @ 0x14084E1D4 (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140854E50 (ObpInitStackTrace.c)
 */

char ObInitSystem()
{
  __int16 v0; // di
  __int16 v1; // bx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // ebx
  unsigned int v6; // ebx
  char *v7; // rdi
  unsigned int v8; // eax
  _BYTE *v9; // rbx
  HANDLE v10; // rbx
  NTSTATUS v11; // eax
  _BYTE *v12; // rsi
  _BYTE *i; // rbx
  __int64 v14; // rdx
  ULONG v16; // edx
  ULONG v17; // edx
  void *v18; // r9
  _BYTE *v19; // rax
  BOOLEAN Object; // [rsp+28h] [rbp-E0h]
  BOOLEAN HandleInformation; // [rsp+30h] [rbp-D8h]
  PVOID v22; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v23[16]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Ace; // [rsp+D8h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v26; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v27; // [rsp+106h] [rbp-2h]
  int v28; // [rsp+108h] [rbp+0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+38h] BYREF
  UNICODE_STRING v31; // [rsp+150h] [rbp+48h] BYREF
  UNICODE_STRING v32; // [rsp+160h] [rbp+58h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+170h] [rbp+68h] BYREF
  ACL Acl; // [rsp+198h] [rbp+90h] BYREF

  if ( (_BYTE)dword_140400130 )
  {
    v0 = 64;
    v1 = 32;
  }
  else
  {
    v0 = 32;
    v1 = 16;
  }
  if ( !(_DWORD)InitializationPhase )
  {
    ObHeaderCookie = ExGenRandom(0);
    ExInitializeSystemLookasideList(
      (__int64)&ObpCreateInfoLookasideList,
      512,
      64,
      1766023759,
      v0,
      (__int64)&ExSystemLookasideListHead);
    ExInitializeSystemLookasideList(
      (__int64)&ObpNameBufferLookasideList,
      1,
      248,
      1833853519,
      v1,
      (__int64)&ExSystemLookasideListHead);
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = 257LL;
    ObpPendingObjectDirectoryList = 0LL;
    CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    v4 = &unk_1403681C8;
    ObpRemoveObjectList = 0LL;
    ObpRemoveObjectWait = 0LL;
    ObpPendingObjectDirectoryListLock = 0LL;
    do
    {
      *(v4 - 1) = 0LL;
      v4[1] = v4;
      *v4 = v4;
      v4 += 3;
      --v3;
    }
    while ( v3 );
    ObpDefaultObject = 0;
    qword_140367DD0 = (__int64)&qword_140367DC8;
    qword_140367DC8 = (__int64)&qword_140367DC8;
    byte_140367DC2 = 6;
    dword_140367DC4 = 1;
    ObpKernelHandleTable = ExCreateHandleTable(0LL, 1LL);
    KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5] = ObpKernelHandleTable;
    if ( !ObpKernelHandleTable )
      return 0;
    ObpRemoveObjectWorkItem.Parameter = 0LL;
    ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
    qword_140367E18 = (__int64)ObpProcessRemoveObjectDpcWorker;
    ObpRemoveObjectWorkItem.List.Flink = 0LL;
    LODWORD(ObpRemoveObjectDpc) = 275;
    qword_140367E20 = 0LL;
    qword_140367E38 = 0LL;
    qword_140367E10 = 0LL;
    ObpInitInfoBlockOffsets();
    qword_1404019E8 = (__int64)MmBadPointer;
    memset(v23, 0, 0x78uLL);
    LOWORD(v23[0]) = 120;
    LODWORD(v23[1]) = 256;
    HIDWORD(v23[4]) = 512;
    RtlInitUnicodeString(&DestinationString, L"Type");
    BYTE2(v23[0]) |= 0x24u;
    HIDWORD(v23[3]) = 983041;
    HIDWORD(v23[5]) = 216;
    *(_OWORD *)((char *)&v23[1] + 4) = ObpTypeMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v23, 0LL, (__int64)&ObpTypeObjectType) < 0 )
      return 0;
    HIDWORD(v23[4]) = 1;
    RtlInitUnicodeString(&v31, L"Directory");
    HIDWORD(v23[5]) = 344;
    HIDWORD(v23[3]) = 983055;
    BYTE2(v23[0]) = BYTE2(v23[0]) & 0xD2 | 0xD;
    v23[8] = ObpCloseDirectoryObject;
    v23[9] = ObpDeleteDirectoryObject;
    *(_OWORD *)((char *)&v23[1] + 4) = ObpDirectoryMapping;
    if ( (int)ObCreateObjectType(&v31, (__int64)v23, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
      return 0;
    v23[8] = 0LL;
    ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    RtlInitUnicodeString(&v32, L"SymbolicLink");
    BYTE3(v23[0]) |= 1u;
    v23[9] = ObpDeleteSymbolicLink;
    HIDWORD(v23[5]) = 40;
    v23[10] = ObpParseSymbolicLinkEx;
    HIDWORD(v23[4]) = 1;
    HIDWORD(v23[3]) = 0xFFFFF;
    BYTE2(v23[0]) = BYTE2(v23[0]) & 0xF6 | 1;
    *(_OWORD *)((char *)&v23[1] + 4) = ObpSymbolicLinkMapping;
    if ( (int)ObCreateObjectType(&v32, (__int64)v23, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
      return 0;
    ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    ObpInitStackTrace();
  }
  if ( (_DWORD)InitializationPhase != 1 )
    return 1;
  if ( ObInitServerSilo(0LL) >= 0 )
  {
    v5 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v5]) >= 0 )
      {
        if ( ++v5 >= (unsigned int)KeNumberProcessors_0 )
          goto LABEL_16;
      }
      return 0;
    }
LABEL_16:
    v6 = 0;
    v7 = (char *)&ObpWaitBlockLookaside;
    do
    {
      v8 = 14 * v6 + 24;
      if ( v8 >= 0x40 )
        v8 = 64;
      ExInitializeNPagedLookasideListInternal((__int64)v7, 0LL, 0LL, 512, 48 * v8, 1834443343, 0, 0);
      ++v6;
      v7 += 128;
    }
    while ( v6 < 4 );
    v9 = (_BYTE *)SePublicDefaultUnrestrictedSd;
    if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
      goto LABEL_25;
    v16 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
    if ( v16 < 0xFA
      && RtlCreateAcl(&Acl, v16, 2u) >= 0
      && RtlAddAuditAccessAce(&Acl, v17, 0x60000000u, v18, Object, HandleInformation) >= 0
      && RtlGetAce(&Acl, 0, &Ace) >= 0 )
    {
      v19 = Ace;
      if ( ObpAuditBaseDirectories )
        *((_BYTE *)Ace + 1) |= 0xAu;
      if ( ObpAuditBaseObjects )
        v19[1] |= 9u;
      v9 = SecurityDescriptor;
      if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
        && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
        && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
      {
LABEL_25:
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.SecurityDescriptor = v9;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
        {
          v10 = DirectoryHandle;
          v11 = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &v22, 0LL);
          ObpRootDirectoryObject = v22;
          if ( v11 >= 0 && (int)ObpInitializeRootNamespace(0LL, v10, 0LL) >= 0 && NtClose(v10) >= 0 )
          {
            v27 = 0;
            v26 = 0LL;
            v28 = -60876;
            ObpLockDirectoryExclusive((__int64)&v26, ObpTypeDirectoryObject);
            v12 = ObpTypeObjectType;
            for ( i = *(_BYTE **)ObpTypeObjectType; i != v12; i = *(_BYTE **)i )
            {
              if ( (i[58] & 2) != 0 )
                v14 = (__int64)&i[-ObpInfoMaskToOffset[i[58] & 3] + 32];
              else
                v14 = 0LL;
              if ( v14
                && !*(_QWORD *)v14
                && !ObpLookupDirectoryEntry(ObpTypeDirectoryObject, (unsigned __int16 *)(v14 + 8), 64, (__int64)&v26)
                && (!*((_QWORD *)i + 9) && (int)ObpInitObjectTypeSD((__int64)(i + 80), 0LL) < 0
                 || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, i + 80, (__int64)&v26)) )
              {
                return 0;
              }
            }
            ObpReleaseLookupContext((__int64)&v26);
            v22 = &ObpLUIDDeviceMapsEnabled;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
