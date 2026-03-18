/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x1407159B0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407153F0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14017EFE0 (ZwCreateSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspSiloInitializeSystemRootSymlink(__int64 a1)
{
  char *ServerSiloGlobals; // rdi
  unsigned __int16 v3; // bx
  wchar_t *PoolWithTag; // rax
  wchar_t *v5; // rsi
  __int64 v7; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+88h] [rbp+28h] BYREF

  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  v3 = *((_WORD *)ServerSiloGlobals + 524) + 20;
  if ( v3 < 0x14u )
    return 3221225621LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v3, 0x70537350u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = v3;
  DestinationString.Buffer = PoolWithTag;
  RtlCopyUnicodeString(&DestinationString, &PspSystemRootTargetPrefix);
  RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(ServerSiloGlobals + 1048));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSystemRootSymlinkName;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 528;
  v7 = PsAttachSiloToCurrentThread(a1);
  v8 = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
  PsDetachSiloFromCurrentThread(v7);
  if ( v8 >= 0 )
    ZwClose(SymbolicLinkHandle);
  ExFreePoolWithTag(v5, 0x70537350u);
  return (unsigned int)v8;
}
