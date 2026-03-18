/*
 * XREFs of CmpFlushBackupHive @ 0x1406951B8
 * Callers:
 *     CmpSyncNextBackupHive @ 0x140695A78 (CmpSyncNextBackupHive.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14017E440 (ZwSetInformationObject.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpCmdHiveClose @ 0x14046FEEC (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x140470024 (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpCmdHiveOpen @ 0x1404DD728 (CmpCmdHiveOpen.c)
 *     RtlAppendStringToString @ 0x14059B940 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x1405BECEC (CmpInitBackupHive.c)
 *     CmpCmdRenameHive @ 0x1406943BC (CmpCmdRenameHive.c)
 *     CmpFreeOffsetArray @ 0x14069552C (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14069557C (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x140695C14 (CmpWriteOffsetArrayToFile.c)
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
  int v10; // ecx
  void *v11; // rcx
  PVOID v12; // rbx
  __int64 v13; // r8
  void *v14; // rcx
  char FileInformation; // [rsp+58h] [rbp-B0h] BYREF
  char FileInformation_1; // [rsp+59h] [rbp-AFh] BYREF
  __int16 ObjectInformation; // [rsp+5Ch] [rbp-ACh] BYREF
  int v19; // [rsp+60h] [rbp-A8h] BYREF
  int v20; // [rsp+64h] [rbp-A4h] BYREF
  int v21; // [rsp+68h] [rbp-A0h] BYREF
  int v22; // [rsp+6Ch] [rbp-9Ch] BYREF
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  int v25[2]; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v28[352]; // [rsp+B8h] [rbp-50h] BYREF
  char v29; // [rsp+218h] [rbp+110h] BYREF

  v1 = a1;
  P = 0LL;
  v21 = 0;
  *(_QWORD *)v25 = 0LL;
  v2 = 0;
  v22 = 0;
  v3 = 0LL;
  FileInformation_1 = 1;
  v4 = 0;
  memset(v28, 0, sizeof(v28));
  *(_DWORD *)&Destination.Length = 0x800000;
  v5 = 19 * v1;
  Destination.Buffer = &v29;
  v6 = CmpMachineHiveList[v5 + 6];
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v5]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v7 = (void *)*((_QWORD *)v6 + 336);
  if ( v7 )
  {
    inited = CmpCmdRenameHive(v7, 0LL, (const void **)&Destination, 0, 1);
    if ( inited >= 0 )
    {
      *((_QWORD *)v6 + 336) = 0LL;
      v9 = CmpMachineHiveList[v5];
      Destination.Length -= 8;
      inited = CmpInitBackupHive((ULONG_PTR)v6, v9);
      if ( inited < 0 )
        goto LABEL_14;
      CmpLockRegistry();
      if ( CmpDoIdleProcessing )
      {
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v6 + 356), 1u);
        inited = CmpSnapshotHiveToOffsetArray(v6, &v21, v25, &v22);
        ExReleaseResourceLite(*((PERESOURCE *)v6 + 356));
        v2 = v21;
        v3 = *(_QWORD *)v25;
        v4 = v22;
      }
      else
      {
        inited = -1073741431;
      }
      CmpUnlockRegistry();
      if ( inited < 0 )
        goto LABEL_14;
      inited = CmpWriteOffsetArrayToFile(v10, v2, v3, v4, *((HANDLE *)v6 + 336));
      CmpFreeOffsetArray(v2, v3);
      if ( inited < 0
        || (v11 = (void *)*((_QWORD *)v6 + 336),
            ObjectInformation = 0,
            ZwSetInformationObject(v11, ObjectHandleFlagInformation, &ObjectInformation, 2u),
            ZwClose(*((HANDLE *)v6 + 336)),
            *((_QWORD *)v6 + 336) = 0LL,
            FileInformation = 0,
            inited = CmpCmdHiveOpen(
                       (PCUNICODE_STRING)&Destination,
                       0,
                       (__int64)&FileInformation,
                       (__int64)&P,
                       16777217,
                       0,
                       0LL,
                       0LL,
                       (__int64)v28),
            inited < 0) )
      {
LABEL_14:
        v14 = (void *)*((_QWORD *)v6 + 336);
        if ( v14 )
        {
          LOWORD(v20) = 0;
          ZwSetInformationObject(v14, ObjectHandleFlagInformation, &v20, 2u);
          ZwClose(*((HANDLE *)v6 + 336));
          *((_QWORD *)v6 + 336) = 0LL;
        }
        if ( CmpCmdRenameHive(v7, 0LL, (const void **)&Destination, 0, 1) >= 0 )
          *((_QWORD *)v6 + 336) = v7;
      }
      else
      {
        v12 = P;
        CmpDestroySecurityCache((__int64)P);
        HvFreeHive((__int64)v12, 1, v13);
        *((_QWORD *)v6 + 336) = *((_QWORD *)v12 + 333);
        *((_QWORD *)v12 + 333) = 0LL;
        CmpCmdHiveClose((__int64)v12);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 1374, 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PERESOURCE *)P);
        ZwSetInformationFile(v7, &IoStatusBlock, &FileInformation_1, 1u, FileDispositionInformation);
        LOWORD(v19) = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &v19, 2u);
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
