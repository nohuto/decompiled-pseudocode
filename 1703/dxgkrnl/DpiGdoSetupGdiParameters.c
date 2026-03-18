/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x1C0119E10
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1C0119A28 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     DpiAppendStringToString @ 0x1C011A258 (DpiAppendStringToString.c)
 *     DpiGdoCreateServiceEntry @ 0x1C011A348 (DpiGdoCreateServiceEntry.c)
 *     DpiCopyUnicodeString @ 0x1C011B134 (DpiCopyUnicodeString.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int appended; // eax
  __int64 v12; // rbx
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  HANDLE v31; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v41; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t pszDest[4]; // [rsp+110h] [rbp+10h] BYREF
  int v43; // [rsp+118h] [rbp+18h]
  __int16 v44; // [rsp+11Ch] [rbp+1Ch]

  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)pszDest = 0LL;
  v43 = 0;
  v44 = 0;
  v31 = 0LL;
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
    v8 = *(_QWORD *)(v7 + 4488);
    v9 = v7 + 4480;
    v10 = v9 & ((unsigned __int128)-(__int128)v8 >> 64);
    if ( !v10 )
    {
      v12 = -1073741823LL;
      goto LABEL_33;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(PCWSTR *)((v9 & ((unsigned __int128)-(__int128)v8 >> 64)) + 8),
                 &Source);
  }
  LODWORD(v12) = appended;
  if ( appended < 0 )
    goto LABEL_20;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v12 = v13;
  if ( v13 < 0 )
    goto LABEL_33;
  LODWORD(v12) = DpiGdoCreateServiceEntry(*(_QWORD *)(v6 + 40) + 40LL, KeyHandle);
  if ( (int)v12 < 0 )
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
  if ( ZwOpenKey(&v31, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    v23 = ZwDeleteKey(v31);
    v28 = v23;
    if ( v23 < 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v29 + 24) = v28;
      WdLogEvent5_WdWarning(v29);
    }
  }
  v14 = ZwCreateKey(&v31, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
  v12 = v14;
  if ( v14 < 0 )
  {
    if ( v14 == -1073741771 )
      goto LABEL_12;
LABEL_33:
    v30 = WdLogNewEntry5_WdError(v9, v10);
    *(_QWORD *)(v30 + 24) = v12;
    WdLogEvent5_WdError(v30);
    goto LABEL_20;
  }
  if ( Disposition == 1 )
  {
    RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
    v15 = ZwSetValueKey(v31, &ValueName, 0, 6u, *(PVOID *)(v6 + 536), *(unsigned __int16 *)(v6 + 528));
    v12 = v15;
    if ( v15 < 0 )
      goto LABEL_33;
  }
LABEL_12:
  LODWORD(v12) = DpiAppendStringToString(Source.Buffer, pszDest, &UnicodeString);
  if ( (int)v12 >= 0 )
  {
    v16 = RtlWriteRegistryValue(
            4u,
            L"VIDEO",
            *(PCWSTR *)(a2 + 8),
            1u,
            UnicodeString.Buffer,
            UnicodeString.MaximumLength);
    v12 = v16;
    if ( v16 < 0 )
      goto LABEL_33;
    Destination.Length = 0;
    Destination.MaximumLength = Source.Length + 52;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(Source.Length + 52),
                                      0x74727044u);
    if ( !Destination.Buffer )
      goto LABEL_33;
    v17 = RtlAppendUnicodeStringToString(&Destination, &Source);
    v12 = v17;
    if ( v17 < 0 )
      goto LABEL_33;
    v18 = RtlAppendUnicodeToString(&Destination, pszDest);
    v12 = v18;
    if ( v18 < 0 )
      goto LABEL_33;
    v19 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
    v12 = v19;
    if ( v19 < 0 )
      goto LABEL_33;
    v41.ObjectName = &Destination;
    v41.Length = 48;
    v41.RootDirectory = 0LL;
    *(_OWORD *)&v41.SecurityDescriptor = 0LL;
    v41.Attributes = 576;
    v20 = ZwCreateKey(&Handle, 0xC0000000, &v41, 0, 0LL, 1u, 0LL);
    v12 = v20;
    if ( v20 < 0 )
      goto LABEL_33;
    v21 = RtlWriteRegistryValue(
            0,
            Destination.Buffer,
            L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
            3u,
            *(PVOID *)(v3 + 168),
            *(unsigned __int16 *)(v3 + 160));
    v12 = v21;
    if ( v21 < 0 )
      goto LABEL_33;
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v31 )
    ZwClose(v31);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v12;
}
