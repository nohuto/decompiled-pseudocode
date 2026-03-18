/*
 * XREFs of CmpFlushBackupHive @ 0x14066AB34
 * Callers:
 *     CmpSyncNextBackupHive @ 0x14066B40C (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017E420 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14017EAC0 (ZwSetInformationObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     RtlAppendStringToString @ 0x140582D40 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x1405BCDC0 (CmpInitBackupHive.c)
 *     CmpCmdRenameHive @ 0x14066959C (CmpCmdRenameHive.c)
 *     CmpFreeOffsetArray @ 0x14066AEA8 (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14066AEF8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x14066B5A8 (CmpWriteOffsetArrayToFile.c)
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
  __int64 v12; // rbx
  void *v13; // rcx
  char FileInformation; // [rsp+58h] [rbp-B0h] BYREF
  char FileInformation_1; // [rsp+59h] [rbp-AFh] BYREF
  __int16 ObjectInformation; // [rsp+5Ch] [rbp-ACh] BYREF
  int v18; // [rsp+60h] [rbp-A8h] BYREF
  int v19; // [rsp+64h] [rbp-A4h] BYREF
  int v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+6Ch] [rbp-9Ch] BYREF
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h] BYREF
  int v24[2]; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v27[352]; // [rsp+B8h] [rbp-50h] BYREF
  char v28; // [rsp+218h] [rbp+110h] BYREF

  v1 = a1;
  v23 = 0LL;
  v20 = 0;
  *(_QWORD *)v24 = 0LL;
  v2 = 0;
  v21 = 0;
  v3 = 0LL;
  FileInformation_1 = 1;
  v4 = 0;
  memset(v27, 0, sizeof(v27));
  *(_DWORD *)&Destination.Length = 0x800000;
  v5 = 19 * v1;
  Destination.Buffer = &v28;
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
        inited = CmpSnapshotHiveToOffsetArray(v6, &v20, v24, &v21);
        ExReleaseResourceLite(*((PERESOURCE *)v6 + 356));
        v2 = v20;
        v3 = *(_QWORD *)v24;
        v4 = v21;
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
                       (__int64)&v23,
                       16777217,
                       0,
                       0LL,
                       0LL,
                       (__int64)v27),
            inited < 0) )
      {
LABEL_14:
        v13 = (void *)*((_QWORD *)v6 + 336);
        if ( v13 )
        {
          LOWORD(v19) = 0;
          ZwSetInformationObject(v13, ObjectHandleFlagInformation, &v19, 2u);
          ZwClose(*((HANDLE *)v6 + 336));
          *((_QWORD *)v6 + 336) = 0LL;
        }
        if ( CmpCmdRenameHive(v7, 0LL, (const void **)&Destination, 0, 1) >= 0 )
          *((_QWORD *)v6 + 336) = v7;
      }
      else
      {
        v12 = v23;
        CmpDestroySecurityCache(v23);
        HvFreeHive(v12, 1);
        *((_QWORD *)v6 + 336) = *(_QWORD *)(v12 + 2664);
        *(_QWORD *)(v12 + 2664) = 0LL;
        CmpCmdHiveClose(v12);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 5496), 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v23);
        ZwSetInformationFile(v7, &IoStatusBlock, &FileInformation_1, 1u, FileDispositionInformation);
        LOWORD(v18) = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &v18, 2u);
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
