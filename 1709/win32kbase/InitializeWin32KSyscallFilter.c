/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x1C0007ED0
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C00082A8 (-CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z.c)
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C0076078 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  int v0; // r14d
  void *v1; // rbx
  int v2; // edi
  void *v3; // rbx
  int v4; // edi
  void *v5; // rdi
  int v6; // ebx
  unsigned int W32pServiceLimitFilter; // eax
  unsigned int v8; // r15d
  PVOID PoolWithTag; // rax
  unsigned int v10; // edi
  unsigned int *v11; // rbx
  unsigned __int8 **v12; // rsi
  unsigned __int8 *v13; // rax
  int v14; // r8d
  int Win32KFilterBitmap; // eax
  PVOID v17; // rax
  int v18; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch]

  v18 = gdwPolicyFlags;
  v0 = 0;
  v1 = (void *)OpenCacheKeyEx(0LL, 52LL, 131097LL, &v18);
  if ( v1 )
  {
    v2 = 1;
    while ( 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditThrottleMode");
      if ( ZwQueryValueKey(
             v1,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
        break;
      if ( !v18 )
        goto LABEL_5;
      ZwClose(v1);
      v1 = (void *)OpenCacheKeyEx(0LL, 52LL, 131097LL, &v18);
      if ( !v1 )
        goto LABEL_34;
    }
    v2 = v22;
LABEL_5:
    ZwClose(v1);
    gdwServiceFilterAuditThrottleMode = v2;
  }
  else
  {
LABEL_34:
    gdwServiceFilterAuditThrottleMode = 1;
  }
  v18 = gdwPolicyFlags;
  v3 = (void *)OpenCacheKeyEx(0LL, 52LL, 131097LL, &v18);
  if ( v3 )
  {
    v4 = 1;
    while ( 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditCaptureWER");
      if ( ZwQueryValueKey(
             v3,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
        break;
      if ( !v18 )
        goto LABEL_10;
      ZwClose(v3);
      v3 = (void *)OpenCacheKeyEx(0LL, 52LL, 131097LL, &v18);
      if ( !v3 )
        goto LABEL_36;
    }
    v4 = v22;
LABEL_10:
    ZwClose(v3);
    gdwServiceFilterAuditCaptureWER = v4;
  }
  else
  {
LABEL_36:
    gdwServiceFilterAuditCaptureWER = 1;
  }
  v18 = gdwPolicyFlags;
  v5 = (void *)OpenCacheKeyEx(0LL, 52LL, 131097LL, &v18);
  v6 = 4096;
  if ( v5 )
  {
    while ( 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditStackCacheSize");
      if ( ZwQueryValueKey(
             v5,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
        break;
      if ( !v18 )
        goto LABEL_14;
      ZwClose(v5);
      v5 = (void *)OpenCacheKeyEx(0LL, 52LL, 131097LL, &v18);
      if ( !v5 )
        goto LABEL_15;
    }
    v6 = v22;
LABEL_14:
    ZwClose(v5);
  }
LABEL_15:
  LODWORD(gstServiceFilterAuditStackCacheSize) = v6;
  W32pServiceLimitFilter = SysEntryGetW32pServiceLimitFilter();
  v8 = W32pServiceLimitFilter >> 3;
  if ( (W32pServiceLimitFilter & 7) != 0 )
    ++v8;
  qword_1C018F9D0 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainer;
  qword_1C018F9E0 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerPlugin;
  qword_1C018F9F0 = (__int64)&Win32KSyscallFilterList::FontDrvHost;
  qword_1C018FA00 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerMiniPlugin;
  qword_1C018FA10 = (__int64)&Win32KSyscallFilterList::Rs3RestrictedAppcontainer;
  qword_1C018FA20 = (__int64)&Win32KSyscallFilterList::Rs3HvsiRdpClient;
  gaWin32KSyscallList = 0LL;
  qword_1C018F9C8 = 0LL;
  qword_1C018F9D8 = 514LL;
  qword_1C018F9E8 = 287LL;
  qword_1C018F9F8 = 188LL;
  qword_1C018FA08 = 397LL;
  qword_1C018FA18 = 349LL;
  dword_1C018FA28 = 352;
  dword_1C018FA2C = 1;
  if ( !gdwServiceFilterAuditCaptureWER )
    goto LABEL_22;
  if ( (v8 & 3) != 0 )
    v8 += 4 - (v8 & 3);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x6C667355u);
  gafServiceFilterAuditCache = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_46;
  memset(PoolWithTag, 0, v8);
  if ( !gdwServiceFilterAuditThrottleMode )
  {
    gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = ExAllocatePoolWithTag((POOL_TYPE)512, gstServiceFilterAuditStackCacheSize, 0x6C667355u);
    gafServiceFilterAuditStackCache = v17;
    if ( v17 )
    {
      memset(v17, 0, gstServiceFilterAuditStackCacheSize);
      goto LABEL_22;
    }
LABEL_46:
    v0 = -1073741801;
    goto LABEL_47;
  }
LABEL_22:
  v10 = 0;
  v11 = (unsigned int *)&qword_1C018F9C8;
  v12 = (unsigned __int8 **)&gaWin32KFilterBitmap;
  while ( 1 )
  {
    if ( !*v11 )
    {
      *v12 = 0LL;
      goto LABEL_27;
    }
    v13 = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x6C667355u);
    *v12 = v13;
    if ( !v13 )
      goto LABEL_46;
    Win32KFilterBitmap = CreateWin32KFilterBitmap(*v11, *((const char **const *)v11 - 1), v14, v8, v13);
    v0 = Win32KFilterBitmap;
    if ( Win32KFilterBitmap != 127 )
      break;
    v0 = 0;
LABEL_27:
    ++v10;
    ++v12;
    v11 += 4;
    if ( v10 >= 7 )
      goto LABEL_28;
  }
  if ( !Win32KFilterBitmap )
    goto LABEL_27;
LABEL_28:
  if ( v0 < 0 )
LABEL_47:
    FreeWin32KSyscallFilter();
  return (unsigned int)v0;
}
