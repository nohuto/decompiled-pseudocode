/*
 * XREFs of WmipSecurityMethod @ 0x1404575E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140457688 (ObAssignObjectSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x140457700 (ObDeassignSecurity.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1404F3234 (ObQuerySecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404F3C20 (ObSetSecurityDescriptorInfo.c)
 *     RtlLengthSecurityDescriptor @ 0x14050E880 (RtlLengthSecurityDescriptor.c)
 *     RtlWriteRegistryValue @ 0x140556350 (RtlWriteRegistryValue.c)
 */

__int64 __fastcall WmipSecurityMethod(
        __int64 a1,
        int a2,
        DWORD *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        POOL_TYPE PoolType,
        GENERIC_MAPPING *a8)
{
  int v9; // edx
  int v10; // edx
  NTSTATUS v12; // ebx
  SIZE_T v13; // rdx
  PVOID PoolWithTag; // rax
  void *v15; // r14
  ULONG v16; // eax
  PVOID ValueData; // [rsp+20h] [rbp-F8h]
  ULONG ValueLength[2]; // [rsp+28h] [rbp-F0h]
  unsigned int NumberOfBytes; // [rsp+70h] [rbp-A8h] BYREF
  int NumberOfBytes_4; // [rsp+74h] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-A0h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-88h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return ObAssignObjectSecurityDescriptor(a1, a4);
      }
      else
      {
        return ObDeassignSecurity(a6);
      }
    }
    else
    {
      return ObQuerySecurityDescriptorInfo(a1, a3, a4, a5);
    }
  }
  else
  {
    v12 = ObSetSecurityDescriptorInfo((PVOID)a1, a3, a4, PoolType, a8);
    if ( v12 >= 0 )
    {
      v13 = 1024LL;
      for ( NumberOfBytes = 1024; ; v13 = NumberOfBytes )
      {
        PoolWithTag = ExAllocatePoolWithTag(PoolType, v13, 0x70696D57u);
        v15 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        NumberOfBytes_4 = -1;
        v12 = ObQuerySecurityDescriptorInfo(a1, &NumberOfBytes_4, PoolWithTag, &NumberOfBytes);
        if ( v12 != -1073741789 )
          goto LABEL_15;
        ExFreePoolWithTag(v15, 0);
      }
      v12 = -1073741670;
LABEL_15:
      if ( v12 >= 0 )
      {
        ValueLength[0] = *(unsigned __int16 *)(a1 + 30);
        LODWORD(ValueData) = *(unsigned __int16 *)(a1 + 28);
        RtlStringCbPrintfW(
          pszDest,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *(unsigned int *)(a1 + 24),
          ValueData,
          *(_QWORD *)ValueLength,
          *(unsigned __int8 *)(a1 + 32),
          *(unsigned __int8 *)(a1 + 33),
          *(unsigned __int8 *)(a1 + 34),
          *(unsigned __int8 *)(a1 + 35),
          *(unsigned __int8 *)(a1 + 36),
          *(unsigned __int8 *)(a1 + 37),
          *(unsigned __int8 *)(a1 + 38),
          *(unsigned __int8 *)(a1 + 39));
        RtlInitUnicodeString(&DestinationString, pszDest);
        v16 = RtlLengthSecurityDescriptor(v15);
        v12 = RtlWriteRegistryValue(2u, L"WMI\\Security", DestinationString.Buffer, 3u, v15, v16);
        ExFreePoolWithTag(v15, 0);
      }
    }
    return (unsigned int)v12;
  }
}
