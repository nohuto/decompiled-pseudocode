/*
 * XREFs of IopInitializeCrashDump @ 0x1405D4750
 * Callers:
 *     IoConfigureCrashDump @ 0x14014F6E4 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1405D46BC (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x140849F70 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SecureDump_GetSecureDumpSettings @ 0x14014F800 (SecureDump_GetSecureDumpSettings.c)
 *     IopReadDumpRegistry @ 0x14014F84C (IopReadDumpRegistry.c)
 *     IopLoadCrashdumpDriver @ 0x14014F920 (IopLoadCrashdumpDriver.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1405D4884 (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(unsigned int *Handle, __int128 *a2)
{
  char result; // al
  unsigned int *v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-40h] BYREF
  int v7; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall *v8)(__int64, _DWORD *, unsigned int); // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v9)(__int64, unsigned __int64, __int64, unsigned __int64, unsigned __int64 *); // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp-18h]
  char v11; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  result = 0;
  *(_QWORD *)&v6 = 0LL;
  DWORD2(v6) = 0;
  if ( !ForceDumpDisabled )
  {
    IopReadDumpRegistry(Handle, &Object);
    if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
      return 1;
    if ( (CrashdmpImageEntry || (int)IopLoadCrashdumpDriver() >= 0)
      && (int)SecureDump_GetSecureDumpSettings((__int64)&v6) >= 0 )
    {
      if ( !(_BYTE)v6
        || qword_14038A018
        && (v10 = *(_QWORD *)((char *)&v6 + 4),
            v11 = BYTE1(v6),
            v8 = SecureDump_Get_SecureDumpHeader,
            v9 = SecureDump_Encrypt_DmpData,
            v7 = 40,
            (int)qword_14038A018(&v7) >= 0) )
      {
        v6 = *a2;
        if ( (int)((__int64 (__fastcall *)(unsigned int *, __int64 *, __int128 *))qword_140389FB8)(
                    Handle,
                    &CrashdmpDumpBlock,
                    &v6) >= 0 )
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
            FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)Object);
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
