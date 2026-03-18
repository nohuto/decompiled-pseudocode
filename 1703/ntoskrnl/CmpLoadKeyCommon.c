/*
 * XREFs of CmpLoadKeyCommon @ 0x14007EF3C
 * Callers:
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1404CA4B0 (CmpSetGlobalQuotaAllowed.c)
 *     CmRmFinalizeRecovery @ 0x1404CBACC (CmRmFinalizeRecovery.c)
 *     CmpAddToHiveFileList @ 0x1404CBF94 (CmpAddToHiveFileList.c)
 *     CmpUnlockHiveList @ 0x1404CC998 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1404CC9AC (CmpLockHiveListExclusive.c)
 *     UnlockShutdown @ 0x1404CC9C0 (UnlockShutdown.c)
 *     CmpTrimHive @ 0x1404CC9EC (CmpTrimHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404CCC8C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     LockShutdownShared @ 0x1404CD430 (LockShutdownShared.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140500604 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     CmpAddStringToMapping @ 0x1405D3E34 (CmpAddStringToMapping.c)
 *     CmpRemoveHiveFromMapping @ 0x140667944 (CmpRemoveHiveFromMapping.c)
 *     CmpDereferenceHive @ 0x140669EF8 (CmpDereferenceHive.c)
 *     ObDrainDeferredObjectDeletion @ 0x1406C0D70 (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        ULONG_PTR BugCheckParameter2,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        PRKEVENT Event,
        __int64 *a7,
        char a8,
        char a9)
{
  __int64 v9; // r15
  int v14; // ebp
  __int64 v15; // rcx
  __int64 v16; // rdi
  char v17; // r15
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // edi
  __int64 *v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rsi
  _WORD *v29; // rdx
  unsigned __int16 Length; // ax
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rsi
  __int64 *v35; // rcx
  __int64 **v36; // rax
  __int64 v37; // [rsp+40h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-38h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+8h] BYREF

  v39 = 0LL;
  v9 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 144) |= 0x20u;
  *(_QWORD *)(BugCheckParameter2 + 5416) = KeGetCurrentThread();
  v14 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5360) |= 0x20u;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(BugCheckParameter2 + 5360) |= 0x40u;
  }
  *(_DWORD *)(BugCheckParameter2 + 5360) |= 1u;
  LockShutdownShared();
  LOCK_HIVE_LOAD();
  LOBYTE(v15) = 1;
  CmpLockRegistryFreezeAware(v15);
  if ( a4 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v20 = -1073741444;
      goto LABEL_43;
    }
    v28 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL);
    if ( v28 )
    {
      if ( (*(_DWORD *)(v28 + 5360) & 1) == 0 )
      {
LABEL_36:
        v20 = -1073741811;
        goto LABEL_43;
      }
      RtlInitUnicodeString(&DestinationString, 0LL);
      v29 = (_WORD *)(*(_QWORD *)(a2[2] + 8LL) + 2 * (((unsigned __int64)*(unsigned __int16 *)a2[2] - 2) >> 1));
      if ( *v29 != 92 )
      {
        Length = DestinationString.Length;
        do
        {
          --v29;
          Length += 2;
        }
        while ( *v29 != 92 );
        DestinationString.Length = Length;
      }
      *(_DWORD *)(BugCheckParameter2 + 5360) |= 2u;
      DestinationString.Buffer = v29 + 1;
      v20 = CmpAddStringToMapping(&DestinationString, BugCheckParameter2);
      if ( v20 < 0 )
        goto LABEL_43;
      CmpLockHiveListExclusive();
      v31 = *(_QWORD **)(v28 + 5376);
      v32 = (_QWORD *)(BugCheckParameter2 + 5368);
      if ( *v31 != v28 + 5368 )
        __fastfail(3u);
      *v32 = v28 + 5368;
      *(_QWORD *)(BugCheckParameter2 + 5376) = v31;
      *v31 = v32;
      *(_QWORD *)(v28 + 5376) = v32;
      CmpUnlockHiveList();
    }
  }
  v16 = a5;
  if ( a5 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a5, 0LL) )
    {
      v20 = (*(_BYTE *)(v16 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_43;
    }
    v9 = *(_QWORD *)(v16 + 8);
    if ( (*(_DWORD *)(v9 + 176) & 0x40000) == 0 )
      goto LABEL_36;
  }
  CmpUnlockRegistry();
  v37 = v9;
  v17 = a8;
  LOBYTE(v18) = a8;
  v20 = CmpLinkHiveToMaster(a2[2], a2[1], BugCheckParameter2, v18, 512, v14 != 0, Event, a2[4], v37, (__int64)&v39, 0);
  if ( v20 >= 0 )
  {
    v21 = a7;
    v22 = v39;
    if ( (a3 & 0x800) != 0 )
    {
      CmpReferenceKeyControlBlockUnsafe(v39);
      *v21 = v22;
    }
    LOBYTE(v19) = 1;
    CmpLockRegistryFreezeAware(v19);
    if ( v14 )
    {
      CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(BugCheckParameter2 + 4104));
      *v21 = *(_QWORD *)(BugCheckParameter2 + 4104);
    }
    CmpLockHiveListExclusive();
    v23 = (_QWORD *)qword_1407ACD50;
    v24 = (_QWORD *)(BugCheckParameter2 + 2728);
    if ( *(__int64 **)qword_1407ACD50 != &CmpHiveListHead )
      __fastfail(3u);
    *v24 = &CmpHiveListHead;
    *(_QWORD *)(BugCheckParameter2 + 2736) = v23;
    *v23 = v24;
    qword_1407ACD50 = BugCheckParameter2 + 2728;
    CmpUnlockHiveList();
    CmpUnlockRegistry();
    CmpDereferenceKeyControlBlockUnsafe(v22);
    UNLOCK_HIVE_LOAD();
    if ( (a3 & 0x110) == 0 )
    {
      LOBYTE(v25) = a9;
      CmpInitCmRM(BugCheckParameter2, v25);
      *(_DWORD *)(BugCheckParameter2 + 5360) |= 8u;
    }
    if ( v17 )
      CmpFlushHive(BugCheckParameter2);
    if ( !v14 )
      CmpAddToHiveFileList(BugCheckParameter2);
    v26 = *(_QWORD *)(BugCheckParameter2 + 5400);
    if ( v26 )
    {
      TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v26 + 56), CmKtmNotification, *(PVOID *)(BugCheckParameter2 + 5400));
      CmRmFinalizeRecovery(*(_QWORD *)(BugCheckParameter2 + 5400));
    }
    CmpTrimHive(BugCheckParameter2);
    LOCK_HIVE_LOAD();
    *(_DWORD *)(BugCheckParameter2 + 144) &= ~0x20u;
    *(_QWORD *)(BugCheckParameter2 + 5416) = 0LL;
    UNLOCK_HIVE_LOAD();
    v20 = 0;
    goto LABEL_21;
  }
  LOBYTE(v19) = 1;
  CmpLockRegistryFreezeAware(v19);
LABEL_43:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  ObDrainDeferredObjectDeletion();
  CmpDestroySecurityCache(BugCheckParameter2);
  v34 = (__int64 *)(BugCheckParameter2 + 5368);
  if ( (__int64 *)*v34 != v34 )
  {
    CmpLockHiveListExclusive();
    v35 = (__int64 *)*v34;
    v36 = *(__int64 ***)(BugCheckParameter2 + 5376);
    if ( *(__int64 **)(*v34 + 8) != v34 || *v36 != v34 )
      __fastfail(3u);
    *v36 = v35;
    v35[1] = (__int64)v36;
    CmpUnlockHiveList();
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 2) != 0 )
    CmpRemoveHiveFromMapping(BugCheckParameter2);
  LOBYTE(v33) = 1;
  HvFreeHive(BugCheckParameter2, v33);
  CmpCmdHiveClose(BugCheckParameter2);
  CmpDereferenceHive(BugCheckParameter2);
LABEL_21:
  UnlockShutdown();
  if ( !BYTE5(NlsMbCodePageTag) && !CmpWasSetupBoot )
  {
    BYTE5(NlsMbCodePageTag) = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return (unsigned int)v20;
}
