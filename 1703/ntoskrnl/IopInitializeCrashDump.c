/*
 * XREFs of IopInitializeCrashDump @ 0x1405BA68C
 * Callers:
 *     IoConfigureCrashDump @ 0x140159F78 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1405BA5F8 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x1408138F0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IopLoadCrashdumpDriver @ 0x14014B238 (IopLoadCrashdumpDriver.c)
 *     SecureDump_GetSecureDumpSettings @ 0x14015A240 (SecureDump_GetSecureDumpSettings.c)
 *     IopReadDumpRegistry @ 0x14015A28C (IopReadDumpRegistry.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14058537C (FsRtlIssueFileNotificationFsctl.c)
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
        || qword_14036E598
        && (v11 = *(_QWORD *)((char *)&v7 + 4),
            v12 = BYTE1(v7),
            v9 = SecureDump_Get_SecureDumpHeader,
            v10 = SecureDump_Encrypt_DmpData,
            v8 = 40,
            (int)qword_14036E598(&v8) >= 0) )
      {
        v7 = *a2;
        if ( (int)((__int64 (__fastcall *)(unsigned int *, __int64 *, __int128 *))qword_14036E538)(
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
