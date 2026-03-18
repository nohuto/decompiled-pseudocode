/*
 * XREFs of CmReplaceKey @ 0x1406F1CD8
 * Callers:
 *     NtReplaceKey @ 0x1406EC954 (NtReplaceKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x1401A7E20 (ZwFlushBuffersFile.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x1404F7D70 (CmpCmdHiveOpen.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140633408 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14063378C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpCmdRenameHive @ 0x1406FBAB4 (CmpCmdRenameHive.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(__int64 a1, __int64 a2, const UNICODE_STRING *a3, ULONG_PTR a4)
{
  char v6; // r12
  char v7; // r13
  int v8; // edi
  volatile signed __int64 *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HANDLE *v13; // rsi
  _BYTE v15[8]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[56]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19[44]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+210h] [rbp+110h] BYREF

  BugCheckParameter2[1] = a4;
  v15[0] = 0;
  v6 = 0;
  v7 = 0;
  memset(v18, 0, 0x30uLL);
  BugCheckParameter2[0] = 0LL;
  memset(v19, 0, sizeof(v19));
  v8 = CmpCmdHiveOpen(a3, 0, v15, BugCheckParameter2, 0x1000001u, 0, 0LL, 0LL, v19);
  if ( v8 < 0 )
  {
LABEL_22:
    v13 = (HANDLE *)BugCheckParameter2[0];
    goto LABEL_23;
  }
  CmpAttachToRegistryProcess((__int64)v18);
  v6 = 1;
  CmpLockRegistry();
  v9 = (volatile signed __int64 *)(a1 + 72);
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
  if ( (*(_DWORD *)(a1 + 160) & 4) != 0 )
    goto LABEL_3;
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    goto LABEL_5;
  if ( a1 == qword_140396A80 )
  {
    v8 = CmpPreserveSystemHiveData(a1, BugCheckParameter2[0]);
    if ( v8 < 0 )
      goto LABEL_18;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), v10, v11, v12);
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  v13 = (HANDLE *)BugCheckParameter2[0];
  v8 = CmpFlushHive(BugCheckParameter2[0], 0xCu);
  if ( v8 >= 0 )
  {
    KiUnstackDetachProcess((__int64)v18, 0LL);
    v6 = 0;
    CmpBecomeActiveFlusherAndReconciler(a1);
    v7 = 1;
    CmpLockRegistry();
    ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
    if ( (*(_DWORD *)(a1 + 160) & 4) != 0 )
    {
LABEL_3:
      v8 = -1073741611;
LABEL_18:
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), v10, v11, v12);
      KeAbPostRelease(a1 + 72);
      CmpUnlockRegistry();
      if ( v7 )
        CmpFinishBeingActiveFlusherAndReconciler(a1);
      goto LABEL_22;
    }
    if ( (*(_DWORD *)(a1 + 4152) & 0x20) == 0 )
    {
      v8 = CmpCmdRenameHive(*(HANDLE *)(a1 + 1536), ObjectInformation, 0);
      if ( v8 >= 0 )
      {
        *(_DWORD *)(a1 + 160) |= 4u;
        v8 = CmpCmdRenameHive(v13[192], 0LL, 0);
        if ( v8 < 0 || (v8 = ZwFlushBuffersFile(v13[192], &IoStatusBlock), v8 < 0) )
        {
          if ( (int)CmpCmdRenameHive(*(HANDLE *)(a1 + 1536), 0LL, 0) < 0 )
            v8 = -1073741492;
        }
      }
      goto LABEL_18;
    }
LABEL_5:
    v8 = -1073741811;
    goto LABEL_18;
  }
LABEL_23:
  if ( v13 )
  {
    if ( !v6 )
    {
      CmpAttachToRegistryProcess((__int64)v18);
      v6 = 1;
    }
    if ( v8 >= 0 )
      memset(v13 + 192, 0, 0x30uLL);
    CmpDestroyHive(v13);
  }
  if ( v6 )
    KiUnstackDetachProcess((__int64)v18, 0LL);
  return (unsigned int)v8;
}
