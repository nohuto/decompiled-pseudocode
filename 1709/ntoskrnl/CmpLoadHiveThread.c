/*
 * XREFs of CmpLoadHiveThread @ 0x1405BE770
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     RtlAreBitsClear @ 0x1400AFA40 (RtlAreBitsClear.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     RtlSetAllBits @ 0x14012CF30 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpInitHiveFromFile @ 0x1404DE1EC (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpGetFileSize @ 0x1404E5BE8 (CmpGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     PsTerminateSystemThread @ 0x140599300 (PsTerminateSystemThread.c)
 *     RtlAppendStringToString @ 0x14059B940 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x1405BECEC (CmpInitBackupHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BEE7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x1405BF128 (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1405BF1F4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpDiskFullWarning @ 0x140694480 (CmpDiskFullWarning.c)
 *     CmpLogFailureToGetFileSize @ 0x140698408 (CmpLogFailureToGetFileSize.c)
 *     ExRaiseHardError @ 0x14075EBE0 (ExRaiseHardError.c)
 */

NTSTATUS __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // r12d
  __int64 v2; // rsi
  ULONG_PTR inited; // rbx
  wchar_t *v4; // rdi
  ULONG_PTR v5; // rdi
  wchar_t *v6; // rcx
  int v8; // eax
  UNICODE_STRING *v9; // r13
  unsigned int v10; // r14d
  HANDLE v11; // r15
  NTSTATUS FileSize; // eax
  __int64 v13; // rcx
  int v14; // ebx
  HANDLE v15; // r14
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  HANDLE v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rax
  ULONG v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  struct _KEVENT *v25; // r14
  __int64 v26; // r15
  ULONG i; // r14d
  int Timeout; // [rsp+28h] [rbp-E0h]
  int v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+40h] [rbp-C8h]
  char v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG_PTR v33; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE v34; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD Length[2]; // [rsp+70h] [rbp-98h] BYREF
  ULONG Length_8[4]; // [rsp+78h] [rbp-90h] BYREF
  int v37; // [rsp+88h] [rbp-80h] BYREF
  int v38; // [rsp+8Ch] [rbp-7Ch] BYREF
  _BYTE v39[8]; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v40; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v41; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t **v43; // [rsp+B0h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+B8h] [rbp-50h]
  ULONG_PTR BugCheckParameter2[44]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = BugCheckParameter3;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  BugCheckParameter3a = v1;
  v2 = 19LL * v1;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v2 + 8], Executive, 0, 0, 0LL);
  if ( v1 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v4 = CmpMachineHiveList[v2 + 3];
  BYTE2(CmpMachineHiveList[v2 + 7]) = 1;
  if ( !v4 )
  {
    inited = (int)CmpInitHiveFromFile(
                    (PCUNICODE_STRING)&CmpMachineHiveList[v2 + 17],
                    (int)CmpMachineHiveList[v2 + 4],
                    &v33,
                    (_BYTE *)&CmpMachineHiveList[v2 + 7] + 3,
                    0x1090001u,
                    0LL,
                    v29,
                    v30,
                    (__int64)&v31,
                    BugCheckParameter2);
    if ( v1 == 6
      && !BYTE4(CmpMachineHiveList[v2 + 7])
      && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
      || ((__int64)CmpMachineHiveList[v2 + 4] & 0x8000) != 0
      && !BYTE4(CmpMachineHiveList[v2 + 7])
      && (_DWORD)inited == -1073741772 )
    {
      LODWORD(inited) = 0;
    }
    else if ( (_DWORD)inited != -1073741431 || (CmpShutdownRundown & 1) == 0 )
    {
      if ( (inited & 0x80000000) != 0LL
        || (v5 = v33, ((__int64)CmpMachineHiveList[v2 + 4] & 0x8000) == 0)
        && (!*(_QWORD *)(v33 + 2696) || !*(_QWORD *)(v33 + 2704)) )
      {
        CmpPuntBoot = 1;
        KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v1, inited);
      }
      *(_DWORD *)(v33 + 5360) = HIDWORD(CmpMachineHiveList[v2 + 4]) | 4;
      CmpMachineHiveList[v2 + 6] = (wchar_t *)v5;
      if ( v31 )
      {
        CmpInitRmLogOnLoad = 1;
        v25 = &stru_140353D00;
        v26 = 7LL;
        do
        {
          KeSetEvent(v25, 0, 0);
          v25 = (struct _KEVENT *)((char *)v25 + 152);
          --v26;
        }
        while ( v26 );
      }
      if ( (*(_DWORD *)(v5 + 144) & 0x8001) == 0 && (int)CmpInitBackupHive(v5, (ULONG_PTR)CmpMachineHiveList[v2]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    goto LABEL_14;
  }
  v8 = *((_DWORD *)v4 + 36);
  v33 = (ULONG_PTR)v4;
  if ( (v8 & 0x8001) == 0 )
  {
    v9 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 17];
    LODWORD(inited) = CmpOpenHiveFile(v9, 0, &v40, &v32, 7u, 0LL, (__int64)Length, 0LL, 0LL);
    if ( (inited & 0x80000000) != 0LL )
    {
      Timeout = 0;
    }
    else
    {
      v10 = (16 * (v32 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile(v9, 4u, &v34, &v37, v10, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        Timeout = 16;
      }
      else
      {
        LODWORD(inited) = CmpOpenHiveFile(v9, 5u, &v41, &v38, v10, 0LL, 0LL, 0LL, 0LL);
        if ( (inited & 0x80000000) != 0LL )
        {
          Timeout = 32;
        }
        else
        {
          v11 = v40;
          LODWORD(inited) = CmpGetFileSize(v40, &v42);
          if ( (inited & 0x80000000) != 0LL )
          {
            Timeout = 40;
          }
          else
          {
            FileSize = CmpGetFileSize(v34, Length_8);
            v14 = FileSize;
            if ( FileSize < 0 )
            {
              CmpLogFailureToGetFileSize(v13, 4LL, (unsigned int)FileSize);
              *((_QWORD *)v4 + 7) = BugCheckParameter2;
              BugCheckParameter2[0] = (ULONG_PTR)v4;
              SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v14, 43);
              *(_QWORD *)Length_8 = 0LL;
            }
            v15 = v41;
            v16 = CmpGetFileSize(v41, &Length_8[2]);
            v18 = v16;
            if ( v16 < 0 )
            {
              CmpLogFailureToGetFileSize(v17, 5LL, (unsigned int)v16);
              *((_QWORD *)v4 + 7) = BugCheckParameter2;
              BugCheckParameter2[0] = (ULONG_PTR)v4;
              SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v18, 45);
              *(_QWORD *)&Length_8[2] = 0LL;
            }
            CmpBecomeActiveFlusherAndReconciler(v4);
            CmpLockRegistry();
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v4 + 356), 1u);
            v19 = v34;
            v20 = *(_OWORD *)Length_8;
            *((_QWORD *)v4 + 333) = v11;
            *((_QWORD *)v4 + 337) = v19;
            v21 = v42;
            *((_QWORD *)v4 + 338) = v15;
            *((_QWORD *)v4 + 371) = v21;
            *((_OWORD *)v4 + 186) = v20;
            *((_DWORD *)v4 + 36) &= ~2u;
            *((_DWORD *)v4 + 1340) = HIDWORD(CmpMachineHiveList[v2 + 4]);
            *((_DWORD *)v4 + 42) = Length[1];
            if ( (int)CmpDoFileSetSizeEx((__int64)v4, 0, (unsigned int)(*((_DWORD *)v4 + 350) + 4096), 1) < 0 )
            {
              BYTE2(NlsMbCodePageTag) = 1;
              *((_DWORD *)v4 + 36) &= ~0x20000u;
            }
            v22 = Length[0];
            if ( *((_DWORD *)v4 + 30) != Length[0] )
            {
              for ( i = 0; i < *((_DWORD *)v4 + 18); i += v22 )
              {
                if ( !RtlAreBitsClear((PRTL_BITMAP)(v4 + 36), i, v22) )
                  RtlSetBits((PRTL_BITMAP)(v4 + 36), i, v22);
              }
              *((_DWORD *)v4 + 22) = RtlNumberOfSetBits((PRTL_BITMAP)(v4 + 36));
              *((_DWORD *)v4 + 30) = v22;
            }
            v23 = *((_QWORD *)v4 + 8);
            if ( *(_DWORD *)(v23 + 4092) || (*(_DWORD *)(v23 + 4088) & 4) != 0 )
            {
              RtlSetAllBits((PRTL_BITMAP)(v4 + 36));
              *((_DWORD *)v4 + 22) = *((_DWORD *)v4 + 18);
            }
            ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
            CmpUnlockRegistry();
            CmpLockRegistryExclusive();
            if ( v1 == 3 )
            {
              ExAcquireResourceSharedLite(*((PERESOURCE *)v4 + 356), 1u);
              CmpMarkCurrentValueDirty((ULONG_PTR)v4);
              ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
            }
            CmpMachineHiveList[v2 + 6] = v4;
            LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v4);
            if ( (inited & 0x80000000) == 0LL )
            {
              CmpUnlockRegistry();
              CmpFinishBeingActiveFlusherAndReconciler(v4);
              v24 = *((_QWORD *)v4 + 8);
              if ( *(_DWORD *)(v24 + 4092) || (*(_DWORD *)(v24 + 4088) & 4) != 0 )
              {
                CmpFlushHive((ULONG_PTR)v4, 0xCu);
                CmpLockRegistry();
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v4 + 356), 1u);
                *(_DWORD *)(*((_QWORD *)v4 + 8) + 4092LL) = 0;
                *(_DWORD *)(*((_QWORD *)v4 + 8) + 4088LL) &= ~4u;
                ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
                CmpUnlockRegistry();
              }
              if ( BYTE2(NlsMbCodePageTag) )
                CmpDiskFullWarning();
              *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
              SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
              RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)v9);
              if ( (int)CmpInitBackupHive((ULONG_PTR)v4, (ULONG_PTR)CmpMachineHiveList[v2]) < 0 )
                CmpDoIdleProcessing = 0;
              goto LABEL_21;
            }
            Timeout = 80;
          }
        }
      }
    }
    *((_QWORD *)v4 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v4;
    SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, Timeout);
    v43 = &CmpMachineHiveList[v2 + 17];
    CmpPuntBoot = 1;
    ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&v43, 1, (__int64)v39);
    KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)inited);
  }
  if ( CmpMiniNTBoot || CmpVolatileBoot )
  {
    if ( (v8 & 2) != 0 )
    {
      CmpLockRegistry();
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v4 + 356), 1u);
      *((_DWORD *)v4 + 36) &= ~2u;
      ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
      CmpUnlockRegistry();
    }
    *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
    SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
    RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v2 + 17]);
  }
LABEL_21:
  *((_DWORD *)v4 + 1340) |= 4u;
  if ( v1 == 3 )
  {
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*((PERESOURCE *)v4 + 356), 1u);
    *((_DWORD *)v4 + 36) |= 0x200u;
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
    CmpUnlockRegistry();
  }
LABEL_14:
  BYTE1(CmpMachineHiveList[v2 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v6 = CmpMachineHiveList[v2 + 18];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    LODWORD(CmpMachineHiveList[v2 + 17]) = 0;
    CmpMachineHiveList[v2 + 18] = 0LL;
  }
  return PsTerminateSystemThread(inited);
}
