/*
 * XREFs of CmSaveMergedKeys @ 0x14069D67C
 * Callers:
 *     NtSaveMergedKeys @ 0x140688F10 (NtSaveMergedKeys.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404827AC (CmpLockTwoKcbsShared.c)
 *     CmpUuidCreate @ 0x14050AF74 (CmpUuidCreate.c)
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpBlockTwoHiveWrites @ 0x14068F1A8 (CmpBlockTwoHiveWrites.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406933CC (CmpDoAccessCheckOnSubtree.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 *     CmpMergeKeyValues @ 0x140699A74 (CmpMergeKeyValues.c)
 *     CmpCreateTemporaryHive @ 0x14069DB4C (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR v5; // rsi
  __int64 v6; // r12
  _DWORD *v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // eax
  int v11; // edi
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // r12
  __int64 v14; // rcx
  int v15; // r12d
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // edx
  const GUID *v19; // r9
  char pData; // [rsp+28h] [rbp-91h]
  ULONG_PTR v22; // [rsp+30h] [rbp-89h]
  char v23; // [rsp+40h] [rbp-79h]
  ULONG_PTR v25; // [rsp+48h] [rbp-71h]
  char v26; // [rsp+50h] [rbp-69h]
  ULONG_PTR v27; // [rsp+58h] [rbp-61h]
  unsigned int v28; // [rsp+60h] [rbp-59h]
  _DWORD v29[2]; // [rsp+68h] [rbp-51h] BYREF
  _DWORD v30[2]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-41h]
  __int64 v32; // [rsp+80h] [rbp-39h]
  __int64 v33; // [rsp+88h] [rbp-31h]
  UUID v34; // [rsp+90h] [rbp-29h] BYREF
  UUID Uuid; // [rsp+A0h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR v36; // [rsp+B0h] [rbp-9h] BYREF

  v33 = a3;
  v30[1] = 0;
  v29[1] = 0;
  v30[0] = -1;
  v5 = 0LL;
  v29[0] = -1;
  v6 = 0LL;
  v7 = 0LL;
  v25 = *(_QWORD *)(a1 + 8);
  v27 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(v27 + 24);
  v9 = *(_QWORD *)(v25 + 24);
  v31 = *(_DWORD *)(v25 + 32);
  v10 = *(_DWORD *)(v27 + 32);
  v32 = a2;
  v26 = 0;
  v28 = v10;
  v23 = 0;
  v11 = CmpUuidCreate(&Uuid);
  if ( v11 < 0 )
    goto LABEL_41;
  v11 = CmpUuidCreate(&v34);
  if ( v11 < 0 )
    goto LABEL_41;
  if ( (PVOID)v8 == CmpMasterHive || (PVOID)v9 == CmpMasterHive )
  {
    if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
      TlgWrite(&stru_1403549F0, &unk_1402CF0C8, 0LL, v19, 2u, &v36);
    v11 = -1073741790;
    goto LABEL_37;
  }
  if ( v8 == v9 )
  {
    v11 = -1073741811;
LABEL_41:
    v12 = v27;
    goto LABEL_42;
  }
  CmpLockRegistry();
  v12 = v27;
  v13 = v25;
  CmpLockTwoKcbsShared(v25, v27);
  v23 = 1;
  if ( *(_WORD *)(v25 + 58) || *(_WORD *)(v27 + 58) )
  {
    CmpLogUnsupportedOperation(0x13u);
    v11 = -1073741822;
    goto LABEL_43;
  }
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) || CmpIsKeyDeletedForKeyBody(v32, 0LL) )
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
  v5 = CmpCreateTemporaryHive(v14, &Uuid, &v34);
  if ( !v5 )
  {
    v11 = -1073741670;
    goto LABEL_43;
  }
  v11 = CmpBlockTwoHiveWrites(v8, v9, 0);
  if ( v11 >= 0 )
  {
    v26 = 6;
    ExAcquirePushLockSharedEx(v9 + 2952, 0LL);
    v15 = v31;
    v11 = CmpDoAccessCheckOnSubtree(v9, v31, a4, 0x20019u, 3u);
    ExReleasePushLockEx(v9 + 2952, 0LL);
    if ( v11 < 0 )
      goto LABEL_42;
    ExAcquirePushLockSharedEx(v8 + 2952, 0LL);
    v11 = CmpDoAccessCheckOnSubtree(v8, v28, a4, 0x20019u, 3u);
    ExReleasePushLockEx(v8 + 2952, 0LL);
    if ( v11 < 0 )
      goto LABEL_42;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 2848), 1u);
    LODWORD(v22) = 0;
    v26 = 7;
    v16 = CmpCopyKeyPartial(v9, v31, v5, 0xFFFFFFFF, 6, pData, v22);
    if ( v16 == -1 || (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL) = v16, !CmpCopySyncTree(v9, v15, v5, v16, 2, 0)) )
    {
      v11 = -1073741670;
LABEL_42:
      v13 = v25;
      goto LABEL_43;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
    v26 = 5;
    v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v8 + 8))(v8, v28, v29);
    if ( !v7 )
      goto LABEL_25;
    v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v16, v30);
    v6 = v17;
    if ( v17 && CmpMergeKeyValues(v8, v18, v7, v5, v16, v17) )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v29);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v30);
      if ( CmpCopySyncTree(v8, v28, v5, v16, 2, 2) )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 2848));
        v12 = v27;
        v13 = v25;
        v26 = 0;
        CmpUnlockTwoKcbs(v25, v27);
        CmpUnlockRegistry();
        *(_QWORD *)(v5 + 2680) = v33;
        v23 = 0;
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
      (*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v29);
    if ( v6 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v30);
    goto LABEL_41;
  }
LABEL_43:
  if ( (v26 & 4) != 0 )
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
  if ( (v26 & 2) != 0 )
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
  if ( (v26 & 1) != 0 )
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 2848));
  if ( v23 )
  {
    CmpUnlockTwoKcbs(v13, v12);
    CmpUnlockRegistry();
  }
  if ( v5 )
    CmpDestroyTemporaryHive((PVOID)v5);
  return (unsigned int)v11;
}
