/*
 * XREFs of CmpFlushBackupHive @ 0x1406F9154
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1406F9524 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401A79A0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1401A8040 (ZwSetInformationObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x1404F7D70 (CmpCmdHiveOpen.c)
 *     RtlAppendStringToString @ 0x1406105D0 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x140633278 (CmpInitBackupHive.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpFreeOffsetArray @ 0x1406F94D4 (CmpFreeOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x1406F969C (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdRenameHive @ 0x1406FBAB4 (CmpCmdRenameHive.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1407067E4 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r15d
  __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // rbx
  wchar_t *v6; // rsi
  void *v7; // r14
  int inited; // edi
  const WCHAR *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  void *v14; // rcx
  char *v15; // rbx
  void *v16; // rcx
  char FileInformation; // [rsp+58h] [rbp-B0h] BYREF
  char FileInformation_1; // [rsp+59h] [rbp-AFh] BYREF
  __int16 ObjectInformation; // [rsp+5Ch] [rbp-ACh] BYREF
  int v21; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+64h] [rbp-A4h] BYREF
  int v23; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+6Ch] [rbp-9Ch] BYREF
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  int v26[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v30[56]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v31[44]; // [rsp+E8h] [rbp-20h] BYREF
  char v32; // [rsp+248h] [rbp+140h] BYREF

  v1 = a1;
  P = 0LL;
  v23 = 0;
  *(_QWORD *)v26 = 0LL;
  v2 = 0;
  v24 = 0;
  v3 = 0LL;
  FileInformation_1 = 1;
  v4 = 0;
  memset(v31, 0, sizeof(v31));
  *(_DWORD *)&Destination.Length = 0x800000;
  v5 = 19 * v1;
  Destination.Buffer = &v32;
  v6 = CmpMachineHiveList[v5 + 6];
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v5]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v7 = (void *)*((_QWORD *)v6 + 195);
  if ( v7 )
  {
    inited = CmpCmdRenameHive(v7, 0LL, 1);
    if ( inited >= 0 )
    {
      *((_QWORD *)v6 + 195) = 0LL;
      v9 = CmpMachineHiveList[v5];
      Destination.Length -= 8;
      inited = CmpInitBackupHive((ULONG_PTR)v6, v9);
      if ( inited < 0 )
        goto LABEL_14;
      CmpAttachToRegistryProcess((__int64)v30);
      CmpLockRegistry();
      if ( CmpDoIdleProcessing )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 + 36), 0LL);
        inited = HvSnapshotHiveToOffsetArray(v6, &v23, v26, &v24);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v6 + 9, v10, v11, v12);
        KeAbPostRelease((ULONG_PTR)(v6 + 36));
        v2 = v23;
        v3 = *(_QWORD *)v26;
        v4 = v24;
      }
      else
      {
        inited = -1073741431;
      }
      CmpUnlockRegistry();
      KiUnstackDetachProcess((__int64)v30, 0LL);
      if ( inited < 0 )
        goto LABEL_14;
      inited = CmpWriteOffsetArrayToFile(v13, v2, v3, v4, *((HANDLE *)v6 + 195));
      CmpFreeOffsetArray(v2, v3);
      if ( inited < 0
        || (v14 = (void *)*((_QWORD *)v6 + 195),
            ObjectInformation = 0,
            ZwSetInformationObject(v14, ObjectHandleFlagInformation, &ObjectInformation, 2u),
            ZwClose(*((HANDLE *)v6 + 195)),
            *((_QWORD *)v6 + 195) = 0LL,
            FileInformation = 0,
            inited = CmpCmdHiveOpen(
                       (PCUNICODE_STRING)&Destination,
                       0,
                       &FileInformation,
                       (ULONG_PTR *)&P,
                       0x1000001u,
                       0,
                       0LL,
                       0LL,
                       v31),
            inited < 0) )
      {
LABEL_14:
        v16 = (void *)*((_QWORD *)v6 + 195);
        if ( v16 )
        {
          LOWORD(v22) = 0;
          ZwSetInformationObject(v16, ObjectHandleFlagInformation, &v22, 2u);
          ZwClose(*((HANDLE *)v6 + 195));
          *((_QWORD *)v6 + 195) = 0LL;
        }
        if ( (int)CmpCmdRenameHive(v7, 0LL, 1) >= 0 )
          *((_QWORD *)v6 + 195) = v7;
      }
      else
      {
        v15 = (char *)P;
        *((_QWORD *)v6 + 195) = *((_QWORD *)P + 192);
        *((_QWORD *)v15 + 192) = 0LL;
        CmpAttachToRegistryProcess((__int64)v30);
        CmpDestroyHive(v15);
        KiUnstackDetachProcess((__int64)v30, 0LL);
        ZwSetInformationFile(v7, &IoStatusBlock, &FileInformation_1, 1u, FileDispositionInformation);
        LOWORD(v21) = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &v21, 2u);
        ZwClose(v7);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)inited;
}
