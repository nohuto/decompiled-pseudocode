/*
 * XREFs of IopInitializeCrashDump @ 0x14063CED8
 * Callers:
 *     IoConfigureCrashDump @ 0x14017E260 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14063CE44 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x1408BBE30 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IopLoadCrashdumpDriver @ 0x14016E3B0 (IopLoadCrashdumpDriver.c)
 *     SecureDump_GetSecureDumpSettings @ 0x14017E37C (SecureDump_GetSecureDumpSettings.c)
 *     IopReadDumpRegistry @ 0x14017E3C8 (IopReadDumpRegistry.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140613450 (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(unsigned int *Handle, __int128 *a2)
{
  char result; // al
  unsigned int *v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall *v9)(__int64, _DWORD *, unsigned int); // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v10)(__int64, unsigned __int64, __int64, unsigned __int64, unsigned __int64 *); // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  result = 0;
  *(_QWORD *)&v7 = 0LL;
  DWORD2(v7) = 0;
  if ( !ForceDumpDisabled )
  {
    IopReadDumpRegistry(Handle, &Object);
    if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
      return 1;
    if ( (CrashdmpImageEntry || (int)IopLoadCrashdumpDriver() >= 0)
      && (int)SecureDump_GetSecureDumpSettings((__int64)&v7) >= 0 )
    {
      if ( !(_BYTE)v7
        || qword_1403CDE48
        && (v11 = *(_QWORD *)((char *)&v7 + 4),
            v12 = BYTE1(v7),
            v9 = SecureDump_Get_SecureDumpHeader,
            v10 = SecureDump_Encrypt_DmpData,
            v8 = 40,
            (int)qword_1403CDE48(&v8) >= 0) )
      {
        v7 = *a2;
        if ( (int)((__int64 (__fastcall *)(unsigned int *, __int64 *, __int128 *))qword_1403CDDE8)(
                    Handle,
                    &CrashdmpDumpBlock,
                    &v7) >= 0 )
        {
          CrashdmpInitialized = 1;
          v5 = *(unsigned int **)(CrashdmpDumpBlock + 1352);
          if ( !v5 )
          {
            if ( !Handle )
              return 1;
            v5 = Handle;
          }
          if ( ObReferenceObjectByHandle(v5, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
          {
            FsRtlIssueFileNotificationFsctl(
              (PFILE_OBJECT)Object,
              v6,
              (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE);
            ObfDereferenceObject(Object);
          }
          return 1;
        }
        CrashdmpDumpBlock = 0LL;
      }
    }
    return 0;
  }
  return result;
}
