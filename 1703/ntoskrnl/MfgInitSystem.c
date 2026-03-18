/*
 * XREFs of MfgInitSystem @ 0x140826610
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x14017F8A0 (ZwDeleteKey.c)
 *     ZwOpenKeyEx @ 0x1401801E0 (ZwOpenKeyEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MfgInitSystem(__int64 a1)
{
  NTSTATUS inited; // ebx
  __int64 v2; // rdi
  unsigned __int16 v3; // ax
  PVOID PoolWithTag; // rax
  __int64 v6; // rax
  HANDLE v7; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  WCHAR pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF

  ExpManufacturingInformation = 0LL;
  inited = 0;
  qword_140344B48 = 0LL;
  qword_140344B50 = 0LL;
  v2 = *(_QWORD *)(a1 + 240);
  v7 = 0LL;
  KeyHandle = 0LL;
  v3 = *(_WORD *)(v2 + 2488);
  if ( !v3 )
    return (unsigned int)inited;
  if ( v3 >= 0x80u )
    return (unsigned int)-1073741811;
  LODWORD(qword_140344B48) = *(_DWORD *)(v2 + 2488);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, WORD1(qword_140344B48), 0x5067664Du);
  qword_140344B50 = PoolWithTag;
  if ( PoolWithTag )
  {
    inited = RtlStringCbCopyW((NTSTRSAFE_PWSTR)PoolWithTag, WORD1(qword_140344B48), *(NTSTRSAFE_PCWSTR *)(v2 + 2496));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlStringCbPrintfW(
               pszDest,
               0x200uLL,
               L"%s%s",
               L"\\registry\\machine\\",
               L"System\\CurrentControlSet\\Control\\ManufacturingMode\\");
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140344B48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_22;
    ZwClose(Handle);
    LODWORD(ExpManufacturingInformation) = ExpManufacturingInformation | 1;
    RtlInitUnicodeStringEx(&ValueName, L"LastProfile");
    inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, qword_140344B50, WORD1(qword_140344B48));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"Current");
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 832;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKeyEx(&v7, 0xF003Fu, &ObjectAttributes, 8u) >= 0 )
    {
      inited = ZwDeleteKey(v7);
      if ( inited < 0 )
        goto LABEL_22;
      ZwClose(v7);
      v7 = 0LL;
    }
    inited = ZwCreateKey(&v7, 0xF003Fu, &ObjectAttributes, 0, 0LL, 3u, 0LL);
    if ( inited >= 0 )
    {
      inited = RtlStringCbPrintfW(
                 pszDest,
                 0x200uLL,
                 L"%s%s%wZ",
                 L"\\registry\\machine\\",
                 L"System\\CurrentControlSet\\Control\\ManufacturingMode\\",
                 &qword_140344B48);
      if ( inited >= 0 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( pszDest[v6] );
        inited = ZwSetValueKey(v7, &CmSymbolicLinkValueName, 0, 6u, pszDest, 2 * v6);
      }
    }
    goto LABEL_22;
  }
  inited = -1073741670;
LABEL_22:
  if ( v7 )
    ZwClose(v7);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
