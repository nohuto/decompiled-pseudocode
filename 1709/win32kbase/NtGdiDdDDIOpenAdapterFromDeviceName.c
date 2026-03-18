/*
 * XREFs of NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C007FC70
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rax
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
  _DWORD *v14; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int16 SuiteMask; // ax
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-2B0h] BYREF
  int v21; // [rsp+30h] [rbp-2A8h]
  _NT_PRODUCT_TYPE ProductType; // [rsp+34h] [rbp-2A4h] BYREF
  PFILE_OBJECT FileObject; // [rsp+38h] [rbp-2A0h] BYREF
  PDEVICE_OBJECT v24; // [rsp+40h] [rbp-298h]
  __int128 v25; // [rsp+48h] [rbp-290h]
  WCHAR *v26; // [rsp+58h] [rbp-280h]
  __int64 v27; // [rsp+60h] [rbp-278h]
  WCHAR *v28; // [rsp+68h] [rbp-270h]
  __int64 v29; // [rsp+70h] [rbp-268h]
  __int64 v30; // [rsp+78h] [rbp-260h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-258h] BYREF
  __int128 v32; // [rsp+90h] [rbp-248h]
  __int64 v33; // [rsp+A0h] [rbp-238h]
  WCHAR SourceString[256]; // [rsp+B0h] [rbp-228h] BYREF

  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  v32 = v3;
  v33 = *(_QWORD *)(v2 + 16);
  v4 = (WCHAR *)v3;
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v21 = 0;
  v5 = 2147483646LL;
  v30 = 2147483646LL;
  v28 = (WCHAR *)v3;
  v6 = 256LL;
  v29 = 256LL;
  v7 = SourceString;
  v26 = SourceString;
  v8 = 0;
  v9 = 0LL;
  v27 = 0LL;
  while ( v6 )
  {
    if ( !v5 || !*v4 )
      goto LABEL_10;
    *v7++ = *v4;
    v26 = v7;
    v28 = ++v4;
    v29 = --v6;
    v30 = --v5;
    v27 = ++v9;
  }
  v26 = --v7;
  v27 = v9 - 1;
  v8 = -2147483643;
LABEL_10:
  *v7 = 0;
  v21 = v8;
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
  v24 = 0LL;
  v25 = 0uLL;
  v12 = 0;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_38;
  v24 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  DeviceObjectPointer = _guard_dispatch_icall_fptr();
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_38;
  v12 = v25;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( Object )
    {
      if ( (PVOID)PsGetCurrentProcess(65533LL, v13) != gpepCSRSS && !UserIsCurrentProcessDwm() )
      {
        RtlGetNtProductType(&ProductType);
        SuiteMask = RtlGetSuiteMask(v17, v16, v18);
        if ( ProductType == NtProductServer
          && (SuiteMask & 0x110) == 0x10
          && *(_QWORD *)((char *)&v25 + 4) != qword_1C0191074 )
        {
          DeviceObjectPointer = -1073741811;
        }
      }
    }
  }
  if ( DeviceObjectPointer < 0 )
  {
LABEL_38:
    *(_QWORD *)&v25 = 0LL;
    DWORD2(v25) = 0;
  }
  v14 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = v25;
  v15 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v15 = (_QWORD *)MmUserProbeAddress;
  *v15 = *(_QWORD *)((char *)&v25 + 4);
  if ( DeviceObjectPointer < 0 )
  {
    if ( v12 )
      _guard_dispatch_icall_fptr();
  }
  return (unsigned int)DeviceObjectPointer;
}
