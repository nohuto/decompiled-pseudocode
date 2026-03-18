/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x1405C609C
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1405C5C44 (SepRmLsaConnectRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1401809A0 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

char __fastcall SepRmVerifyLsaProtectionLevel(HANDLE *a1)
{
  char result; // al
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
      ObfDereferenceObject(Object);
      result = v4 != 65;
      if ( v4 == 65 )
        return result;
      v3 = -1073741790;
    }
    KeBugCheckEx(0x29u, v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x28AuLL, 0LL);
  }
  return result;
}
