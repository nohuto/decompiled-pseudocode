/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C009B124
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C009A2F4 (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_SL @ 0x1C003822C (WPP_RECORDER_SF_SL.c)
 *     OSOpenUnicodeHandle @ 0x1C00718BC (OSOpenUnicodeHandle.c)
 *     OSCloseHandle @ 0x1C0082128 (OSCloseHandle.c)
 *     OSGetRegistryValue @ 0x1C0082248 (OSGetRegistryValue.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(_QWORD *a1)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  ULONG v7; // esi
  int v8; // edx
  int v9; // ebx
  int v10; // r8d
  int v11; // r9d
  HANDLE v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  wchar_t *v15; // r8
  int v16; // edx
  __int64 v17; // rcx
  BOOLEAN v18; // bl
  NTSTATUS v19; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  void *v22; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v25; // [rsp+80h] [rbp+37h] BYREF

  v2 = 0;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v3 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v22);
  v5 = v3;
  if ( v3 < 0 )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      22,
      16,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v3);
    return v5;
  }
  RtlInitUnicodeString(&String1, L"ACPI BIOS");
  v7 = 0;
  DestinationString.Buffer = (wchar_t *)&v25;
  DestinationString.MaximumLength = 8;
  while ( 1 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v7, 0xAu, &DestinationString);
    v9 = OSOpenUnicodeHandle(&DestinationString, v22, &KeyHandle);
    if ( v9 < 0 )
      break;
    if ( OSGetRegistryValue(KeyHandle, L"Identifier", a1) < 0 )
    {
      v12 = KeyHandle;
LABEL_7:
      OSCloseHandle(v12);
      goto LABEL_13;
    }
    v14 = *a1;
    v15 = (wchar_t *)(*a1 + 8LL);
    String2.Buffer = v15;
    String2.MaximumLength = *(_WORD *)(v14 + 4);
    v16 = *(_DWORD *)(v14 + 4) >> 1;
    if ( v16 )
    {
      do
      {
        v17 = (unsigned int)(v16 - 1);
        if ( v15[v17] )
          break;
        --v16;
      }
      while ( (_DWORD)v17 );
    }
    String2.Length = 2 * v16;
    v18 = RtlEqualUnicodeString(&String1, &String2, 1u);
    ExFreePoolWithTag((PVOID)*a1, 0);
    v12 = KeyHandle;
    if ( !v18 )
      goto LABEL_7;
    v19 = OSGetRegistryValue(KeyHandle, L"Configuration Data", a1);
    OSCloseHandle(KeyHandle);
    if ( v19 >= 0 )
      goto LABEL_16;
LABEL_13:
    if ( ++v7 >= 0x3E7 )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        22,
        18,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids);
      return 3221225524LL;
    }
  }
  WPP_RECORDER_SF_SL(WPP_GLOBAL_Control->DeviceExtension, v8, v10, v11);
  v2 = v9;
LABEL_16:
  OSCloseHandle(v22);
  return v2;
}
