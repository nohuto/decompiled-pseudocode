/*
 * XREFs of SmpFinalizePathStrings @ 0x14000C210
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpFinalizePathStrings(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  const WCHAR *NtSystemRoot; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot(a1, a2, a3, a4);
  RtlInitUnicodeString(&SmpSystemRoot, NtSystemRoot);
  Destination.Length = 0;
  Destination.MaximumLength = SmpSystemRoot.MaximumLength + SmpDefaultLibPath.MaximumLength + 20;
  Destination.Buffer = (PWSTR)RtlAllocateHeap(
                                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                SmBaseTag,
                                Destination.MaximumLength);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &SmpSystemRoot);
    RtlAppendUnicodeToString(&Destination, L"\\system32;");
    RtlAppendUnicodeStringToString(&Destination, &SmpDefaultLibPath);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, SmpDefaultLibPath.Buffer);
    SmpDefaultLibPath = Destination;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
