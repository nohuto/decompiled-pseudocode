/*
 * XREFs of CmSaveMergedKeys @ 0x1406725A8
 * Callers:
 *     NtSaveMergedKeys @ 0x14065FF88 (NtSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpBlockTwoHiveWrites @ 0x1404D83B0 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUuidCreate @ 0x14054D440 (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140668390 (CmpDoAccessCheckOnSubtree.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     CmpLogUnsupportedOperation @ 0x14066DAD0 (CmpLogUnsupportedOperation.c)
 *     CmpMergeKeyValues @ 0x14066F3AC (CmpMergeKeyValues.c)
 *     CmpCreateTemporaryHive @ 0x140672A78 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR v5; // rsi
  __int64 v6; // r12
  _DWORD *v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // eax
  int v11; // edi
  unsigned __int64 v12; // r13
  void *v13; // r12
  __int64 v14; // rcx
  int v15; // r12d
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // edx
  const GUID *v19; // r9
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-91h]
  char v22; // [rsp+40h] [rbp-79h]
  unsigned __int64 v24; // [rsp+48h] [rbp-71h]
  char v25; // [rsp+50h] [rbp-69h]
  unsigned __int64 v26; // [rsp+58h] [rbp-61h]
  unsigned int v27; // [rsp+60h] [rbp-59h]
  _DWORD v28[2]; // [rsp+68h] [rbp-51h] BYREF
  _DWORD v29[2]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+78h] [rbp-41h]
  __int64 v31; // [rsp+80h] [rbp-39h]
  __int64 v32; // [rsp+88h] [rbp-31h]
  UUID v33; // [rsp+90h] [rbp-29h] BYREF
  UUID Uuid; // [rsp+A0h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR v35; // [rsp+B0h] [rbp-9h] BYREF

  v32 = a3;
  v29[1] = 0;
  v28[1] = 0;
  v29[0] = -1;
  v5 = 0LL;
  v28[0] = -1;
  v6 = 0LL;
  v7 = 0LL;
  v24 = *(_QWORD *)(a1 + 8);
  v26 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(v26 + 24);
  v9 = *(_QWORD *)(v24 + 24);
  v30 = *(_DWORD *)(v24 + 32);
  v10 = *(_DWORD *)(v26 + 32);
  v31 = a2;
  v25 = 0;
  v27 = v10;
  v22 = 0;
  v11 = CmpUuidCreate(&Uuid);
  if ( v11 < 0 )
    goto LABEL_41;
  v11 = CmpUuidCreate(&v33);
  if ( v11 < 0 )
    goto LABEL_41;
  if ( v8 == CmpMasterHive || v9 == CmpMasterHive )
  {
    if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
      TlgWrite(&stru_14033C3C0, &unk_1402AB2E9, 0LL, v19, 2u, &v35);
    v11 = -1073741790;
    goto LABEL_37;
  }
  if ( v8 == v9 )
  {
    v11 = -1073741811;
LABEL_41:
    v12 = v26;
    goto LABEL_42;
  }
  CmpLockRegistry();
  v12 = v26;
  v13 = (void *)v24;
  CmpLockTwoKcbsShared(v24, v26);
  v22 = 1;
  if ( *(_WORD *)(v24 + 58) || *(_WORD *)(v26 + 58) )
  {
    CmpLogUnsupportedOperation(0x13u);
    v11 = -1073741822;
    goto LABEL_43;
  }
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) || CmpIsKeyDeletedForKeyBody(v31, 0LL) )
  {
    v11 = -1073741444;
    goto LABEL_43;
  }
  if ( (*(_DWORD *)(v9 + 144) & 2) != 0 && *(_DWORD *)(v9 + 88)
    || (*(_DWORD *)(v8 + 144) & 2) != 0 && *(_DWORD *)(v8 + 88) )
  {
    v11 = -1073741811;
    goto LABEL_43;
  }
  v5 = CmpCreateTemporaryHive(v14, &Uuid, &v33);
  if ( !v5 )
  {
    v11 = -1073741670;
    goto LABEL_43;
  }
  v11 = CmpBlockTwoHiveWrites(v8, v9, 0);
  if ( v11 >= 0 )
  {
    v25 = 6;
    ExAcquirePushLockSharedEx(v9 + 2952, 0LL);
    v15 = v30;
    v11 = CmpDoAccessCheckOnSubtree(v9, v30, a4, 0x20019u, 3u);
    ExReleasePushLockEx(v9 + 2952, 0LL);
    if ( v11 < 0 )
      goto LABEL_42;
    ExAcquirePushLockSharedEx(v8 + 2952, 0LL);
    v11 = CmpDoAccessCheckOnSubtree(v8, v27, a4, 0x20019u, 3u);
    ExReleasePushLockEx(v8 + 2952, 0LL);
    if ( v11 < 0 )
      goto LABEL_42;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 2848), 1u);
    v25 = 7;
    v16 = CmpCopyKeyPartial(v9, v30, v5, 0xFFFFFFFF, 6, (__int64)pData, 0);
    if ( v16 == -1 || (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL) = v16, !CmpCopySyncTree(v9, v15, v5, v16, 2, 0)) )
    {
      v11 = -1073741670;
LABEL_42:
      v13 = (void *)v24;
      goto LABEL_43;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
    v25 = 5;
    v7 = (_DWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(v8 + 8))(v8, v27, v28);
    if ( !v7 )
      goto LABEL_25;
    v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v16, v29);
    v6 = v17;
    if ( v17 && CmpMergeKeyValues(v8, v18, v7, v5, v16, v17) )
    {
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(v8 + 16))(v8, v28);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v29);
      if ( CmpCopySyncTree(v8, v27, v5, v16, 2, 2) )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 2848));
        v12 = v26;
        v13 = (void *)v24;
        v25 = 0;
        CmpUnlockTwoKcbs((void *)v24, v26);
        CmpUnlockRegistry();
        *(_QWORD *)(v5 + 2680) = v32;
        v22 = 0;
        v11 = HvWriteExternal(v5);
        *(_QWORD *)(v5 + 2680) = 0LL;
        goto LABEL_43;
      }
LABEL_25:
      v11 = -1073741670;
      goto LABEL_41;
    }
    v11 = -1073741670;
LABEL_37:
    if ( v7 )
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(v8 + 16))(v8, v28);
    if ( v6 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v29);
    goto LABEL_41;
  }
LABEL_43:
  if ( (v25 & 4) != 0 )
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
  if ( (v25 & 2) != 0 )
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
  if ( (v25 & 1) != 0 )
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 2848));
  if ( v22 )
  {
    CmpUnlockTwoKcbs(v13, v12);
    CmpUnlockRegistry();
  }
  if ( v5 )
    CmpDestroyTemporaryHive(v5);
  return (unsigned int)v11;
}
