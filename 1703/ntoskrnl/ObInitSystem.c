/*
 * XREFs of ObInitSystem @ 0x1407FE634
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ObpLockDirectoryExclusive @ 0x14004439C (ObpLockDirectoryExclusive.c)
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     ObpReleaseLookupContext @ 0x140087EE4 (ObpReleaseLookupContext.c)
 *     RtlGetAce @ 0x1400880C0 (RtlGetAce.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140134F20 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExInitializeSystemLookasideList @ 0x14040F89C (ExInitializeSystemLookasideList.c)
 *     ExCreateHandleTable @ 0x14042B7E4 (ExCreateHandleTable.c)
 *     ObpInsertDirectoryEntry @ 0x1404408EC (ObpInsertDirectoryEntry.c)
 *     NtCreateDirectoryObject @ 0x1404423E4 (NtCreateDirectoryObject.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1404A2390 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObInitializeProcessor @ 0x14059E7F4 (ObInitializeProcessor.c)
 *     ObCreateObjectType @ 0x14059EB50 (ObCreateObjectType.c)
 *     ObpInitObjectTypeSD @ 0x14059F178 (ObpInitObjectTypeSD.c)
 *     ObpLookupDirectoryEntry @ 0x14059F384 (ObpLookupDirectoryEntry.c)
 *     ObpInitializeRootNamespace @ 0x1405A28B8 (ObpInitializeRootNamespace.c)
 *     ObInitServerSilo @ 0x1405CE6D4 (ObInitServerSilo.c)
 *     RtlAddAuditAccessAce @ 0x1406E88E4 (RtlAddAuditAccessAce.c)
 *     ObpInitInfoBlockOffsets @ 0x14081CFD0 (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x1408235D0 (ObpInitStackTrace.c)
 */

char ObInitSystem()
{
  __int16 v0; // di
  __int16 v1; // bx
  int v2; // eax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  int v6; // ebx
  unsigned int v7; // ebx
  char *v8; // rdi
  unsigned int v9; // eax
  _BYTE *v10; // rbx
  HANDLE v11; // rbx
  NTSTATUS v12; // eax
  _BYTE *v13; // rsi
  _BYTE *i; // rbx
  __int64 v15; // rdx
  ULONG v17; // edx
  ULONG v18; // edx
  void *v19; // r9
  _BYTE *v20; // rax
  BOOLEAN Object; // [rsp+28h] [rbp-E0h]
  BOOLEAN HandleInformation; // [rsp+30h] [rbp-D8h]
  PVOID v23; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v24[16]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Ace; // [rsp+D8h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v27; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v28; // [rsp+106h] [rbp-2h]
  int v29; // [rsp+108h] [rbp+0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+38h] BYREF
  UNICODE_STRING v32; // [rsp+150h] [rbp+48h] BYREF
  UNICODE_STRING v33; // [rsp+160h] [rbp+58h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+170h] [rbp+68h] BYREF
  ACL Acl; // [rsp+198h] [rbp+90h] BYREF

  if ( (_BYTE)dword_1403E3134 )
  {
    v0 = 64;
    v1 = 32;
  }
  else
  {
    v0 = 32;
    v1 = 16;
  }
  v2 = InitializationPhase;
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
    v4 = 257LL;
    ObpPendingObjectDirectoryList = 0LL;
    CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    v5 = &unk_14034D708;
    ObpRemoveObjectList = 0LL;
    ObpRemoveObjectWait = 0LL;
    ObpPendingObjectDirectoryListLock = 0LL;
    do
    {
      *(v5 - 1) = 0LL;
      v5[1] = v5;
      *v5 = v5;
      v5 += 3;
      --v4;
    }
    while ( v4 );
    ObpDefaultObject = 0;
    qword_14034D330 = (__int64)&qword_14034D328;
    qword_14034D328 = (__int64)&qword_14034D328;
    byte_14034D322 = 6;
    dword_14034D324 = 1;
    ObpKernelHandleTable = ExCreateHandleTable(0LL, 1LL);
    KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5] = ObpKernelHandleTable;
    if ( !ObpKernelHandleTable )
      return 0;
    ObpRemoveObjectWorkItem.Parameter = 0LL;
    ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
    qword_14034D378 = (__int64)ObpProcessRemoveObjectDpcWorker;
    ObpRemoveObjectWorkItem.List.Flink = 0LL;
    LODWORD(ObpRemoveObjectDpc) = 275;
    qword_14034D380 = 0LL;
    qword_14034D398 = 0LL;
    qword_14034D370 = 0LL;
    ObpInitInfoBlockOffsets();
    qword_1403E4738 = (__int64)MmBadPointer;
    memset(v24, 0, 0x78uLL);
    LOWORD(v24[0]) = 120;
    LODWORD(v24[1]) = 256;
    HIDWORD(v24[4]) = 512;
    RtlInitUnicodeString(&DestinationString, L"Type");
    BYTE2(v24[0]) |= 0x24u;
    HIDWORD(v24[3]) = 983041;
    HIDWORD(v24[5]) = 216;
    *(_OWORD *)((char *)&v24[1] + 4) = ObpTypeMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v24, 0LL, (__int64)&ObpTypeObjectType) < 0 )
      return 0;
    HIDWORD(v24[4]) = 1;
    RtlInitUnicodeString(&v32, L"Directory");
    HIDWORD(v24[5]) = 344;
    HIDWORD(v24[3]) = 983055;
    BYTE2(v24[0]) = BYTE2(v24[0]) & 0xD2 | 0xD;
    v24[8] = ObpCloseDirectoryObject;
    v24[9] = ObpDeleteDirectoryObject;
    *(_OWORD *)((char *)&v24[1] + 4) = ObpDirectoryMapping;
    if ( (int)ObCreateObjectType(&v32, (__int64)v24, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
      return 0;
    v24[8] = 0LL;
    ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    RtlInitUnicodeString(&v33, L"SymbolicLink");
    BYTE3(v24[0]) |= 1u;
    v24[9] = ObpDeleteSymbolicLink;
    HIDWORD(v24[5]) = 40;
    v24[10] = ObpParseSymbolicLinkEx;
    HIDWORD(v24[4]) = 1;
    HIDWORD(v24[3]) = 0xFFFFF;
    BYTE2(v24[0]) = BYTE2(v24[0]) & 0xF6 | 1;
    *(_OWORD *)((char *)&v24[1] + 4) = ObpSymbolicLinkMapping;
    if ( (int)ObCreateObjectType(&v33, (__int64)v24, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
      return 0;
    ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    ObpInitStackTrace();
    v2 = InitializationPhase;
  }
  if ( v2 != 1 )
    return 1;
  if ( ObInitServerSilo(0LL) >= 0 )
  {
    v6 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v6]) >= 0 )
      {
        if ( ++v6 >= (unsigned int)KeNumberProcessors_0 )
          goto LABEL_16;
      }
      return 0;
    }
LABEL_16:
    v7 = 0;
    v8 = (char *)&ObpWaitBlockLookaside;
    do
    {
      v9 = 14 * v7 + 24;
      if ( v9 >= 0x40 )
        v9 = 64;
      ExInitializeNPagedLookasideListInternal((__int64)v8, 0LL, 0LL, 512, 48 * v9, 1834443343, 0, 0);
      ++v7;
      v8 += 128;
    }
    while ( v7 < 4 );
    v10 = (_BYTE *)SePublicDefaultUnrestrictedSd;
    if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
      goto LABEL_25;
    v17 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
    if ( v17 < 0xFA
      && RtlCreateAcl(&Acl, v17, 2u) >= 0
      && RtlAddAuditAccessAce(&Acl, v18, 0x60000000u, v19, Object, HandleInformation) >= 0
      && RtlGetAce(&Acl, 0, &Ace) >= 0 )
    {
      v20 = Ace;
      if ( ObpAuditBaseDirectories )
        *((_BYTE *)Ace + 1) |= 0xAu;
      if ( ObpAuditBaseObjects )
        v20[1] |= 9u;
      v10 = SecurityDescriptor;
      if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
        && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
        && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
      {
LABEL_25:
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.SecurityDescriptor = v10;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
        {
          v11 = DirectoryHandle;
          v12 = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &v23, 0LL);
          ObpRootDirectoryObject = v23;
          if ( v12 >= 0 && (int)ObpInitializeRootNamespace(0LL, v11, 0LL) >= 0 && NtClose(v11) >= 0 )
          {
            v28 = 0;
            v27 = 0LL;
            v29 = -60876;
            ObpLockDirectoryExclusive((__int64)&v27, (__int64)ObpTypeDirectoryObject);
            v13 = ObpTypeObjectType;
            for ( i = *(_BYTE **)ObpTypeObjectType; i != v13; i = *(_BYTE **)i )
            {
              if ( (i[58] & 2) != 0 )
                v15 = (__int64)&i[-ObpInfoMaskToOffset[i[58] & 3] + 32];
              else
                v15 = 0LL;
              if ( v15
                && !*(_QWORD *)v15
                && !ObpLookupDirectoryEntry(ObpTypeDirectoryObject, (unsigned __int16 *)(v15 + 8), 64, (__int64)&v27)
                && (!*((_QWORD *)i + 9) && (int)ObpInitObjectTypeSD((__int64)(i + 80), 0LL) < 0
                 || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, i + 80, (__int64)&v27)) )
              {
                return 0;
              }
            }
            ObpReleaseLookupContext((__int64)&v27);
            v23 = &ObpLUIDDeviceMapsEnabled;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
