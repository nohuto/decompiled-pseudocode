/*
 * XREFs of CmpTraceHiveMountBaseFileMounted @ 0x14043B270
 * Callers:
 *     HvLoadHive @ 0x14043A6FC (HvLoadHive.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 */

void __fastcall CmpTraceHiveMountBaseFileMounted(__int64 a1, int a2)
{
  __int16 v3; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+Fh] BYREF
  __int16 *v7; // [rsp+70h] [rbp+1Fh]
  __int64 v8; // [rsp+78h] [rbp+27h]
  int *v9; // [rsp+80h] [rbp+2Fh]
  __int64 v10; // [rsp+88h] [rbp+37h]
  int v11; // [rsp+C0h] [rbp+6Fh] BYREF

  v11 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_BASE_FILE_MOUNTED;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    UnicodeString.Buffer = 0LL;
    *(_DWORD *)&UnicodeString.Length = 0;
    if ( (int)CmpQueryNameString(a1, &UnicodeString) >= 0 )
    {
      UserData.Ptr = (ULONGLONG)UnicodeString.Buffer;
      UserData.Size = UnicodeString.Length;
      v7 = &v3;
      v9 = &v11;
      UserData.Reserved = 0;
      v3 = 0;
      v8 = 2LL;
      v10 = 4LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 3u, &UserData);
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
}
