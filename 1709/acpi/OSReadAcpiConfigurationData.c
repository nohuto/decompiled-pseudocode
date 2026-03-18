/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C00ADED8
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00AD404 (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_SL @ 0x1C005789C (WPP_RECORDER_SF_SL.c)
 *     OSOpenUnicodeHandle @ 0x1C008786C (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C008AF4C (OSGetRegistryValue.c)
 *     OSCloseHandle @ 0x1C008F8C8 (OSCloseHandle.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(_QWORD *a1)
{
  unsigned int v2; // edi
  int v3; // edx
  int v4; // ebx
  ULONG v5; // esi
  int v6; // edx
  int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  BOOLEAN v13; // bl
  HANDLE v14; // rcx
  int v15; // edx
  NTSTATUS v16; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  void *v20; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v23; // [rsp+80h] [rbp+37h] BYREF

  v2 = 0;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v4 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v20);
  if ( v4 < 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      16,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v4);
    return (unsigned int)v4;
  }
  RtlInitUnicodeString(&String1, L"ACPI BIOS");
  v5 = 0;
  DestinationString.Buffer = (wchar_t *)&v23;
  DestinationString.MaximumLength = 8;
  while ( 1 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v5, 0xAu, &DestinationString);
    v7 = OSOpenUnicodeHandle(&DestinationString, v20, &KeyHandle);
    if ( v7 < 0 )
      break;
    if ( OSGetRegistryValue(KeyHandle, L"Identifier", a1) < 0 )
    {
      v14 = KeyHandle;
LABEL_9:
      OSCloseHandle(v14);
      goto LABEL_10;
    }
    v10 = *a1;
    String2.Buffer = (wchar_t *)(*a1 + 8LL);
    String2.MaximumLength = *(_WORD *)(v10 + 4);
    v11 = *(_DWORD *)(v10 + 4) >> 1;
    if ( v11 )
    {
      do
      {
        v12 = (unsigned int)(v11 - 1);
        if ( *(_WORD *)(v10 + 2 * v12 + 8) )
          break;
        --v11;
      }
      while ( (_DWORD)v12 );
    }
    String2.Length = 2 * v11;
    v13 = RtlEqualUnicodeString(&String1, &String2, 1u);
    ExFreePoolWithTag((PVOID)*a1, 0);
    v14 = KeyHandle;
    if ( !v13 )
      goto LABEL_9;
    v16 = OSGetRegistryValue(KeyHandle, L"Configuration Data", a1);
    OSCloseHandle(KeyHandle);
    if ( v16 >= 0 )
      goto LABEL_13;
LABEL_10:
    if ( ++v5 >= 0x3E7 )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        22,
        18,
        (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids);
      return 3221225524LL;
    }
  }
  WPP_RECORDER_SF_SL(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
  v2 = v7;
LABEL_13:
  OSCloseHandle(v20);
  return v2;
}
