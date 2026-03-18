/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x1406320FC
 * Callers:
 *     SepRmLsaConnectRequest @ 0x140631D90 (SepRmLsaConnectRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1401A9FC0 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

int __fastcall SepRmVerifyLsaProtectionLevel(HANDLE *a1)
{
  int result; // eax
  NTSTATUS v3; // eax
  char v4; // bl
  int Value; // [rsp+30h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID Object; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  Value = 0;
  ReturnLength = 4;
  VendorGuid.Data1 = 2012912317;
  *(_DWORD *)&VendorGuid.Data2 = 1295123289;
  *(_DWORD *)VendorGuid.Data4 = -198680387;
  *(_DWORD *)&VendorGuid.Data4[4] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"Kernel_Lsa_Ppl_Config");
  result = ZwQuerySystemEnvironmentValueEx(&DestinationString, &VendorGuid, &Value, &ReturnLength, 0LL);
  if ( Value == 4 )
  {
    v3 = ObReferenceObjectByHandle(*a1, 0x2000000u, 0LL, 0, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v4 = *((_BYTE *)Object + 1738);
      result = ObfDereferenceObject(Object);
      if ( v4 == 65 )
        return result;
      v3 = -1073741790;
    }
    KeBugCheckEx(0x29u, v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x295uLL, 0LL);
  }
  return result;
}
