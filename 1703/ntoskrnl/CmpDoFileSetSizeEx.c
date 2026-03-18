/*
 * XREFs of CmpDoFileSetSizeEx @ 0x14043B560
 * Callers:
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14045DE44 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1404D39B0 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvWriteLogFile @ 0x1404D3CF0 (HvWriteLogFile.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     HvpApplyLogEntry @ 0x1406786E0 (HvpApplyLogEntry.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x14017E420 (ZwSetInformationFile.c)
 *     CmpAdjustRequestedFileSize @ 0x14043B688 (CmpAdjustRequestedFileSize.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 *     HvViewMapChangeFileSize @ 0x140675A38 (HvViewMapChangeFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // ebx
  char v5; // r10
  unsigned __int64 v6; // r9
  void *v8; // rbp
  unsigned __int64 v9; // r8
  BOOLEAN v10; // r14
  __int64 v11; // rdx
  NTSTATUS v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v8 = *(void **)(a1 + 8LL * (unsigned int)a2 + 2664);
  if ( v8 )
  {
    if ( (_DWORD)a2 )
      v9 = (unsigned int)(a2 - 4) <= 1 || (_DWORD)a2 == 1
         ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex((unsigned int)a2, a2, a3, a3) + 2976)
         : 0LL;
    else
      v9 = *(_QWORD *)(a1 + 2968);
    if ( (v5 & 1) == 0 || !v9 || v6 > v9 )
    {
      FileInformation = CmpAdjustRequestedFileSize(a1, v4, v9);
      v10 = IoSetThreadHardErrorMode(0);
      v12 = ZwSetInformationFile(v8, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
      if ( v12 < 0 )
        goto LABEL_22;
      if ( v4 )
      {
        if ( v4 - 4 <= 1 || v4 == 1 )
        {
          v15 = HvpLogTypeToLogArrayIndex(v4, v11, v13, v14);
          *(_QWORD *)(a1 + 8LL * v15 + 2976) = FileInformation;
        }
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(a1 + 124) & 4) != 0 && (v12 = HvViewMapChangeFileSize(a1 + 200, a1, FileInformation), v12 < 0) )
      {
LABEL_22:
        CmRegistryIODebug = 3;
        qword_1407ACDD0 = (__int64)v8;
        dword_1407ACDD8 = v12;
      }
      else
      {
        *(_QWORD *)(a1 + 2968) = FileInformation;
      }
LABEL_12:
      IoSetThreadHardErrorMode(v10);
      return (unsigned int)v12;
    }
  }
  return 0LL;
}
