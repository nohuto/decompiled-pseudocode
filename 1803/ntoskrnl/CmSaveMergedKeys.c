/*
 * XREFs of CmSaveMergedKeys @ 0x1407025D4
 * Callers:
 *     NtSaveMergedKeys @ 0x1406ED214 (NtSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404ACECC (CmpLockTwoKcbsShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUuidCreate @ 0x1405624F4 (CmpUuidCreate.c)
 *     CmpBlockTwoHiveWrites @ 0x1405C041C (CmpBlockTwoHiveWrites.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406F62BC (CmpDoAccessCheckOnSubtree.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 *     HvWriteExternal @ 0x1406FB84C (HvWriteExternal.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x1406FE0DC (CmpMergeKeyValues.c)
 *     CmpCreateTemporaryHive @ 0x140702B18 (CmpCreateTemporaryHive.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rcx
  __int64 v6; // r13
  ULONG_PTR v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  char v10; // r12
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  const GUID *v14; // r9
  NTSTATUS v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  char pData; // [rsp+28h] [rbp-91h]
  ULONG_PTR v30; // [rsp+30h] [rbp-89h]
  char v31; // [rsp+40h] [rbp-79h]
  char v34; // [rsp+48h] [rbp-71h]
  unsigned int v35; // [rsp+50h] [rbp-69h]
  unsigned int v36; // [rsp+54h] [rbp-65h]
  _DWORD v37[2]; // [rsp+58h] [rbp-61h] BYREF
  _DWORD v38[2]; // [rsp+60h] [rbp-59h] BYREF
  _DWORD *v39; // [rsp+68h] [rbp-51h]
  ULONG_PTR v40; // [rsp+70h] [rbp-49h]
  ULONG_PTR v41; // [rsp+78h] [rbp-41h]
  __int64 v42; // [rsp+80h] [rbp-39h]
  __int64 v43; // [rsp+88h] [rbp-31h]
  UUID v44; // [rsp+90h] [rbp-29h] BYREF
  UUID Uuid; // [rsp+A0h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR v46; // [rsp+B0h] [rbp-9h] BYREF

  v43 = a3;
  v38[1] = 0;
  v37[1] = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  v38[0] = -1;
  v37[0] = -1;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = 0LL;
  v8 = *(_QWORD *)(v5 + 24);
  v9 = 0LL;
  v41 = v4;
  v10 = 0;
  v36 = *(_DWORD *)(v4 + 32);
  LODWORD(v4) = *(_DWORD *)(v5 + 32);
  v40 = v5;
  v42 = a2;
  v39 = 0LL;
  v35 = v4;
  v31 = 0;
  v12 = CmpUuidCreate(&Uuid);
  if ( v12 < 0 )
    goto LABEL_46;
  v15 = CmpUuidCreate(&v44);
  v14 = 0LL;
  v12 = v15;
  if ( v15 < 0 )
    goto LABEL_46;
  if ( (PVOID)v8 == CmpMasterHive || (PVOID)v6 == CmpMasterHive )
  {
    if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
      TlgWrite(&stru_140397090, &unk_140308A79, 0LL, v14, 2u, &v46);
    v12 = -1073741790;
LABEL_42:
    if ( v39 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v37);
    if ( v9 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v38);
    goto LABEL_46;
  }
  if ( v8 == v6 )
  {
LABEL_6:
    v12 = -1073741811;
    goto LABEL_46;
  }
  CmpLockRegistry();
  CmpLockTwoKcbsShared(v41, v40);
  v31 = 1;
  if ( *(_WORD *)(v41 + 58) || *(_WORD *)(v40 + 58) )
  {
    CmpLogUnsupportedOperation(0x13u);
    v12 = -1073741822;
    goto LABEL_46;
  }
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) || CmpIsKeyDeletedForKeyBody(v42, 0LL) )
  {
    v12 = -1073741444;
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(v6 + 160) & 2) != 0 && *(_DWORD *)(v6 + 104)
    || (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) )
  {
    goto LABEL_6;
  }
  v7 = CmpCreateTemporaryHive(&Uuid, &v44);
  if ( !v7 )
  {
    v12 = -1073741670;
    goto LABEL_46;
  }
  v12 = CmpBlockTwoHiveWrites(v8, v6, 0);
  if ( v12 >= 0 )
  {
    v10 = 6;
    ExAcquirePushLockSharedEx(v6 + 1776, 0LL);
    v12 = CmpDoAccessCheckOnSubtree(v6, v36, a4, 0x20019u, 3u);
    ExReleasePushLockEx(v6 + 1776, 0LL, v16, v17);
    if ( v12 >= 0 )
    {
      ExAcquirePushLockSharedEx(v8 + 1776, 0LL);
      v12 = CmpDoAccessCheckOnSubtree(v8, v35, a4, 0x20019u, 3u);
      ExReleasePushLockEx(v8 + 1776, 0LL, v18, v19);
      if ( v12 >= 0 )
      {
        ExAcquirePushLockExclusiveEx(v7 + 72, 0LL);
        LODWORD(v30) = 0;
        v34 = 7;
        v20 = CmpCopyKeyPartial(v6, v36, v7, 0xFFFFFFFF, 6, pData, v30);
        v21 = v20;
        if ( v20 == -1 )
          goto LABEL_21;
        *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) = v20;
        if ( !CmpCopySyncTree(v6, v36, v7, v20, 2, 0) )
          goto LABEL_21;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 72), v11, v13, (__int64)v14);
        KeAbPostRelease(v6 + 72);
        v34 = 5;
        v39 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v8 + 8))(v8, v35, v37);
        if ( !v39 )
          goto LABEL_21;
        v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v21, v38);
        v9 = v22;
        if ( v22 && CmpMergeKeyValues(v8, v11, v39, v7, v21, v22) )
        {
          (*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v37);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v38);
          if ( CmpCopySyncTree(v8, v35, v7, v21, 2, 2) )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 72), v11, v13, (__int64)v14);
            KeAbPostRelease(v8 + 72);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 72), v23, v24, v25);
            KeAbPostRelease(v7 + 72);
            v34 = 0;
            CmpUnlockTwoKcbs(v41, v40, v26, v27);
            CmpUnlockRegistry();
            *(_QWORD *)(v7 + 1552) = v43;
            v31 = 0;
            v12 = HvWriteExternal(v7);
            *(_QWORD *)(v7 + 1552) = 0LL;
            goto LABEL_22;
          }
LABEL_21:
          v12 = -1073741670;
LABEL_22:
          v10 = v34;
          goto LABEL_46;
        }
        v10 = 5;
        v12 = -1073741670;
        goto LABEL_42;
      }
    }
  }
LABEL_46:
  if ( (v10 & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 72), v11, v13, (__int64)v14);
    KeAbPostRelease(v8 + 72);
  }
  if ( (v10 & 2) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 72), v11, v13, (__int64)v14);
    KeAbPostRelease(v6 + 72);
  }
  if ( (v10 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 72), v11, v13, (__int64)v14);
    KeAbPostRelease(v7 + 72);
  }
  if ( v31 )
  {
    CmpUnlockTwoKcbs(v41, v40, v13, (__int64)v14);
    CmpUnlockRegistry();
  }
  if ( v7 )
    CmpDestroyHive((char *)v7);
  return (unsigned int)v12;
}
