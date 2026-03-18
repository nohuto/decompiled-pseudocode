/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x1C0110C48
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1C010F370 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000C794 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     DpiGdoCreateServiceEntry @ 0x1C010F754 (DpiGdoCreateServiceEntry.c)
 *     DpiAppendStringToString @ 0x1C0111090 (DpiAppendStringToString.c)
 *     DpiCopyUnicodeString @ 0x1C0120118 (DpiCopyUnicodeString.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  int appended; // eax
  __int64 v11; // rbx
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  HANDLE v29; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v39; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t pszDest[4]; // [rsp+110h] [rbp+10h] BYREF
  int v41; // [rsp+118h] [rbp+18h]
  __int16 v42; // [rsp+11Ch] [rbp+1Ch]

  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)pszDest = 0LL;
  v41 = 0;
  v42 = 0;
  v29 = 0LL;
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
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL);
    v8 = *(_QWORD *)(v7 + 4584);
    v9 = v7 + 4576;
    if ( (v9 & ((unsigned __int128)-(__int128)v8 >> 64)) == 0 )
    {
      v11 = -1073741823LL;
      goto LABEL_33;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(PCWSTR *)((v9 & ((unsigned __int128)-(__int128)v8 >> 64)) + 8),
                 &Source);
  }
  LODWORD(v11) = appended;
  if ( appended < 0 )
    goto LABEL_20;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v11 = v12;
  if ( v12 < 0 )
    goto LABEL_33;
  LODWORD(v11) = DpiGdoCreateServiceEntry(*(_QWORD *)(v6 + 40) + 40LL, KeyHandle);
  if ( (int)v11 < 0 )
    goto LABEL_20;
  if ( *(_BYTE *)(v6 + 480) )
  {
    pszDest[0] = 0;
    RtlInitUnicodeString(&DestinationString, pszDest);
    goto LABEL_12;
  }
  RtlStringCbPrintfW(pszDest, 0xEuLL, L"\\%04d", a3);
  RtlInitUnicodeString(&DestinationString, &pszDest[1]);
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v29, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    v22 = ZwDeleteKey(v29);
    v26 = v22;
    if ( v22 < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v27 + 24) = v26;
      WdLogEvent5_WdWarning(v27);
    }
  }
  v13 = ZwCreateKey(&v29, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1073741771 )
      goto LABEL_12;
LABEL_33:
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = v11;
    WdLogEvent5_WdError(v28);
    goto LABEL_20;
  }
  if ( Disposition == 1 )
  {
    RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
    v14 = ZwSetValueKey(v29, &ValueName, 0, 6u, *(PVOID *)(v6 + 536), *(unsigned __int16 *)(v6 + 528));
    v11 = v14;
    if ( v14 < 0 )
      goto LABEL_33;
  }
LABEL_12:
  LODWORD(v11) = DpiAppendStringToString(Source.Buffer, pszDest, &UnicodeString);
  if ( (int)v11 >= 0 )
  {
    v15 = RtlWriteRegistryValue(
            4u,
            L"VIDEO",
            *(PCWSTR *)(a2 + 8),
            1u,
            UnicodeString.Buffer,
            UnicodeString.MaximumLength);
    v11 = v15;
    if ( v15 < 0 )
      goto LABEL_33;
    Destination.Length = 0;
    Destination.MaximumLength = Source.Length + 52;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(Source.Length + 52),
                                      0x74727044u);
    if ( !Destination.Buffer )
      goto LABEL_33;
    v16 = RtlAppendUnicodeStringToString(&Destination, &Source);
    v11 = v16;
    if ( v16 < 0 )
      goto LABEL_33;
    v17 = RtlAppendUnicodeToString(&Destination, pszDest);
    v11 = v17;
    if ( v17 < 0 )
      goto LABEL_33;
    v18 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
    v11 = v18;
    if ( v18 < 0 )
      goto LABEL_33;
    v39.ObjectName = &Destination;
    v39.Length = 48;
    v39.RootDirectory = 0LL;
    *(_OWORD *)&v39.SecurityDescriptor = 0LL;
    v39.Attributes = 576;
    v19 = ZwCreateKey(&Handle, 0xC0000000, &v39, 0, 0LL, 1u, 0LL);
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_33;
    v20 = RtlWriteRegistryValue(
            0,
            Destination.Buffer,
            L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
            3u,
            *(PVOID *)(v3 + 168),
            *(unsigned __int16 *)(v3 + 160));
    v11 = v20;
    if ( v20 < 0 )
      goto LABEL_33;
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v29 )
    ZwClose(v29);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v11;
}
