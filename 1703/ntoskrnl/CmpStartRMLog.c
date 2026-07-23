/*
 * XREFs of CmpStartRMLog @ 0x14042EC9C
 * Callers:
 *     CmpStartRMLogs @ 0x14042E9F8 (CmpStartRMLogs.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpStartCLFSLog @ 0x14042F0D4 (CmpStartCLFSLog.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404D809C (CmpQueryFileSecurityDescriptor.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 *     CmpRmAnalysisPhase @ 0x14066C028 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x14066C234 (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x14066C3E0 (CmpRmUnDoPhase.c)
 */

__int64 __fastcall CmpStartRMLog(char *a1, _OWORD *a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  CLFS_INFORMATION *PoolWithTag; // r15
  bool v7; // zf
  NTSTATUS FileSecurityDescriptor; // ebx
  __int64 v9; // r12
  ULONG_PTR v10; // rax
  PVOID *v11; // r14
  PLOG_FILE_OBJECT *v12; // r13
  __int64 v13; // rax
  CLFS_INFORMATION *v14; // rax
  CLFS_INFORMATION *v15; // rbx
  FILE_OBJECT *v16; // rcx
  PVOID v17; // rcx
  NTSTATUS v18; // ecx
  CLFS_LSN LastLsn; // rax
  PVOID v20; // rcx
  NTSTATUS v21; // eax
  CLFS_LSN v23; // rbx
  FILE_OBJECT *v24; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-A9h]
  CLFS_LSN plsn2; // [rsp+50h] [rbp-79h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-71h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h]
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-61h] BYREF
  ULONG pcbInfoBuffer; // [rsp+78h] [rbp-51h] BYREF
  ULONG pcbRestartBuffer; // [rsp+7Ch] [rbp-4Dh] BYREF
  ULONG pcbReadBuffer; // [rsp+80h] [rbp-49h] BYREF
  PVOID pvReadContext; // [rsp+88h] [rbp-41h] BYREF
  PCUNICODE_STRING Source; // [rsp+90h] [rbp-39h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-31h] BYREF
  PVOID ppvRestartBuffer; // [rsp+A8h] [rbp-21h] BYREF
  CLFS_LSN plsn; // [rsp+B0h] [rbp-19h] BYREF
  CLFS_LSN plsnFirst; // [rsp+B8h] [rbp-11h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+C0h] [rbp-9h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+C8h] [rbp-1h] BYREF
  PVOID ppvReadBuffer; // [rsp+D0h] [rbp+7h] BYREF
  CLFS_LSN plsnRecord; // [rsp+D8h] [rbp+Fh] BYREF
  CLS_LSN pvRestartBuffer[8]; // [rsp+E0h] [rbp+17h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+130h] [rbp+67h] BYREF
  char v45; // [rsp+140h] [rbp+77h]
  ULONG pcbWritten; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 0;
  v45 = 1;
  pcbRestartBuffer = 0;
  pvCursorContext = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  --CurrentThread->KernelApcDisable;
  GuidString.Buffer = 0LL;
  P = 0LL;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)a1 + 16), 1u);
  if ( (*((_DWORD *)a1 + 26) & 1) != 0 )
    goto LABEL_47;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  if ( !PoolWithTag )
  {
    v2 = -1073741670;
LABEL_47:
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v2;
  }
  *((_DWORD *)a1 + 26) |= 2u;
  v7 = a1 == CmRmSystem;
  *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
  if ( v7 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_14033BE70 + 64) + 128LL) = *a2;
    FileSecurityDescriptor = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(qword_14033BE70 + 64) + 128LL), &GuidString, 1u);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_33;
    v9 = (__int64)(a1 + 72);
    *((_QWORD *)a1 + 9) = 5242880LL;
    v10 = qword_14033BE70;
  }
  else
  {
    FileSecurityDescriptor = CmpQueryNameString(*(_QWORD *)(*((_QWORD *)a1 + 10) + 2664LL), &UnicodeString);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_33;
    Source = &UnicodeString;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
    FileSecurityDescriptor = RtlStringFromGUIDEx(
                               (PGUID)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL),
                               &GuidString,
                               1u);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_33;
    v10 = *((_QWORD *)a1 + 10);
    v9 = (__int64)(a1 + 72);
    *((_QWORD *)a1 + 9) = 0x100000LL;
  }
  FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(*(HANDLE *)(v10 + 2664));
  if ( FileSecurityDescriptor < 0 )
  {
    P = 0LL;
  }
  else
  {
    v11 = (PVOID *)(a1 + 96);
    v12 = (PLOG_FILE_OBJECT *)(a1 + 88);
    v13 = (__int64)(a1 + 68);
    while ( 1 )
    {
      FileSecurityDescriptor = CmpStartCLFSLog(
                                 Source,
                                 &GuidString,
                                 ppvReadContext,
                                 v9,
                                 v13,
                                 (__int64)v12,
                                 (__int64)(a1 + 96));
      if ( FileSecurityDescriptor < 0 )
        break;
      pcbInfoBuffer = 120;
      v14 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
      v15 = v14;
      if ( v14 )
      {
        ClfsGetLogFileInformation(*v12, v14, &pcbInfoBuffer);
        ExFreePoolWithTag(v15, 0);
      }
      v16 = *v12;
      pcbWritten = 120;
      FileSecurityDescriptor = ClfsGetLogFileInformation(v16, PoolWithTag, &pcbWritten);
      *((_QWORD *)a1 + 15) = PoolWithTag->BaseLsn.ullOffset;
      if ( FileSecurityDescriptor < 0 )
        break;
      if ( ClfsReadRestartArea(*v11, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
        || !ppvRestartBuffer )
      {
        plsn2 = PoolWithTag->BaseLsn;
      }
      else
      {
        plsn2 = *(CLFS_LSN *)ppvRestartBuffer;
        if ( ClfsLsnEqual(&plsn, &plsn2) )
        {
          v17 = *v11;
          plsnFirst = plsn2;
          pvReadContext = 0LL;
          peRecordType = 0;
          if ( ClfsReadLogRecord(
                 v17,
                 &plsnFirst,
                 ClfsContextForward,
                 &ppvReadBuffer,
                 &pcbReadBuffer,
                 &peRecordType,
                 &plsnUndoNext,
                 &plsnPrevious,
                 &pvReadContext) >= 0 )
          {
            peRecordType = 1;
            v18 = ClfsReadNextLogRecord(
                    pvReadContext,
                    &ppvReadBuffer,
                    &pcbReadBuffer,
                    &peRecordType,
                    0LL,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &plsnRecord);
            if ( v18 == -1073741807 )
            {
              LastLsn = PoolWithTag->LastLsn;
            }
            else
            {
              LastLsn = plsn2;
              if ( v18 >= 0 )
                LastLsn = plsnRecord;
            }
            plsn2 = LastLsn;
          }
          if ( pvReadContext )
            ClfsTerminateReadLog(pvReadContext);
        }
      }
      if ( pvCursorContext )
      {
        ClfsTerminateReadLog(pvCursorContext);
        pvCursorContext = 0LL;
      }
      if ( !ClfsLsnEqual(&plsn2, &PoolWithTag->LastLsn) && (*((_DWORD *)a1 + 26) & 4) != 0 )
      {
        v23 = plsn2;
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))CmpRmAnalysisPhase)(a1, (CLFS_LSN)plsn2.ullOffset) >= 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))CmpRmReDoPhase)(a1, (CLFS_LSN)v23.ullOffset);
          CmpRmUnDoPhase(a1);
        }
        *((_DWORD *)a1 + 26) &= ~4u;
      }
      v20 = *v11;
      pvRestartBuffer[0] = PoolWithTag->LastLsn;
      v21 = ClfsWriteRestartArea(v20, pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
      FileSecurityDescriptor = v21;
      if ( !v45 || v21 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
        break;
      v45 = 0;
      if ( pvCursorContext )
      {
        ClfsTerminateReadLog(pvCursorContext);
        pvCursorContext = 0LL;
      }
      v12 = (PLOG_FILE_OBJECT *)(a1 + 88);
      ClfsDeleteLogByPointer(*((PLOG_FILE_OBJECT *)a1 + 11));
      ClfsDeleteMarshallingArea(*v11);
      v24 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
      *v11 = 0LL;
      ClfsCloseLogFileObject(v24);
      v13 = (__int64)(a1 + 68);
      *((_QWORD *)a1 + 11) = 0LL;
      *((_DWORD *)a1 + 17) = 0;
    }
    if ( pvCursorContext )
      ClfsTerminateReadLog(pvCursorContext);
    if ( FileSecurityDescriptor < 0 )
    {
      if ( *v11 )
        *v11 = 0LL;
    }
    else
    {
      *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
    }
  }
LABEL_33:
  ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( GuidString.Buffer )
    RtlFreeUnicodeString(&GuidString);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)FileSecurityDescriptor;
}
