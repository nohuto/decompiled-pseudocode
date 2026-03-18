/*
 * XREFs of CmSaveKey @ 0x1407022E4
 * Callers:
 *     NtSaveKeyEx @ 0x1406ECF78 (NtSaveKeyEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUuidCreate @ 0x1405624F4 (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpTraceHiveSaveFileCopied @ 0x1406EEA30 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveFileWritten @ 0x1406EEA9C (CmpTraceHiveSaveFileWritten.c)
 *     CmpTraceHiveSaveStart @ 0x1406EEB08 (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x1406EEBE0 (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x1406EEC70 (CmpTraceHiveSaveTreeCopied.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406F62BC (CmpDoAccessCheckOnSubtree.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 *     HvWriteExternal @ 0x1406FB84C (HvWriteExternal.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 *     CmpCreateTemporaryHive @ 0x140702B18 (CmpCreateTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140703540 (CmpSaveKeyByFileCopy.c)
 */

NTSTATUS __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR v4; // rbp
  __int64 v8; // r15
  NTSTATUS result; // eax
  ULONG_PTR v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  volatile signed __int64 *v15; // rsi
  unsigned int v16; // r13d
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  BOOLEAN v21; // di
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // [rsp+28h] [rbp-80h]
  ULONG_PTR v35; // [rsp+30h] [rbp-78h]
  UUID v37; // [rsp+48h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+58h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v4 + 24);
  if ( (PVOID)v8 == CmpMasterHive )
    return -1073741790;
  if ( *(_WORD *)(v4 + 58) )
  {
    CmpLogUnsupportedOperation(0x12u);
    return -1073741822;
  }
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v37);
    if ( result >= 0 )
    {
      v10 = CmpCreateTemporaryHive(&Uuid, &v37);
      if ( !v10 )
        return -1073741670;
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(v4 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 48));
      CmpTraceHiveSaveStart(v4);
      if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v14 = -1073741444;
      }
      else
      {
        v15 = (volatile signed __int64 *)(v8 + 72);
        ExAcquirePushLockExclusiveEx(v8 + 72, 0LL);
        v16 = *(_DWORD *)(v4 + 32);
        ExAcquirePushLockSharedEx(v8 + 1776, 0LL);
        v14 = CmpDoAccessCheckOnSubtree(v8, v16, a4, 0x20019u, 3u);
        ExReleasePushLockEx(v8 + 1776, 0LL, v17, v18);
        if ( v14 >= 0 )
        {
          if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) && *(_QWORD *)(v8 + 1536) )
          {
            v21 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v8 + 1632));
            v24 = _InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL);
            LOBYTE(v24) = v24 & 6;
            if ( (_BYTE)v24 == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 72), v24, v22, v23);
            KeAbPostRelease(v8 + 72);
            CmpUnlockKcb(v4, v25, v26, v27);
            CmpUnlockRegistry();
            if ( v21 )
            {
              v14 = CmpSaveKeyByFileCopy(v8);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v8 + 1632));
              if ( v14 >= 0 )
                CmpTraceHiveSaveFileCopied();
            }
            else
            {
              v14 = -1073741444;
            }
            goto LABEL_27;
          }
          LODWORD(v35) = 0;
          *(_DWORD *)(*(_QWORD *)(v10 + 64) + 24LL) = a3;
          *(_DWORD *)(v10 + 212) = a3;
          v28 = CmpCopyKeyPartial(v8, v16, v10, 0xFFFFFFFF, 6, v34, v35);
          if ( v28 != -1 )
          {
            CmpTraceHiveSaveTreeCopied();
            *(_DWORD *)(*(_QWORD *)(v10 + 64) + 36LL) = v28;
            if ( CmpCopySyncTree(v8, v16, v10, v28, 2, 0) )
            {
              v30 = _InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL);
              LOBYTE(v30) = v30 & 6;
              if ( (_BYTE)v30 == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 72), v30, v19, v20);
              KeAbPostRelease(v8 + 72);
              CmpUnlockKcb(v4, v31, v32, v33);
              CmpUnlockRegistry();
              *(_QWORD *)(v10 + 1552) = a2;
              v14 = HvWriteExternal(v10);
              if ( v14 >= 0 )
                CmpTraceHiveSaveFileWritten();
              goto LABEL_27;
            }
          }
          v14 = -1073741670;
        }
        v29 = _InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL);
        LOBYTE(v29) = v29 & 6;
        if ( (_BYTE)v29 == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 72), v29, v19, v20);
        KeAbPostRelease(v8 + 72);
      }
      CmpUnlockKcb(v4, v11, v12, v13);
      CmpUnlockRegistry();
LABEL_27:
      *(_QWORD *)(v10 + 1552) = 0LL;
      CmpDestroyHive((char *)v10);
      CmpTraceHiveSaveStop(v14);
      return v14;
    }
  }
  return result;
}
