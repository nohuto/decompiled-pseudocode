/*
 * XREFs of ndisGetOrCreateFilterInstanceKey @ 0x1C00E5234
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00E5120 (ndisCreateFilterInstanceRegistry.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0004324 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisGetOrCreateFilterInstanceKey(
        const UNICODE_STRING *a1,
        __int64 a2,
        const GUID *a3,
        char a4,
        _BYTE *a5,
        PUNICODE_STRING Destination)
{
  const GUID *v6; // rbx
  unsigned int v7; // edi
  char v8; // si
  char v9; // r14
  unsigned __int16 *PoolWithTag; // r13
  __int64 v11; // rbx
  wchar_t *v12; // rax
  NTSTATUS v14; // ebx
  ULONG i; // r14d
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  int v19; // eax
  NTSTATUS RegistryValues; // eax
  NTSTATUS v21; // ebx
  wchar_t *v22; // rax
  const UNICODE_STRING *v23; // rbx
  unsigned __int16 v24; // ax
  wchar_t *v25; // rax
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  char v27; // [rsp+30h] [rbp-D0h]
  int v30; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING String1; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v32; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  ULONG v34; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+7Ch] [rbp-84h]
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  PCUNICODE_STRING Source; // [rsp+88h] [rbp-78h]
  _UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING GuidString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING String2; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v43; // [rsp+D8h] [rbp-28h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+120h] [rbp+20h] BYREF

  v6 = a3;
  Source = a1;
  v7 = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  v43.Buffer = (wchar_t *)L"\\";
  *(_DWORD *)&String1.Length = 0;
  v8 = 0;
  String1.Buffer = 0LL;
  v9 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  PoolWithTag = 0LL;
  UnicodeString.Buffer = 0LL;
  v27 = 0;
  KeyHandle = 0LL;
  v34 = 0;
  *(_DWORD *)&v32.Length = 0;
  v32.Buffer = 0LL;
  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  v35 = 0;
  v30 = 0;
  v40 = a2;
  *(_DWORD *)&SourceString.Length = 6946920;
  *(_DWORD *)&v43.Length = 262146;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x5Fu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, a3, a2);
  if ( !*(_QWORD *)&v6[1].Data1 )
  {
    v7 = -1073741811;
    goto LABEL_25;
  }
  *a5 = 0;
  *(_QWORD *)&Destination->Length = 0LL;
  Destination->Buffer = 0LL;
  if ( !RtlStringFromGUID((const GUID *const)(*(_QWORD *)&v6[1].Data1 + 4032LL), &GuidString) )
  {
    v8 = 1;
    DestinationString.Length = 0;
    DestinationString.MaximumLength = GuidString.Length
                                    + SourceString.Length
                                    + ndisParameterStr.Length
                                    + ndisFilterAdapterStr.Length
                                    + Source->Length
                                    + 2;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                            NonPagedPoolNx,
                                            DestinationString.MaximumLength,
                                            0x2020444Eu);
    if ( !DestinationString.Buffer )
    {
      v7 = -1073741670;
      goto LABEL_25;
    }
    memset(DestinationString.Buffer, 0, DestinationString.MaximumLength);
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
    RtlAppendUnicodeStringToString(&DestinationString, &ndisFilterAdapterStr);
    RtlAppendUnicodeStringToString(&DestinationString, &GuidString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes) )
    {
      v7 = -1073741823;
      KeyHandle = 0LL;
LABEL_28:
      RtlFreeUnicodeString(&GuidString);
      goto LABEL_29;
    }
    v11 = *(_QWORD *)(v40 + 112);
    if ( v11 )
    {
      do
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 480LL) + 40LL) & 2) == 0 )
          break;
        v11 = *(_QWORD *)(v11 + 112);
      }
      while ( v11 );
      if ( v11 )
      {
        String1.Length = *(_WORD *)(*(_QWORD *)(v11 + 16) + 128LL);
        String1.MaximumLength = String1.Length + 2;
        String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      NonPagedPoolNx,
                                      (unsigned __int16)(String1.Length + 2),
                                      0x2020444Eu);
        if ( !String1.Buffer )
        {
          v7 = -1073741670;
LABEL_16:
          v6 = a3;
          goto LABEL_25;
        }
        memset(String1.Buffer, 0, String1.MaximumLength);
        memmove(String1.Buffer, *(const void **)(*(_QWORD *)(v11 + 16) + 136LL), String1.Length);
LABEL_18:
        PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x2020444Eu);
        if ( !PoolWithTag )
        {
LABEL_19:
          v7 = -1073741670;
LABEL_20:
          v9 = 1;
          goto LABEL_16;
        }
        for ( i = 0; i <= 0x270F; ++i )
        {
          memset(PoolWithTag, 0, 0x218uLL);
          v34 = 0;
          v16 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, PoolWithTag, 0x216u, &v34);
          if ( v16 == -2147483622 )
            break;
          if ( v16 )
            goto LABEL_68;
          v32.Length = PoolWithTag[6];
          v32.Buffer = PoolWithTag + 8;
          v32.MaximumLength = v32.Length + 2;
          memset(QueryTable, 0, sizeof(QueryTable));
          QueryTable[0].QueryRoutine = 0LL;
          QueryTable[0].Flags = 1;
          QueryTable[0].Name = PoolWithTag + 8;
          v17 = *(_QWORD *)(v40 + 16);
          v18 = *(_BYTE *)(v17 + 100);
          if ( v18 > 6u || v18 == 6 && *(_BYTE *)(v17 + 101) >= 0x28u )
          {
            v19 = 256;
            v35 = 0x1000000;
            v30 = 256;
          }
          else
          {
            v19 = v30;
          }
          QueryTable[1].QueryRoutine = 0LL;
          QueryTable[1].Flags = v19 | 0x24;
          QueryTable[2].Name = 0LL;
          QueryTable[1].Name = (wchar_t *)L"LowerComponent";
          QueryTable[1].EntryContext = &String2;
          QueryTable[1].DefaultType = v35;
          RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
          v21 = RegistryValues;
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
            WPP_SF_dd(0x60u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, RegistryValues, v30);
          if ( v21 )
            goto LABEL_68;
          if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
          {
            *a5 = 1;
            break;
          }
          if ( String2.Buffer )
          {
            ExFreePoolWithTag(String2.Buffer, 0);
            String2.Buffer = 0LL;
          }
        }
        if ( *a5 )
          goto LABEL_64;
        if ( a4 )
        {
          if ( i > 0x270F )
            goto LABEL_19;
          *(_DWORD *)&v32.Length = 655368;
          v22 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xAuLL, 0x2020444Eu);
          v32.Buffer = v22;
          if ( !v22 )
            goto LABEL_19;
          v27 = 1;
          memset(v22, 0, v32.MaximumLength);
          if ( !(unsigned int)RtlStringCchPrintfW(v32.Buffer, (unsigned __int64)v32.MaximumLength >> 1, L"%04d", i) )
          {
LABEL_64:
            v23 = Source;
            v24 = GuidString.Length
                + v43.Length
                + ndisParameterStr.Length
                + ndisFilterAdapterStr.Length
                + v32.Length
                + Source->Length
                + 2;
            Destination->MaximumLength = v24;
            v25 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x2020444Eu);
            Destination->Buffer = v25;
            if ( !v25 )
              goto LABEL_19;
            memset(v25, 0, Destination->MaximumLength);
            RtlCopyUnicodeString(Destination, v23);
            RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
            RtlAppendUnicodeStringToString(Destination, &ndisFilterAdapterStr);
            RtlAppendUnicodeStringToString(Destination, &GuidString);
            RtlAppendUnicodeStringToString(Destination, &v43);
            RtlAppendUnicodeStringToString(Destination, &v32);
            v9 = 1;
            if ( *a5 )
              goto LABEL_16;
            if ( !RtlCreateRegistryKey(1u, (PWSTR)Destination->Buffer)
              && !RtlWriteRegistryValue(
                    1u,
                    (PCWSTR)Destination->Buffer,
                    L"LowerComponent",
                    1u,
                    String1.Buffer,
                    String1.Length + 2) )
            {
              goto LABEL_20;
            }
            ExFreePoolWithTag(Destination->Buffer, 0);
            *(_QWORD *)&Destination->Length = 0LL;
            Destination->Buffer = 0LL;
          }
        }
LABEL_68:
        v9 = 1;
        goto LABEL_43;
      }
    }
    v6 = a3;
    if ( !RtlStringFromGUID(a3 + 252, &UnicodeString) )
    {
      String1.Length = UnicodeString.Length;
      String1.MaximumLength = UnicodeString.MaximumLength;
      v12 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, UnicodeString.MaximumLength, 0x2020444Eu);
      String1.Buffer = v12;
      if ( v12 )
      {
        v9 = 1;
        memset(v12, 0, String1.MaximumLength);
        v14 = RtlUpcaseUnicodeString(&String1, &UnicodeString, 0);
        RtlFreeUnicodeString(&UnicodeString);
        if ( !v14 )
          goto LABEL_18;
LABEL_43:
        v6 = a3;
      }
      else
      {
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
  }
  v7 = -1073741823;
LABEL_25:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    goto LABEL_28;
LABEL_29:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v9 )
    ExFreePoolWithTag(String1.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v27 )
    ExFreePoolWithTag(v32.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(ResultLength) = v7;
    WPP_SF_qqqL(0x61u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Source, v6, v40, ResultLength);
  }
  return v7;
}
