/*
 * XREFs of CmpLoadHiveVolatile @ 0x140672BD8
 * Callers:
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpAddToHiveFileList @ 0x1404CBF94 (CmpAddToHiveFileList.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpUuidCreate @ 0x14054D440 (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r13
  int v7; // ebx
  __int64 v8; // rsi
  int v9; // eax
  ULONG_PTR v10; // r15
  char IsKeyDeletedForKeyBody; // al
  ULONG_PTR v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int16 v15; // si
  unsigned __int16 v16; // si
  __int16 v18; // cx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v23[2]; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v25; // [rsp+80h] [rbp-80h] BYREF
  int v26[2]; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v28[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[352]; // [rsp+C0h] [rbp-40h] BYREF
  UUID v30; // [rsp+220h] [rbp+120h] BYREF
  UUID Uuid; // [rsp+230h] [rbp+130h] BYREF

  v23[0] = -1;
  v23[1] = 0;
  v4 = 0LL;
  memset(v29, 0, sizeof(v29));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmpUuidCreate(&Uuid);
    if ( v7 >= 0 )
    {
      v7 = CmpUuidCreate(&v30);
      if ( v7 >= 0 )
      {
        v8 = *(_QWORD *)(v6 + 24);
        if ( v8 != CmpMasterHive )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          v7 = -1073741811;
          goto LABEL_27;
        }
        memset(v28, 0, sizeof(v28));
        v28[0] = a2;
        v7 = CmpInitializeHive(&v25, 2u, 0, 0, 0LL, (__int64)v28, 0LL, 16777217, 0LL, 0LL, 0LL, (__int64)v29);
        if ( v7 >= 0 )
        {
          v9 = CmpInitializeHive(
                 (ULONG_PTR *)v26,
                 0,
                 1,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 0x1000000,
                 (__int64)&Uuid,
                 (__int64)&v30,
                 0LL,
                 (__int64)v29);
          v10 = v25;
          v7 = v9;
          if ( v9 >= 0 )
          {
            CmpLockRegistryExclusive();
            IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
            v12 = *(_QWORD *)v26;
            if ( IsKeyDeletedForKeyBody )
            {
              v7 = -1073741444;
            }
            else if ( *(_BYTE *)(v8 + 4112) == 1 )
            {
              v7 = -1073741431;
            }
            else
            {
              v13 = CmpCopyKeyPartial(
                      v10,
                      *(unsigned int *)(*(_QWORD *)(v10 + 64) + 36LL),
                      *(ULONG_PTR *)v26,
                      0xFFFFFFFF,
                      2,
                      v21,
                      1u);
              if ( v13 != -1 )
              {
                *(_DWORD *)(*(_QWORD *)(v12 + 64) + 36LL) = v13;
                if ( CmpCopySyncTree(v10, *(_DWORD *)(*(_QWORD *)(v10 + 64) + 36LL), v12, v13, 2, 0) )
                {
                  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v12 + 8))(v12, v13, v23);
                  if ( v14 )
                  {
                    SourceString = 0LL;
                    CmpConstructNameWithStatus(v6, &SourceString);
                    v4 = (UNICODE_STRING *)SourceString;
                    if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                      v15 = 2 * *(_WORD *)(v14 + 72);
                    else
                      v15 = *(_WORD *)(v14 + 72);
                    v16 = SourceString->Length + v15 + 2;
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
                        if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                          v18 = 2 * *(_WORD *)(v14 + 72);
                        else
                          v18 = *(_WORD *)(v14 + 72);
                        DestinationString.Length += v18;
                      }
                      else
                      {
                        Source.Buffer = (wchar_t *)(v14 + 76);
                        Source.MaximumLength = *(_WORD *)(v14 + 72);
                        Source.Length = Source.MaximumLength;
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v23);
                      v7 = CmpLinkHiveToMaster(
                             (__int64)&DestinationString,
                             0LL,
                             v12,
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
                        CmpAddToHiveFileList((HANDLE)v12);
                        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        v19 = (_QWORD *)qword_1407ACD50;
                        v20 = (_QWORD *)(v12 + 2728);
                        if ( *(__int64 **)qword_1407ACD50 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v20 = &CmpHiveListHead;
                        *(_QWORD *)(v12 + 2736) = v19;
                        *v19 = v20;
                        qword_1407ACD50 = v12 + 2728;
                        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        if ( !BYTE5(NlsMbCodePageTag) )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          BYTE5(NlsMbCodePageTag) = 1;
                        }
                      }
                      CmpUnlockRegistry();
                      if ( v7 < 0 )
                        CmpDestroyTemporaryHive(v12);
                      CmpDestroyTemporaryHive(v10);
                      ExFreePoolWithTag(DestinationString.Buffer, 0);
                      ExFreePoolWithTag(v4, 0x624E4D43u);
                      goto LABEL_26;
                    }
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v23);
                  }
                }
              }
              v7 = -1073741670;
            }
            CmpUnlockRegistry();
            CmpDestroyTemporaryHive(v12);
          }
          CmpDestroyTemporaryHive(v10);
          if ( v4 )
            CmpFreeTransientPoolWithTag(v4, 0x624E4D43u);
        }
      }
    }
LABEL_26:
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    goto LABEL_27;
  }
  v7 = -1073741431;
LABEL_27:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
