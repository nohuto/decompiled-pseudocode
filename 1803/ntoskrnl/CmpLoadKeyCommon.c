/*
 * XREFs of CmpLoadKeyCommon @ 0x1400070F8
 * Callers:
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x14057F140 (CmLoadKey.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140006AD0 (CmpRecheckHiveVolumePolicy.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     LockShutdownShared @ 0x1404959C8 (LockShutdownShared.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404959F8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpTrimHive @ 0x140495A18 (CmpTrimHive.c)
 *     UnlockShutdown @ 0x140495AE4 (UnlockShutdown.c)
 *     CmpLockHiveListExclusive @ 0x140495B10 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x140495B30 (CmpUnlockHiveList.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpDetachFromRegistryProcess @ 0x1404A80D8 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1404AB0A4 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x140581F48 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1405824E8 (CmRmFinalizeRecovery.c)
 *     CmpSetGlobalQuotaAllowed @ 0x140584D60 (CmpSetGlobalQuotaAllowed.c)
 *     CmpAddStringToMapping @ 0x140613E3C (CmpAddStringToMapping.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     ObDrainDeferredObjectDeletion @ 0x140758D0C (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        ULONG_PTR BugCheckParameter2,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        __int64 *a7,
        char a8,
        char a9)
{
  __int64 v9; // r13
  __int64 *v11; // r14
  int v14; // r15d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdi
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // r14
  _WORD *v27; // rdx
  unsigned __int16 Length; // ax
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v32; // [rsp+70h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  PRKEVENT Event; // [rsp+88h] [rbp-41h]
  _BYTE v35[48]; // [rsp+90h] [rbp-39h] BYREF

  v9 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 160) |= 0x20u;
  v32 = 0LL;
  v11 = a7;
  Event = a6;
  *(_QWORD *)(BugCheckParameter2 + 4208) = KeGetCurrentThread();
  v14 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    v15 = *(_DWORD *)(BugCheckParameter2 + 4152) | 0x20;
    *(_DWORD *)(BugCheckParameter2 + 4152) = v15;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(BugCheckParameter2 + 4152) = v15 | 0x40;
  }
  *(_DWORD *)(BugCheckParameter2 + 4152) |= 1u;
  LockShutdownShared();
  LOCK_HIVE_LOAD();
  LOBYTE(v16) = 1;
  CmpLockRegistryFreezeAware(v16);
  if ( a4 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v19 = -1073741444;
LABEL_44:
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ObDrainDeferredObjectDeletion();
      CmpAttachToRegistryProcess(v35);
      CmpDestroyHive((PVOID)BugCheckParameter2);
      CmpDetachFromRegistryProcess(v35);
      goto LABEL_21;
    }
    v26 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL);
    if ( v26 )
    {
      if ( (*(_DWORD *)(v26 + 4152) & 1) == 0 )
      {
LABEL_37:
        v19 = -1073741811;
        goto LABEL_44;
      }
      RtlInitUnicodeString(&DestinationString, 0LL);
      v27 = (_WORD *)(*(_QWORD *)(a2[2] + 8LL) + 2 * (((unsigned __int64)*(unsigned __int16 *)a2[2] - 2) >> 1));
      if ( *v27 != 92 )
      {
        Length = DestinationString.Length;
        do
        {
          --v27;
          Length += 2;
        }
        while ( *v27 != 92 );
        DestinationString.Length = Length;
      }
      *(_DWORD *)(BugCheckParameter2 + 4152) |= 2u;
      DestinationString.Buffer = v27 + 1;
      v19 = CmpAddStringToMapping(&DestinationString, BugCheckParameter2);
      if ( v19 < 0 )
        goto LABEL_44;
      CmpLockHiveListExclusive();
      v29 = *(_QWORD **)(v26 + 4168);
      v30 = (_QWORD *)(BugCheckParameter2 + 4160);
      if ( *v29 != v26 + 4160 )
        __fastfail(3u);
      *v30 = v26 + 4160;
      *(_QWORD *)(BugCheckParameter2 + 4168) = v29;
      *v29 = v30;
      *(_QWORD *)(v26 + 4168) = v30;
      CmpUnlockHiveList();
    }
    v11 = a7;
  }
  if ( !a5 )
    goto LABEL_6;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a5, 0LL) )
  {
    v19 = (*(_BYTE *)(a5 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_44;
  }
  v9 = *(_QWORD *)(a5 + 8);
  if ( (*(_DWORD *)(v9 + 176) & 0x40000) == 0 )
    goto LABEL_37;
LABEL_6:
  CmpUnlockRegistry();
  LOBYTE(v17) = a8;
  v19 = CmpLinkHiveToMaster(a2[2], a2[1], BugCheckParameter2, v17, 512, v14 != 0, Event, a2[4], v9, (__int64)&v32, 0);
  if ( v19 < 0 )
  {
    LOBYTE(v18) = 1;
    CmpLockRegistryFreezeAware(v18);
    goto LABEL_44;
  }
  v20 = v32;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(v32);
    *v11 = v20;
  }
  LOBYTE(v18) = 1;
  CmpLockRegistryFreezeAware(v18);
  if ( v14 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(BugCheckParameter2 + 2928));
    *v11 = *(_QWORD *)(BugCheckParameter2 + 2928);
  }
  CmpLockHiveListExclusive();
  v21 = (_QWORD *)qword_140862710;
  v22 = (_QWORD *)(BugCheckParameter2 + 1600);
  if ( *(__int64 **)qword_140862710 != &CmpHiveListHead )
    __fastfail(3u);
  *v22 = &CmpHiveListHead;
  *(_QWORD *)(BugCheckParameter2 + 1608) = v21;
  *v21 = v22;
  qword_140862710 = BugCheckParameter2 + 1600;
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(v35);
  CmpRecheckHiveVolumePolicy(BugCheckParameter2);
  CmpDetachFromRegistryProcess(v35);
  CmpDereferenceKeyControlBlockUnsafe(v20);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v23) = a9;
    CmpInitCmRM(BugCheckParameter2, v23);
    *(_DWORD *)(BugCheckParameter2 + 4152) |= 8u;
  }
  if ( a8 )
  {
    CmpAttachToRegistryProcess(v35);
    CmpFlushHive(BugCheckParameter2);
    CmpDetachFromRegistryProcess(v35);
  }
  if ( !v14 )
    CmpAddToHiveFileList(BugCheckParameter2);
  v24 = *(_QWORD *)(BugCheckParameter2 + 4192);
  if ( v24 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v24 + 56), CmKtmNotification, *(PVOID *)(BugCheckParameter2 + 4192));
    CmRmFinalizeRecovery(*(_QWORD *)(BugCheckParameter2 + 4192));
  }
  CmpTrimHive(BugCheckParameter2);
  LOCK_HIVE_LOAD();
  *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x20u;
  *(_QWORD *)(BugCheckParameter2 + 4208) = 0LL;
  UNLOCK_HIVE_LOAD();
  v19 = 0;
LABEL_21:
  UnlockShutdown();
  if ( !BYTE5(NlsMbCodePageTag) && !CmpWasSetupBoot )
  {
    BYTE5(NlsMbCodePageTag) = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return (unsigned int)v19;
}
