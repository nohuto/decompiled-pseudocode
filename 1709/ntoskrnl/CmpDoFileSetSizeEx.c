/*
 * XREFs of CmpDoFileSetSizeEx @ 0x1404E657C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     HvWriteLogFile @ 0x1404E3F18 (HvWriteLogFile.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1404E5C44 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14059D944 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 *     HvpApplyLogEntry @ 0x1406A2C58 (HvpApplyLogEntry.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404E5FD4 (HvpLogTypeToLogArrayIndex.c)
 *     CmpAdjustRequestedFileSize @ 0x1404E6C90 (CmpAdjustRequestedFileSize.c)
 *     HvViewMapChangeFileSize @ 0x14069FF70 (HvViewMapChangeFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  char v5; // r10
  unsigned __int64 v6; // r9
  void *v8; // rbp
  unsigned __int64 v9; // r8
  BOOLEAN v11; // r14
  NTSTATUS v12; // esi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+60h] [rbp+8h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = *(void **)(a1 + 8LL * a2 + 2664);
  if ( !v8 )
    return 0LL;
  if ( a2 )
    v9 = a2 - 4 <= 1 || a2 == 1 ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 2976) : 0LL;
  else
    v9 = *(_QWORD *)(a1 + 2968);
  if ( (v5 & 1) != 0 && v9 && v6 <= v9 )
    return 0LL;
  FileInformation = CmpAdjustRequestedFileSize(a1, a2, v9, v6);
  v11 = IoSetThreadHardErrorMode(0);
  v12 = ZwSetInformationFile(v8, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  if ( v12 < 0 )
    goto LABEL_22;
  if ( a2 )
  {
    if ( a2 - 4 <= 1 || a2 == 1 )
      *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 2976) = FileInformation;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(a1 + 124) & 4) != 0 && (v12 = HvViewMapChangeFileSize(a1 + 200, a1, FileInformation), v12 < 0) )
  {
LABEL_22:
    CmRegistryIODebug = 3;
    qword_1407F3E50 = (__int64)v8;
    dword_1407F3E58 = v12;
  }
  else
  {
    *(_QWORD *)(a1 + 2968) = FileInformation;
  }
LABEL_12:
  IoSetThreadHardErrorMode(v11);
  return (unsigned int)v12;
}
