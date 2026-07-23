/*
 * XREFs of CmpStartRMLog @ 0x1405F4564
 * Callers:
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1405E1974 (CmpStartRMLogs.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14049BD64 (CmpQueryFileSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     CmpQueryNameString @ 0x140561CB8 (CmpQueryNameString.c)
 *     CmpStartCLFSLog @ 0x1405F49A0 (CmpStartCLFSLog.c)
 *     CmpRmAnalysisPhase @ 0x1406FA108 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x1406FA31C (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x1406FA4C8 (CmpRmUnDoPhase.c)
 */

__int64 __fastcall CmpStartRMLog(char *a1, _OWORD *a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  CLFS_INFORMATION *PoolWithTag; // r15
  bool v7; // zf
  int started; // ebx
  ULONG_PTR v9; // rax
  __int64 v10; // r12
  PVOID *v11; // r14
  PLOG_FILE_OBJECT *v12; // r13
  __int64 v13; // rax
  CLFS_INFORMATION *v14; // rax
  CLFS_INFORMATION *v15; // rbx
  FILE_OBJECT *v16; // rcx
  PVOID v17; // rcx
  NTSTATUS v18; // eax
  PVOID v20; // rcx
  NTSTATUS v21; // ecx
  CLFS_LSN LastLsn; // rax
  CLFS_LSN v23; // rbx
  FILE_OBJECT *v24; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-A9h]
  CLFS_LSN plsn1; // [rsp+50h] [rbp-79h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-71h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h] BYREF
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v2;
  }
  *((_DWORD *)a1 + 26) |= 2u;
  v7 = a1 == CmRmSystem;
  *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
  if ( v7 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_140396A80 + 64) + 128LL) = *a2;
    started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(qword_140396A80 + 64) + 128LL), &GuidString, 1u);
    if ( started < 0 )
      goto LABEL_27;
    v10 = (__int64)(a1 + 72);
    *((_QWORD *)a1 + 9) = 5242880LL;
    v9 = qword_140396A80;
  }
  else
  {
    started = CmpQueryNameString(*(void **)(*((_QWORD *)a1 + 10) + 1536LL), &UnicodeString);
    if ( started < 0 )
      goto LABEL_27;
    Source = &UnicodeString;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
    started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL), &GuidString, 1u);
    if ( started < 0 )
      goto LABEL_27;
    v9 = *((_QWORD *)a1 + 10);
    v10 = (__int64)(a1 + 72);
    *((_QWORD *)a1 + 9) = 0x100000LL;
  }
  started = CmpQueryFileSecurityDescriptor(*(HANDLE *)(v9 + 1536), &P);
  if ( started < 0 )
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
      started = CmpStartCLFSLog(Source, &GuidString, ppvReadContext, v10, v13, (__int64)v12, (__int64)(a1 + 96));
      if ( started < 0 )
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
      started = ClfsGetLogFileInformation(v16, PoolWithTag, &pcbWritten);
      *((_QWORD *)a1 + 15) = PoolWithTag->BaseLsn.ullOffset;
      if ( started < 0 )
        break;
      if ( ClfsReadRestartArea(*v11, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
        || !ppvRestartBuffer )
      {
        plsn1 = PoolWithTag->BaseLsn;
      }
      else
      {
        plsn1 = *(CLFS_LSN *)ppvRestartBuffer;
        if ( ClfsLsnEqual(&plsn, &plsn1) )
        {
          v20 = *v11;
          plsnFirst = plsn1;
          pvReadContext = 0LL;
          peRecordType = 0;
          if ( ClfsReadLogRecord(
                 v20,
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
            v21 = ClfsReadNextLogRecord(
                    pvReadContext,
                    &ppvReadBuffer,
                    &pcbReadBuffer,
                    &peRecordType,
                    0LL,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &plsnRecord);
            if ( v21 == -1073741807 )
            {
              LastLsn = PoolWithTag->LastLsn;
            }
            else
            {
              LastLsn = plsn1;
              if ( v21 >= 0 )
                LastLsn = plsnRecord;
            }
            plsn1 = LastLsn;
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
      if ( !ClfsLsnEqual(&plsn1, &PoolWithTag->LastLsn) && (*((_DWORD *)a1 + 26) & 4) != 0 )
      {
        v23 = plsn1;
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))CmpRmAnalysisPhase)(a1, (CLFS_LSN)plsn1.ullOffset) >= 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))CmpRmReDoPhase)(a1, (CLFS_LSN)v23.ullOffset);
          CmpRmUnDoPhase(a1);
        }
        *((_DWORD *)a1 + 26) &= ~4u;
      }
      v17 = *v11;
      pvRestartBuffer[0] = PoolWithTag->LastLsn;
      v18 = ClfsWriteRestartArea(v17, pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
      started = v18;
      if ( !v45 || v18 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
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
    if ( started < 0 )
    {
      if ( *v11 )
        *v11 = 0LL;
    }
    else
    {
      *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
    }
  }
LABEL_27:
  ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)started;
}
