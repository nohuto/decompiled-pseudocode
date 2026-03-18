/*
 * XREFs of CmpLoadHiveVolatile @ 0x14069DCAC
 * Callers:
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpCopyCompressedName @ 0x14047442C (CmpCopyCompressedName.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpUuidCreate @ 0x14050AF74 (CmpUuidCreate.c)
 *     CmpAddToHiveFileList @ 0x14059A274 (CmpAddToHiveFileList.c)
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r13
  int v7; // ebx
  _BYTE *v8; // rsi
  int v9; // eax
  char *v10; // r15
  bool IsKeyDeletedForKeyBody; // al
  _QWORD *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int16 v15; // ax
  unsigned __int16 v16; // si
  __int16 v18; // ax
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  char v21; // [rsp+28h] [rbp-D8h]
  PRKEVENT Event; // [rsp+30h] [rbp-D0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v24[2]; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  PVOID v26; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v30[352]; // [rsp+C0h] [rbp-40h] BYREF
  UUID v31; // [rsp+220h] [rbp+120h] BYREF
  UUID Uuid; // [rsp+230h] [rbp+130h] BYREF

  v24[0] = -1;
  v24[1] = 0;
  v4 = 0LL;
  memset(v30, 0, sizeof(v30));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmpUuidCreate(&Uuid);
    if ( v7 >= 0 )
    {
      v7 = CmpUuidCreate(&v31);
      if ( v7 >= 0 )
      {
        v8 = *(_BYTE **)(v6 + 24);
        if ( v8 != CmpMasterHive )
        {
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          v7 = -1073741811;
          goto LABEL_26;
        }
        memset(v29, 0, sizeof(v29));
        v29[0] = a2;
        v7 = CmpInitializeHive(
               (ULONG_PTR *)&v26,
               2u,
               0,
               0,
               0LL,
               (__int64)v29,
               0LL,
               16777217,
               0LL,
               0LL,
               0LL,
               (__int64)v30);
        if ( v7 >= 0 )
        {
          v9 = CmpInitializeHive(
                 (ULONG_PTR *)&P,
                 0,
                 1,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 0x1000000,
                 (__int64)&Uuid,
                 (__int64)&v31,
                 0LL,
                 (__int64)v30);
          v10 = (char *)v26;
          v7 = v9;
          if ( v9 >= 0 )
          {
            CmpLockRegistryExclusive();
            IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
            v12 = P;
            if ( IsKeyDeletedForKeyBody )
            {
              v7 = -1073741444;
            }
            else if ( v8[4112] == 1 )
            {
              v7 = -1073741431;
            }
            else
            {
              LODWORD(Event) = 1;
              v13 = CmpCopyKeyPartial(
                      (__int64)v10,
                      *(unsigned int *)(*((_QWORD *)v10 + 8) + 36LL),
                      (ULONG_PTR)P,
                      0xFFFFFFFF,
                      2,
                      v21,
                      (ULONG_PTR)Event);
              if ( v13 != -1 )
              {
                *(_DWORD *)(v12[8] + 36LL) = v13;
                if ( CmpCopySyncTree((int)v10, *(_DWORD *)(*((_QWORD *)v10 + 8) + 36LL), (ULONG_PTR)v12, v13, 2, 0) )
                {
                  v14 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _DWORD *))v12[1])(v12, v13, v24);
                  if ( v14 )
                  {
                    SourceString = 0LL;
                    CmpConstructNameWithStatus(v6, &SourceString);
                    v4 = (UNICODE_STRING *)SourceString;
                    v15 = *(_WORD *)(v14 + 72);
                    if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                      v15 *= 2;
                    v16 = v15 + SourceString->Length + 2;
                    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16, 0x20204D43u);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v16;
                      DestinationString.Length = v16;
                      RtlCopyUnicodeString(&DestinationString, v4);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - DestinationString.Length,
                          (unsigned __int8 *)(v14 + 76),
                          (unsigned __int16)(2 * *(_WORD *)(v14 + 72)));
                        v18 = *(_WORD *)(v14 + 72);
                        if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                          v18 *= 2;
                        DestinationString.Length += v18;
                      }
                      else
                      {
                        Source.Buffer = (wchar_t *)(v14 + 76);
                        Source.MaximumLength = *(_WORD *)(v14 + 72);
                        Source.Length = Source.MaximumLength;
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      ((void (__fastcall *)(_QWORD *, _DWORD *))v12[2])(v12, v24);
                      v7 = CmpLinkHiveToMaster(
                             (__int64)&DestinationString,
                             0LL,
                             (__int64)v12,
                             0,
                             0x200u,
                             0,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             1);
                      if ( v7 >= 0 )
                      {
                        CmpAddToHiveFileList(v12);
                        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        v19 = (_QWORD *)qword_1407F3DD0;
                        v20 = v12 + 341;
                        if ( *(__int64 **)qword_1407F3DD0 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v20 = &CmpHiveListHead;
                        v12[342] = v19;
                        *v19 = v20;
                        qword_1407F3DD0 = (__int64)(v12 + 341);
                        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        if ( !BYTE5(NlsMbCodePageTag) )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          BYTE5(NlsMbCodePageTag) = 1;
                        }
                      }
                      CmpUnlockRegistry();
                      if ( v7 < 0 )
                        CmpDestroyTemporaryHive((char *)v12);
                      CmpDestroyTemporaryHive(v10);
                      ExFreePoolWithTag(DestinationString.Buffer, 0);
                      ExFreePoolWithTag(v4, 0x624E4D43u);
                      goto LABEL_25;
                    }
                    ((void (__fastcall *)(_QWORD *, _DWORD *))v12[2])(v12, v24);
                  }
                }
              }
              v7 = -1073741670;
            }
            CmpUnlockRegistry();
            CmpDestroyTemporaryHive((char *)v12);
          }
          CmpDestroyTemporaryHive(v10);
          if ( v4 )
            CmpFreeTransientPoolWithTag(v4, 0x624E4D43u);
        }
      }
    }
LABEL_25:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    goto LABEL_26;
  }
  v7 = -1073741431;
LABEL_26:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
