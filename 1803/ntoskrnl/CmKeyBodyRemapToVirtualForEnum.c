/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720
 * Callers:
 *     NtEnumerateKey @ 0x1404AC500 (NtEnumerateKey.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x140596600 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     CmpEffectiveTokenForSubject @ 0x140105530 (CmpEffectiveTokenForSubject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140489AB4 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x140544AA0 (SeDeleteAccessState.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1405ADDE0 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     CmpFreeExtraParameter @ 0x1406EEEF8 (CmpFreeExtraParameter.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x1406F5694 (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 *a1, char a2, ACCESS_MASK a3, __int64 *a4)
{
  __int64 v6; // rbx
  ULONG_PTR v7; // rdi
  char v8; // r13
  int v9; // edx
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *p_Lock; // r15
  void *v12; // rbx
  struct _KTHREAD *v13; // r12
  ULONG_PTR v14; // rbx
  struct _KTHREAD *v15; // r12
  bool v16; // r9
  void *v17; // rax
  int v18; // r9d
  bool v19; // al
  int v20; // r9d
  int AccessStateFromSubjectContext; // ebx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r15d
  __int64 *v27; // rdi
  int v28; // edx
  __int64 v29; // rdx
  __int64 *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  char TokenInformation; // [rsp+48h] [rbp-C0h]
  char TokenInformation_1; // [rsp+49h] [rbp-BFh]
  int TokenInformation_4; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h]
  ULONG_PTR v41; // [rsp+68h] [rbp-A0h]
  signed __int64 v42; // [rsp+70h] [rbp-98h]
  int v43; // [rsp+78h] [rbp-90h] BYREF
  ACCESS_MASK v44; // [rsp+7Ch] [rbp-8Ch]
  __int64 v45; // [rsp+80h] [rbp-88h]
  __int64 *v46; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v48; // [rsp+A0h] [rbp-68h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  __int64 v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  __int64 v52; // [rsp+C8h] [rbp-40h]
  _QWORD v53[38]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v54[6]; // [rsp+208h] [rbp+100h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v55[5]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v56[28]; // [rsp+2D8h] [rbp+1D0h] BYREF

  TokenInformation = a2;
  v48 = a1;
  v46 = a4;
  v44 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = *a1;
  v45 = v6;
  memset(v54, 0, sizeof(v54));
  v38 = 0LL;
  memset(v53, 0, 0x128uLL);
  v53[19] = &v53[18];
  v53[18] = &v53[18];
  memset(&v53[27], 0, 0x50uLL);
  *a4 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = 0;
  TokenInformation_1 = 0;
  Object = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( *(_WORD *)(v7 + 58) || (*(_DWORD *)(v6 + 48) & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_79;
  v9 = *(_DWORD *)(v7 + 176);
  if ( (v9 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v7) )
  {
    v8 = 1;
    goto LABEL_9;
  }
  if ( (v9 & 0x1000000) == 0 )
  {
LABEL_79:
    AccessStateFromSubjectContext = 0;
    goto LABEL_80;
  }
  TokenInformation_1 = 1;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
  v42 = p_Lock[92];
  if ( CurrentThread )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v12);
        LODWORD(v40) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v12 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v13);
    }
    else
    {
      v12 = 0LL;
    }
    Object = v12;
  }
  else
  {
    Object = 0LL;
  }
  v14 = ObFastReferenceObject(p_Lock + 107);
  if ( !v14 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(p_Lock + 91), 0LL);
    v14 = ObFastReferenceObjectLocked(p_Lock + 107);
    if ( _InterlockedCompareExchange64(p_Lock + 91, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock + 91);
    KeAbPostRelease((ULONG_PTR)(p_Lock + 91));
    KeLeaveCriticalRegionThread((__int64)v15);
  }
  v41 = v14;
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v14 == SepTokenLeakToken )
        __debugbreak();
    }
    if ( Object )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_42;
  if ( (v53[2] & 1) != 0 )
  {
    v16 = (v53[2] & 2) != 0;
    goto LABEL_41;
  }
  if ( TokenInformation )
  {
    TokenInformation_4 = 0;
    v17 = (void *)CmpEffectiveTokenForSubject((__int64 *)&Object, &v43);
    v19 = 1;
    if ( v43 == 1 )
    {
      SeQueryInformationToken(v17, TokenVirtualizationEnabled, (PVOID *)&TokenInformation_4);
      v18 = v53[2];
      if ( TokenInformation_4 )
        v19 = 0;
    }
    v20 = v18 | 1;
    if ( !v19 )
    {
      LODWORD(v53[2]) = v20 | 4;
      goto LABEL_53;
    }
    LODWORD(v53[2]) = v20 | 2;
    v16 = v19;
LABEL_41:
    if ( v16 )
      goto LABEL_42;
LABEL_53:
    if ( v8 && (*(_DWORD *)(v7 + 176) & 0x800000) == 0 )
    {
      AccessStateFromSubjectContext = 0;
      goto LABEL_43;
    }
    CmpAttachToRegistryProcess((__int64)v54);
    CmpLockRegistry();
    ExAcquirePushLockSharedEx(v7 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 48));
    if ( v8 )
    {
      v22 = v45;
      AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v45, 0LL);
      if ( AccessStateFromSubjectContext < 0 )
      {
LABEL_62:
        CmpUnlockKcb(v7, v23, v24, v25);
        CmpUnlockRegistry();
        KiUnstackDetachProcess((__int64)v54, 0LL);
        goto LABEL_43;
      }
      if ( !(unsigned __int8)CmpReparseToVirtualPath(v7, v23, &Object, &DestinationString) )
      {
LABEL_61:
        AccessStateFromSubjectContext = 0;
        goto LABEL_62;
      }
    }
    else
    {
      if ( (int)CmVirtualKCBToRealPath(v7, &DestinationString) < 0 )
        goto LABEL_61;
      v22 = v45;
    }
    CmpUnlockKcb(v7, v23, v24, v25);
    CmpUnlockRegistry();
    v26 = v44;
    v27 = v48;
    v28 = 8;
    LODWORD(v53[0]) = 8;
    if ( !v44 )
      v28 = 4104;
    v53[9] = *(_QWORD *)(*v48 + 56);
    LODWORD(v53[0]) = v28;
    AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                      (__int64)&Object,
                                      (int *)v55,
                                      v56,
                                      v44,
                                      (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
    if ( AccessStateFromSubjectContext < 0 )
    {
LABEL_78:
      KiUnstackDetachProcess((__int64)v54, 0LL);
      goto LABEL_43;
    }
    v29 = 1600LL;
    if ( TokenInformation != 1 )
      v29 = 576LL;
    AccessStateFromSubjectContext = ObReferenceObjectByName(
                                      (__int64)&DestinationString,
                                      v29,
                                      (__int64 *)v55,
                                      v26,
                                      (__int64)CmKeyObjectType,
                                      0,
                                      (__int64)v53,
                                      &v38);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      v30 = v46;
      if ( v8 )
      {
        *v46 = v38;
      }
      else
      {
        *v27 = v38;
        *v30 = v22;
      }
      v38 = 0LL;
    }
    else if ( !TokenInformation_1 )
    {
LABEL_77:
      SeDeleteAccessState(v55);
      goto LABEL_78;
    }
    AccessStateFromSubjectContext = 0;
    goto LABEL_77;
  }
LABEL_42:
  AccessStateFromSubjectContext = 0;
LABEL_43:
  if ( SeTokenLeakTracking )
  {
    if ( v41 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 1144) + 284LL));
      if ( v41 == SepTokenLeakToken )
        __debugbreak();
    }
    if ( Object )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v41);
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_80:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v53[11] )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v53[11]);
    CmpUnlockRegistry();
  }
  v31 = (_QWORD *)v53[18];
  v32 = *(_QWORD *)v53[18];
  if ( *(_QWORD **)(v53[18] + 8LL) != &v53[18] || *(_QWORD *)(v32 + 8) != v53[18] )
    __fastfail(3u);
  v53[18] = *(_QWORD *)v53[18];
  for ( *(_QWORD *)(v32 + 8) = &v53[18]; v31 != &v53[18]; *(_QWORD *)(v33 + 8) = &v53[18] )
  {
    CmpFreeExtraParameter(v31);
    v31 = (_QWORD *)v53[18];
    v33 = *(_QWORD *)v53[18];
    if ( *(_QWORD **)(v53[18] + 8LL) != &v53[18] || *(_QWORD *)(v33 + 8) != v53[18] )
      __fastfail(3u);
    v53[18] = *(_QWORD *)v53[18];
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
