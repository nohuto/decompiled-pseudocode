/*
 * XREFs of CmpLoadHiveThread @ 0x140632C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlAreBitsClear @ 0x140006FE0 (RtlAreBitsClear.c)
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlSetAllBits @ 0x14007D2B0 (RtlSetAllBits.c)
 *     RtlNumberOfSetBits @ 0x14008B0F0 (RtlNumberOfSetBits.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpGetFileSize @ 0x140498C14 (CmpGetFileSize.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpInitHiveFromFile @ 0x14049DBFC (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 *     PsTerminateSystemThread @ 0x140582610 (PsTerminateSystemThread.c)
 *     RtlAppendStringToString @ 0x1406105D0 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x140633278 (CmpInitBackupHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140633408 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x1406334A0 (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x1406336C0 (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14063378C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpLogFailureToGetFileSize @ 0x1406FB598 (CmpLogFailureToGetFileSize.c)
 *     CmpDiskFullWarning @ 0x1406FBB78 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x1407C5960 (ExRaiseHardError.c)
 */

NTSTATUS __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // ebx
  ULONG_PTR v2; // r12
  int v3; // edi
  __int64 v4; // r14
  ULONG_PTR inited; // r15
  wchar_t *v6; // rsi
  ULONG_PTR v7; // rbx
  wchar_t *v8; // rcx
  wchar_t *v10; // r12
  int v11; // eax
  signed __int64 *v12; // rsi
  unsigned int v13; // r12d
  NTSTATUS FileSize; // eax
  __int64 v15; // rcx
  int v16; // r15d
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  int v19; // r15d
  __int128 v20; // xmm0
  wchar_t *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG v25; // ebx
  __int64 v26; // rax
  volatile signed __int64 *v27; // r12
  char v28; // al
  ULONG_PTR v29; // rcx
  int v30; // eax
  struct _KEVENT *v31; // rsi
  __int64 v32; // r12
  ULONG i; // r15d
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  wchar_t *v37; // rcx
  volatile signed __int64 *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // [rsp+38h] [rbp-D0h]
  int v43; // [rsp+40h] [rbp-C8h]
  __int64 v44; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v45; // [rsp+60h] [rbp-A8h] BYREF
  STRING *Source; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *v48; // [rsp+78h] [rbp-90h]
  HANDLE v49; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v50; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v51; // [rsp+90h] [rbp-78h] BYREF
  ULONG Length[2]; // [rsp+98h] [rbp-70h] BYREF
  wchar_t *v53; // [rsp+A0h] [rbp-68h]
  ULONG_PTR v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+B0h] [rbp-58h] BYREF
  int v56; // [rsp+C0h] [rbp-48h] BYREF
  int v57; // [rsp+C4h] [rbp-44h] BYREF
  char v58[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-38h] BYREF
  STRING *v60; // [rsp+D8h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+E0h] [rbp-28h]
  ULONG_PTR BugCheckParameter2[44]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = BugCheckParameter3;
  v54 = BugCheckParameter3;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v2 = v1;
  v3 = 0;
  BugCheckParameter3a = v1;
  v4 = 19LL * v1;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v4 + 8], Executive, 0, 0, 0LL);
  if ( v1 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v6 = CmpMachineHiveList[v4 + 3];
  BYTE2(CmpMachineHiveList[v4 + 7]) = 1;
  if ( !v6 )
  {
    inited = (int)CmpInitHiveFromFile(
                    (PCUNICODE_STRING)&CmpMachineHiveList[v4 + 17],
                    (unsigned int)CmpMachineHiveList[v4 + 4],
                    &v45,
                    (_BYTE *)&CmpMachineHiveList[v4 + 7] + 3,
                    0x1090001u,
                    0LL,
                    v42,
                    v43,
                    &v44,
                    BugCheckParameter2);
    if ( v1 == 6
      && !BYTE4(CmpMachineHiveList[v4 + 7])
      && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
      || ((__int64)CmpMachineHiveList[v4 + 4] & 0x8000) != 0
      && !BYTE4(CmpMachineHiveList[v4 + 7])
      && (_DWORD)inited == -1073741772 )
    {
      LODWORD(inited) = 0;
    }
    else if ( (_DWORD)inited != -1073741431 || (CmpShutdownRundown & 1) == 0 )
    {
      if ( (inited & 0x80000000) != 0LL
        || (v7 = v45, ((__int64)CmpMachineHiveList[v4 + 4] & 0x8000) == 0)
        && (!*(_QWORD *)(v45 + 1568) || !*(_QWORD *)(v45 + 1576)) )
      {
        CmpPuntBoot = 1;
        KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v2, inited);
      }
      *(_DWORD *)(v45 + 4152) = HIDWORD(CmpMachineHiveList[v4 + 4]) | 4;
      CmpMachineHiveList[v4 + 6] = (wchar_t *)v7;
      if ( (_BYTE)v44 )
      {
        CmpInitRmLogOnLoad = 1;
        v31 = &stru_1403968E0;
        v32 = 7LL;
        do
        {
          KeSetEvent(v31, 0, 0);
          v31 = (struct _KEVENT *)((char *)v31 + 152);
          --v32;
        }
        while ( v32 );
      }
      if ( (*(_DWORD *)(v7 + 160) & 0x8001) == 0 && (int)CmpInitBackupHive(v7, (ULONG_PTR)CmpMachineHiveList[v4]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    goto LABEL_14;
  }
  v10 = v6 + 80;
  v45 = (ULONG_PTR)v6;
  v11 = *((_DWORD *)v6 + 40);
  v48 = v6 + 80;
  if ( (v11 & 0x8001) == 0 )
  {
    Source = (STRING *)&CmpMachineHiveList[v4 + 17];
    LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)Source, 0, &v49, (int *)&v47, 7u, 0LL, (int *)Length, 0LL, 0LL);
    if ( (inited & 0x80000000) == 0LL )
    {
      v13 = (16 * ((_DWORD)v47 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)Source, 4u, &v50, &v56, v13, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v3 = 16;
      }
      else
      {
        LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)Source, 5u, &v51, &v57, v13, 0LL, 0LL, 0LL, 0LL);
        if ( (inited & 0x80000000) != 0LL )
        {
          v3 = 32;
        }
        else
        {
          LODWORD(inited) = CmpGetFileSize(v49, &v59);
          if ( (inited & 0x80000000) != 0LL )
          {
            v3 = 40;
          }
          else
          {
            FileSize = CmpGetFileSize(v50, &v55);
            v16 = FileSize;
            if ( FileSize < 0 )
            {
              CmpLogFailureToGetFileSize(v15, 4LL, (unsigned int)FileSize);
              *((_QWORD *)v6 + 7) = BugCheckParameter2;
              BugCheckParameter2[0] = (ULONG_PTR)v6;
              SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v16, 43);
              *(_QWORD *)&v55 = 0LL;
            }
            v17 = CmpGetFileSize(v51, (_QWORD *)&v55 + 1);
            v19 = v17;
            if ( v17 < 0 )
            {
              CmpLogFailureToGetFileSize(v18, 5LL, (unsigned int)v17);
              *((_QWORD *)v6 + 7) = BugCheckParameter2;
              BugCheckParameter2[0] = (ULONG_PTR)v6;
              SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v19, 45);
              *((_QWORD *)&v55 + 1) = 0LL;
            }
            CmpBecomeActiveFlusherAndReconciler(v6);
            CmpLockRegistry();
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 + 36), 0LL);
            v20 = v55;
            *((_QWORD *)v6 + 192) = v49;
            *((_QWORD *)v6 + 196) = v50;
            *((_QWORD *)v6 + 197) = v51;
            *((_QWORD *)v6 + 224) = v59;
            v21 = v48;
            *(_OWORD *)(v6 + 900) = v20;
            *(_DWORD *)v21 &= ~2u;
            *((_DWORD *)v6 + 1038) = HIDWORD(CmpMachineHiveList[v4 + 4]);
            *((_DWORD *)v6 + 46) = Length[1];
            if ( (int)CmpDoFileSetSizeEx((__int64)v6, 0, (unsigned int)(*((_DWORD *)v6 + 68) + 4096), 1) < 0 )
              BYTE2(NlsMbCodePageTag) = 1;
            v25 = Length[0];
            if ( *((_DWORD *)v6 + 34) != Length[0] )
            {
              for ( i = 0; i < *((_DWORD *)v6 + 22); i += v25 )
              {
                if ( !RtlAreBitsClear((PRTL_BITMAP)(v6 + 44), i, v25) )
                  RtlSetBits((PRTL_BITMAP)(v6 + 44), i, v25);
              }
              *((_DWORD *)v6 + 26) = RtlNumberOfSetBits((PRTL_BITMAP)(v6 + 44));
              *((_DWORD *)v6 + 34) = v25;
            }
            v26 = *((_QWORD *)v6 + 8);
            v53 = v6 + 32;
            if ( *(_DWORD *)(v26 + 4092) || (*(_DWORD *)(v26 + 4088) & 4) != 0 )
            {
              RtlSetAllBits((PRTL_BITMAP)(v6 + 44));
              *((_DWORD *)v6 + 26) = *((_DWORD *)v6 + 22);
            }
            v27 = (volatile signed __int64 *)(v6 + 36);
            v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 9, 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v28 & 2) != 0 && (v28 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)v6 + 9, v22, v23, v24);
            KeAbPostRelease((ULONG_PTR)(v6 + 36));
            CmpUnlockRegistry();
            CmpLockRegistryExclusive();
            if ( (_DWORD)v54 == 3 )
            {
              ExAcquirePushLockSharedEx((ULONG_PTR)(v6 + 36), 0LL);
              CmpMarkCurrentValueDirty(v45);
              if ( _InterlockedCompareExchange64(v27, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)v6 + 9);
              KeAbPostRelease((ULONG_PTR)(v6 + 36));
            }
            v6 = (wchar_t *)v45;
            v29 = v45;
            CmpMachineHiveList[v4 + 6] = (wchar_t *)v45;
            LODWORD(inited) = HvpDropPagedBins(v29);
            if ( (inited & 0x80000000) == 0LL )
            {
              CmpUnlockRegistry();
              CmpFinishBeingActiveFlusherAndReconciler(v6);
              if ( *(_DWORD *)(*(_QWORD *)v53 + 4092LL) || (*(_DWORD *)(*(_QWORD *)v53 + 4088LL) & 4) != 0 )
              {
                CmpFlushHive((ULONG_PTR)v6, 0xCu);
                CmpLockRegistry();
                ExAcquirePushLockExclusiveEx((ULONG_PTR)v27, 0LL);
                v37 = v53;
                *(_DWORD *)(*(_QWORD *)v53 + 4092LL) = 0;
                *(_DWORD *)(*(_QWORD *)v37 + 4088LL) &= ~4u;
                if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v27, v34, v35, v36);
                KeAbPostRelease((ULONG_PTR)v27);
                CmpUnlockRegistry();
                v6 = (wchar_t *)v45;
              }
              if ( BYTE2(NlsMbCodePageTag) )
                CmpDiskFullWarning();
              SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
              *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
              RtlAppendStringToString(&SystemHiveFullPathName, Source);
              v30 = CmpInitBackupHive((ULONG_PTR)v6, (ULONG_PTR)CmpMachineHiveList[v4]);
              v10 = v48;
              if ( v30 < 0 )
                CmpDoIdleProcessing = 0;
              goto LABEL_21;
            }
            v3 = 80;
          }
        }
      }
    }
    *((_QWORD *)v6 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v6;
    SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v3);
    v60 = Source;
    CmpPuntBoot = 1;
    ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&v60, 1, (__int64)v58);
    KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)inited);
  }
  if ( CmpMiniNTBoot || CmpVolatileBoot )
  {
    if ( (v11 & 2) != 0 )
    {
      CmpLockRegistry();
      v38 = (volatile signed __int64 *)(v6 + 36);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v38, 0LL);
      *(_DWORD *)v10 &= ~2u;
      if ( (_InterlockedExchangeAdd64(v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v38, v39, v40, v41);
      KeAbPostRelease((ULONG_PTR)v38);
      CmpUnlockRegistry();
      v6 = (wchar_t *)v45;
    }
    *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
    SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
    RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v4 + 17]);
  }
LABEL_21:
  *((_DWORD *)v6 + 1038) |= 4u;
  if ( (_DWORD)v54 == 3 )
  {
    CmpLockRegistry();
    v12 = (signed __int64 *)(v6 + 36);
    ExAcquirePushLockSharedEx((ULONG_PTR)v12, 0LL);
    *(_DWORD *)v10 |= 0x200u;
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    CmpUnlockRegistry();
  }
LABEL_14:
  BYTE1(CmpMachineHiveList[v4 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v4 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v8 = CmpMachineHiveList[v4 + 18];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    LODWORD(CmpMachineHiveList[v4 + 17]) = 0;
    CmpMachineHiveList[v4 + 18] = 0LL;
  }
  return PsTerminateSystemThread(inited);
}
