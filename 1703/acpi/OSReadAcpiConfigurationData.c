/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C00AB0E4
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00AB7A8 (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_SL @ 0x1C0056CAC (WPP_RECORDER_SF_SL.c)
 *     OSOpenUnicodeHandle @ 0x1C0083970 (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C00880C4 (OSGetRegistryValue.c)
 *     OSCloseHandle @ 0x1C0089BD0 (OSCloseHandle.c)
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
  __int64 v10; // rcx
  wchar_t *v11; // r8
  int v12; // edx
  __int64 v13; // rcx
  BOOLEAN v14; // bl
  HANDLE v15; // rcx
  int v16; // edx
  NTSTATUS v17; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  HANDLE v21; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v24; // [rsp+80h] [rbp+37h] BYREF

  v2 = 0;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v4 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v21);
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
  DestinationString.Buffer = (wchar_t *)&v24;
  DestinationString.MaximumLength = 8;
  while ( 1 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v5, 0xAu, &DestinationString);
    v7 = OSOpenUnicodeHandle(&DestinationString, v21, &Handle);
    if ( v7 < 0 )
      break;
    if ( OSGetRegistryValue(Handle, L"Identifier", a1) < 0 )
    {
      v15 = Handle;
LABEL_9:
      OSCloseHandle(v15);
      goto LABEL_10;
    }
    v10 = *a1;
    v11 = (wchar_t *)(*a1 + 8LL);
    String2.Buffer = v11;
    String2.MaximumLength = *(_WORD *)(v10 + 4);
    v12 = *(_DWORD *)(v10 + 4) >> 1;
    if ( v12 )
    {
      do
      {
        v13 = (unsigned int)(v12 - 1);
        if ( v11[v13] )
          break;
        --v12;
      }
      while ( (_DWORD)v13 );
    }
    String2.Length = 2 * v12;
    v14 = RtlEqualUnicodeString(&String1, &String2, 1u);
    ExFreePoolWithTag((PVOID)*a1, 0);
    v15 = Handle;
    if ( !v14 )
      goto LABEL_9;
    v17 = OSGetRegistryValue(Handle, L"Configuration Data", a1);
    OSCloseHandle(Handle);
    if ( v17 >= 0 )
      goto LABEL_13;
LABEL_10:
    if ( ++v5 >= 0x3E7 )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        22,
        18,
        (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids);
      return 3221225524LL;
    }
  }
  WPP_RECORDER_SF_SL(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
  v2 = v7;
LABEL_13:
  OSCloseHandle(v21);
  return v2;
}
