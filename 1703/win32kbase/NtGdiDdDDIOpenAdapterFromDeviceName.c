/*
 * XREFs of NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C007F640
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromDeviceName(unsigned __int64 a1)
{
  CTouchProcessor *v2; // rcx
  __int128 v3; // xmm2
  WCHAR *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  WCHAR *v7; // rax
  int v8; // r10d
  __int64 v9; // rcx
  NTSTATUS DeviceObjectPointer; // edi
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  CTouchProcessor *v16; // rcx
  CTouchProcessor *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int16 SuiteMask; // ax
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-2B0h] BYREF
  int v23; // [rsp+30h] [rbp-2A8h]
  _NT_PRODUCT_TYPE ProductType; // [rsp+34h] [rbp-2A4h] BYREF
  PFILE_OBJECT FileObject; // [rsp+38h] [rbp-2A0h] BYREF
  PDEVICE_OBJECT v26; // [rsp+40h] [rbp-298h]
  __int128 v27; // [rsp+48h] [rbp-290h]
  WCHAR *v28; // [rsp+58h] [rbp-280h]
  __int64 v29; // [rsp+60h] [rbp-278h]
  WCHAR *v30; // [rsp+68h] [rbp-270h]
  __int64 v31; // [rsp+70h] [rbp-268h]
  __int64 v32; // [rsp+78h] [rbp-260h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-258h] BYREF
  __int128 v34; // [rsp+90h] [rbp-248h]
  __int64 v35; // [rsp+A0h] [rbp-238h]
  WCHAR SourceString[256]; // [rsp+B0h] [rbp-228h] BYREF

  memset(SourceString, 0, sizeof(SourceString));
  v2 = (CTouchProcessor *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  v3 = *(_OWORD *)v2;
  v34 = v3;
  v35 = *((_QWORD *)v2 + 2);
  v4 = (WCHAR *)v3;
  if ( (__int64)v3 + 512 > (unsigned __int64)W32UserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)W32UserProbeAddress = 0;
  v23 = 0;
  v5 = 2147483646LL;
  v32 = 2147483646LL;
  v30 = (WCHAR *)v3;
  v6 = 256LL;
  v31 = 256LL;
  v7 = SourceString;
  v28 = SourceString;
  v8 = 0;
  v9 = 0LL;
  v29 = 0LL;
  while ( v6 )
  {
    if ( !v5 || !*v4 )
      goto LABEL_10;
    *v7++ = *v4;
    v28 = v7;
    v30 = ++v4;
    v31 = --v6;
    v32 = --v5;
    v29 = ++v9;
  }
  v28 = --v7;
  v29 = v9 - 1;
  v8 = -2147483643;
LABEL_10:
  *v7 = 0;
  v23 = v8;
  if ( v8 < 0 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)_guard_dispatch_icall_fptr() < 0 )
    return 3221225485LL;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  v26 = 0LL;
  v27 = 0uLL;
  v12 = 0;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_38;
  v26 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  DeviceObjectPointer = _guard_dispatch_icall_fptr();
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_38;
  v12 = v27;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( qword_1C018C350 )
    {
      if ( (PVOID)PsGetCurrentProcess(65533LL, v13, v14, v15) != gpepCSRSS && !UserIsCurrentProcessDwm() )
      {
        RtlGetNtProductType(&ProductType);
        SuiteMask = RtlGetSuiteMask(v19, v18, v20);
        if ( ProductType == NtProductServer
          && (SuiteMask & 0x110) == 0x10
          && *(_QWORD *)((char *)&v27 + 4) != qword_1C018C344 )
        {
          DeviceObjectPointer = -1073741811;
        }
      }
    }
  }
  if ( DeviceObjectPointer < 0 )
  {
LABEL_38:
    *(_QWORD *)&v27 = 0LL;
    DWORD2(v27) = 0;
  }
  v16 = (CTouchProcessor *)(a1 + 8);
  if ( a1 + 8 >= (unsigned __int64)W32UserProbeAddress )
    v16 = W32UserProbeAddress;
  *(_DWORD *)v16 = v27;
  v17 = (CTouchProcessor *)(a1 + 12);
  if ( a1 + 12 >= (unsigned __int64)W32UserProbeAddress )
    v17 = W32UserProbeAddress;
  *(_QWORD *)v17 = *(_QWORD *)((char *)&v27 + 4);
  if ( DeviceObjectPointer < 0 )
  {
    if ( v12 )
      _guard_dispatch_icall_fptr();
  }
  return (unsigned int)DeviceObjectPointer;
}
