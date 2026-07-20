/*
 * XREFs of SmpPagefileInitialize @ 0x140005FB8
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x140009E10 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpQueryFilterPagesDumpSetting @ 0x140007950 (SmpQueryFilterPagesDumpSetting.c)
 *     SmpQueryCrashDumpType @ 0x14000799C (SmpQueryCrashDumpType.c)
 *     SmpQueryDedicatedDumpSetting @ 0x140007A6C (SmpQueryDedicatedDumpSetting.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 */

NTSTATUS SmpPagefileInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  WCHAR *NtSystemRoot; // rax
  WCHAR v5; // ax
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  const wchar_t *v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v23; // [rsp+38h] [rbp-C8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD SystemInformation[4]; // [rsp+70h] [rbp-90h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF
  char v27; // [rsp+1AAh] [rbp+AAh]

  v20 = 11141288;
  v21 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v22 = 8388734;
  v23 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  qword_140021518 = (__int64)&SmpPagingFileDescriptorList;
  SmpPagingFileDescriptorList = &SmpPagingFileDescriptorList;
  qword_1400214F8 = (__int64)&SmpVolumeDescriptorList;
  SmpVolumeDescriptorList = (__int64)&SmpVolumeDescriptorList;
  NtQuerySystemInformation(SystemPrefetcherInformation|0x80, SystemInformation, 0x18u, 0LL);
  SmpMemorySize = SystemInformation[0];
  SmpHighestPhysicalAddress = SystemInformation[2];
  NtSystemRoot = (WCHAR *)RtlGetNtSystemRoot(v1, v0, v2, v3);
  v5 = RtlUpcaseUnicodeChar(*NtSystemRoot);
  ObjectAttributes.RootDirectory = 0LL;
  SmpOsVolumeLetter = v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&SmpMmKey, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&SmpCrashDumpKey, 0x2001Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      SmpDumpType = SmpQueryCrashDumpType(v8, v7, v9, v10);
      SmpUseDedicatedDumpFile = SmpQueryDedicatedDumpSetting(v12, v11, v13, v14);
      SmpUseFilterPagesDumpFile = SmpQueryFilterPagesDumpSetting(v16, v15, v17, v18);
      memset_0(&VersionInformation, 0, 0x11CuLL);
      VersionInformation.dwOSVersionInfoSize = 284;
      if ( RtlGetVersion(&VersionInformation) >= 0 )
      {
        v19 = SmpClientSku;
        if ( v27 == 1 )
          v19 = 1;
        SmpClientSku = v19;
      }
      return 0;
    }
  }
  return result;
}
