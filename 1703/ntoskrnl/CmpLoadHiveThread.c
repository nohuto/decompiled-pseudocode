/*
 * XREFs of CmpLoadHiveThread @ 0x1405BC800
 * Callers:
 *     <none>
 * Callees:
 *     RtlAreBitsClear @ 0x14006DCF0 (RtlAreBitsClear.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlSetAllBits @ 0x14012DAF0 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x1404D3B40 (CmpGetFileSize.c)
 *     CmpInitHiveFromFile @ 0x1404D6800 (CmpInitHiveFromFile.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     PsTerminateSystemThread @ 0x14054E950 (PsTerminateSystemThread.c)
 *     RtlAppendStringToString @ 0x140582D40 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x1405BCDC0 (CmpInitBackupHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BCF50 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x1405BD1FC (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1405BD2C8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpDiskFullWarning @ 0x140669660 (CmpDiskFullWarning.c)
 *     CmpLogFailureToGetFileSize @ 0x14066DF10 (CmpLogFailureToGetFileSize.c)
 *     ExRaiseHardError @ 0x14071ED80 (ExRaiseHardError.c)
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
  int v10; // r14d
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
  ULONG i; // r14d
  __int64 v26; // r15
  struct _KEVENT *v27; // r14
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
    if ( v1 == 6 && !byte_14033C05C && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765) )
    {
      LODWORD(inited) = 0;
      goto LABEL_14;
    }
    if ( ((__int64)CmpMachineHiveList[v2 + 4] & 0x8000) != 0
      && !BYTE4(CmpMachineHiveList[v2 + 7])
      && (_DWORD)inited == -1073741772 )
    {
      LODWORD(inited) = 0;
      goto LABEL_14;
    }
    if ( (_DWORD)inited == -1073741431 )
    {
      if ( (CmpShutdownRundown & 1) != 0 )
        goto LABEL_14;
    }
    else if ( (inited & 0x80000000) == 0LL )
    {
      v5 = v33;
      if ( ((__int64)CmpMachineHiveList[v2 + 4] & 0x8000) != 0 || *(_QWORD *)(v33 + 2696) && *(_QWORD *)(v33 + 2704) )
      {
        *(_DWORD *)(v33 + 5360) = HIDWORD(CmpMachineHiveList[v2 + 4]) | 4;
        CmpMachineHiveList[v2 + 6] = (wchar_t *)v5;
        if ( v31 )
        {
          CmpInitRmLogOnLoad = 1;
          v26 = 6LL;
          v27 = &stru_14033BCD0;
          do
          {
            KeSetEvent(v27, 0, 0);
            v27 = (struct _KEVENT *)((char *)v27 + 152);
            --v26;
          }
          while ( v26 );
        }
        if ( (*(_DWORD *)(v5 + 144) & 0x8001) == 0 && (int)CmpInitBackupHive(v5, (ULONG_PTR)CmpMachineHiveList[v2]) < 0 )
          CmpDoIdleProcessing = 0;
        goto LABEL_14;
      }
    }
    CmpPuntBoot = 1;
    KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v1, inited);
  }
  v8 = *((_DWORD *)v4 + 36);
  v33 = (ULONG_PTR)v4;
  if ( (v8 & 0x8001) == 0 )
  {
    v9 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 17];
    LODWORD(inited) = CmpOpenHiveFile(v9, 0, &v40, &v32, 7, 0LL, (__int64)Length, 0LL, 0LL);
    if ( (inited & 0x80000000) != 0LL )
    {
      Timeout = 0;
    }
    else
    {
      v10 = v32 == 2 ? 18 : 2;
      LODWORD(inited) = CmpOpenHiveFile(v9, 4u, &v34, &v37, v32 == 2 ? 18 : 2, 0LL, 0LL, 0LL, 0LL);
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
            if ( (int)CmpDoFileSetSizeEx((__int64)v4, 0LL, (unsigned int)(*((_DWORD *)v4 + 350) + 4096), 1) < 0 )
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
    CmpPuntBoot = 1;
    v43 = &CmpMachineHiveList[v2 + 17];
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
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 5 && (unsigned int)CmpCheckHiveIndex < 6 )
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
