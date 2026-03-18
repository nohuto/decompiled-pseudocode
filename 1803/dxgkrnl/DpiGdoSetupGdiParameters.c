/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x1C020E84C
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1C020E0A8 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0008DC0 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C01F4CBC (DpiFdoGetAdapterUniqueGUID.c)
 *     DpiAppendStringToString @ 0x1C01FCE1C (DpiAppendStringToString.c)
 *     DpiCopyUnicodeString @ 0x1C01FCF38 (DpiCopyUnicodeString.c)
 *     DpiGdoCreateServiceEntry @ 0x1C020E42C (DpiGdoCreateServiceEntry.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  int appended; // eax
  __int64 AdapterUniqueGUID; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  __int64 v26; // rax
  HANDLE v28; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v38; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[4]; // [rsp+110h] [rbp+10h] BYREF
  int v40; // [rsp+118h] [rbp+18h]
  __int16 v41; // [rsp+11Ch] [rbp+1Ch]

  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)SourceString = 0LL;
  v40 = 0;
  v41 = 0;
  v28 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Handle = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_BYTE *)(v6 + 480) )
  {
    appended = DpiCopyUnicodeString(&Source, (PCUNICODE_STRING)(*(_QWORD *)(v6 + 40) + 40LL));
  }
  else
  {
    AdapterUniqueGUID = DpiFdoGetAdapterUniqueGUID(*(_QWORD *)(v6 + 24));
    if ( !AdapterUniqueGUID )
    {
      v10 = -1073741823LL;
      goto LABEL_27;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(unsigned __int16 **)(AdapterUniqueGUID + 8),
                 &Source);
  }
  LODWORD(v10) = appended;
  if ( appended < 0 )
    goto LABEL_28;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_27;
  LODWORD(v10) = DpiGdoCreateServiceEntry(*(_QWORD *)(v6 + 40) + 40LL, KeyHandle);
  if ( (int)v10 < 0 )
    goto LABEL_28;
  if ( *(_BYTE *)(v6 + 480) )
  {
    SourceString[0] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    goto LABEL_19;
  }
  RtlStringCbPrintfW(SourceString, 0xEuLL, L"\\%04d", a3);
  RtlInitUnicodeString(&DestinationString, &SourceString[1]);
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v28, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    v12 = ZwDeleteKey(v28);
    v16 = v12;
    if ( v12 < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdWarning(v17);
    }
  }
  v18 = ZwCreateKey(&v28, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
  v10 = v18;
  if ( v18 < 0 )
  {
    if ( v18 == -1073741771 )
      goto LABEL_19;
LABEL_27:
    v26 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v26 + 24) = v10;
    WdLogEvent5_WdError(v26);
    goto LABEL_28;
  }
  if ( Disposition == 1 )
  {
    RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
    v19 = ZwSetValueKey(v28, &ValueName, 0, 6u, *(PVOID *)(v6 + 536), *(unsigned __int16 *)(v6 + 528));
    v10 = v19;
    if ( v19 < 0 )
      goto LABEL_27;
  }
LABEL_19:
  LODWORD(v10) = DpiAppendStringToString(Source.Buffer, SourceString, &UnicodeString);
  if ( (int)v10 >= 0 )
  {
    v20 = RtlWriteRegistryValue(
            4u,
            L"VIDEO",
            *(PCWSTR *)(a2 + 8),
            1u,
            UnicodeString.Buffer,
            UnicodeString.MaximumLength);
    v10 = v20;
    if ( v20 < 0 )
      goto LABEL_27;
    Destination.Length = 0;
    Destination.MaximumLength = Source.Length + 52;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(Source.Length + 52),
                                      0x74727044u);
    if ( !Destination.Buffer )
      goto LABEL_27;
    v21 = RtlAppendUnicodeStringToString(&Destination, &Source);
    v10 = v21;
    if ( v21 < 0 )
      goto LABEL_27;
    v22 = RtlAppendUnicodeToString(&Destination, SourceString);
    v10 = v22;
    if ( v22 < 0 )
      goto LABEL_27;
    v23 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
    v10 = v23;
    if ( v23 < 0 )
      goto LABEL_27;
    v38.ObjectName = &Destination;
    v38.Length = 48;
    v38.RootDirectory = 0LL;
    *(_OWORD *)&v38.SecurityDescriptor = 0LL;
    v38.Attributes = 576;
    v24 = ZwCreateKey(&Handle, 0xC0000000, &v38, 0, 0LL, 1u, 0LL);
    v10 = v24;
    if ( v24 < 0 )
      goto LABEL_27;
    v25 = RtlWriteRegistryValue(
            0,
            Destination.Buffer,
            L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
            3u,
            *(PVOID *)(v3 + 168),
            *(unsigned __int16 *)(v3 + 160));
    v10 = v25;
    if ( v25 < 0 )
      goto LABEL_27;
  }
LABEL_28:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v28 )
    ZwClose(v28);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v10;
}
