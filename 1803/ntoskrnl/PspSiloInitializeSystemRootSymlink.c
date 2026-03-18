/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x140779B40
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     RtlUShortAdd @ 0x1400B8CC0 (RtlUShortAdd.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401A8C00 (ZwCreateSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall PspSiloInitializeSystemRootSymlink(__int64 a1)
{
  char *ServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  unsigned __int16 v4; // si
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  __int64 v7; // rbx
  NTSTATUS v8; // esi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE pusResult; // [rsp+88h] [rbp+28h] BYREF

  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  result = RtlUShortAdd(0x14u, *((_WORD *)ServerSiloGlobals + 524), (USHORT *)&pusResult);
  if ( result >= 0 )
  {
    v4 = (unsigned __int16)pusResult;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)pusResult, 0x70537350u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v4;
      DestinationString.Buffer = PoolWithTag;
      RtlCopyUnicodeString(&DestinationString, &PspSystemRootTargetPrefix);
      RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(ServerSiloGlobals + 1048));
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSystemRootSymlinkName;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 528;
      v7 = PsAttachSiloToCurrentThread(a1);
      v8 = ZwCreateSymbolicLinkObject(&pusResult, 0xF0001u, &ObjectAttributes, &DestinationString);
      PsDetachSiloFromCurrentThread(v7);
      if ( v8 >= 0 )
        ZwClose(pusResult);
      ExFreePoolWithTag(v6, 0x70537350u);
      return v8;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
