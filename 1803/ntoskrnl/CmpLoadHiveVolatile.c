/*
 * XREFs of CmpLoadHiveVolatile @ 0x140702BD0
 * Callers:
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpCopyCompressedName @ 0x1404A33EC (CmpCopyCompressedName.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpUuidCreate @ 0x1405624F4 (CmpUuidCreate.c)
 *     CmpAddToHiveFileList @ 0x140581F48 (CmpAddToHiveFileList.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r13
  int Hive; // ebx
  _BYTE *v8; // rsi
  int v9; // eax
  char *v10; // r15
  char IsKeyDeletedForKeyBody; // al
  _QWORD *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int16 v15; // bx
  unsigned __int16 v16; // bx
  unsigned __int16 v18; // cx
  __int16 v19; // r10
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  char v24; // [rsp+28h] [rbp-D8h]
  PRKEVENT Event; // [rsp+30h] [rbp-D0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v27[2]; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  PVOID v29; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v32[4]; // [rsp+A0h] [rbp-60h] BYREF
  UUID v33; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v35[352]; // [rsp+E0h] [rbp-20h] BYREF

  v27[0] = -1;
  v27[1] = 0;
  v4 = 0LL;
  memset(v35, 0, sizeof(v35));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    Hive = CmpUuidCreate(&Uuid);
    if ( Hive >= 0 )
    {
      Hive = CmpUuidCreate(&v33);
      if ( Hive >= 0 )
      {
        v8 = *(_BYTE **)(v6 + 24);
        if ( v8 != CmpMasterHive )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          Hive = -1073741811;
          goto LABEL_26;
        }
        memset(v32, 0, sizeof(v32));
        v32[0] = a2;
        Hive = CmpCreateHive(
                 (ULONG_PTR *)&v29,
                 2u,
                 0x8000u,
                 0,
                 0LL,
                 (__int64)v32,
                 0LL,
                 16777217,
                 0LL,
                 0LL,
                 0LL,
                 (__int64)v35);
        if ( Hive >= 0 )
        {
          v9 = CmpCreateHive((ULONG_PTR *)&P, 0, 1u, 0, 0LL, 0LL, 0LL, 0x1000000, &Uuid, &v33, 0LL, (__int64)v35);
          v10 = (char *)v29;
          Hive = v9;
          if ( v9 >= 0 )
          {
            CmpLockRegistryExclusive();
            IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
            v12 = P;
            if ( IsKeyDeletedForKeyBody )
            {
              Hive = -1073741444;
            }
            else if ( v8[2936] == 1 )
            {
              Hive = -1073741431;
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
                      v24,
                      (ULONG_PTR)Event);
              if ( v13 != -1 )
              {
                *(_DWORD *)(v12[8] + 36LL) = v13;
                if ( CmpCopySyncTree((int)v10, *(_DWORD *)(*((_QWORD *)v10 + 8) + 36LL), (ULONG_PTR)v12, v13, 2, 0) )
                {
                  v14 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _DWORD *))v12[1])(v12, v13, v27);
                  if ( v14 )
                  {
                    SourceString = 0LL;
                    CmpConstructNameWithStatus(v6, &SourceString);
                    v4 = (UNICODE_STRING *)SourceString;
                    v15 = *(_WORD *)(v14 + 72);
                    if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                      v15 *= 2;
                    v16 = SourceString->Length + v15 + 2;
                    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16, 0x20204D43u);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v16;
                      DestinationString.Length = v16;
                      RtlCopyUnicodeString(&DestinationString, v4);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      v18 = *(_WORD *)(v14 + 72);
                      if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - DestinationString.Length,
                          (unsigned __int8 *)(v14 + 76),
                          (unsigned __int16)(2 * v18));
                        v19 = *(_WORD *)(v14 + 72);
                        if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                          v19 *= 2;
                        DestinationString.Length += v19;
                      }
                      else
                      {
                        Source.MaximumLength = *(_WORD *)(v14 + 72);
                        Source.Length = v18;
                        Source.Buffer = (wchar_t *)(v14 + 76);
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      ((void (__fastcall *)(_QWORD *, _DWORD *))v12[2])(v12, v27);
                      Hive = CmpLinkHiveToMaster(
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
                      if ( Hive >= 0 )
                      {
                        CmpAddToHiveFileList((__int64)v12);
                        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        v22 = (_QWORD *)qword_140862710;
                        v23 = v12 + 200;
                        if ( *(__int64 **)qword_140862710 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v23 = &CmpHiveListHead;
                        v12[201] = v22;
                        *v22 = v23;
                        qword_140862710 = (__int64)(v12 + 200);
                        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v20, v21);
                        if ( !BYTE5(NlsMbCodePageTag) )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          BYTE5(NlsMbCodePageTag) = 1;
                        }
                      }
                      CmpUnlockRegistry();
                      if ( Hive < 0 )
                        CmpDestroyHive((char *)v12);
                      CmpDestroyHive(v10);
                      ExFreePoolWithTag(DestinationString.Buffer, 0);
                      ExFreePoolWithTag(v4, 0x624E4D43u);
                      goto LABEL_25;
                    }
                    ((void (__fastcall *)(_QWORD *, _DWORD *))v12[2])(v12, v27);
                  }
                }
              }
              Hive = -1073741670;
            }
            CmpUnlockRegistry();
            CmpDestroyHive((char *)v12);
          }
          CmpDestroyHive(v10);
          if ( v4 )
            CmpFreeTransientPoolWithTag(v4, 0x624E4D43u);
        }
      }
    }
LABEL_25:
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    goto LABEL_26;
  }
  Hive = -1073741431;
LABEL_26:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)Hive;
}
