/*
 * XREFs of sub_180076898 @ 0x180076898
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x180076700 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     sub_180076A28 @ 0x180076A28 (sub_180076A28.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

bool __fastcall sub_180076898(PUNICODE_STRING String2, __int64 a2)
{
  bool v3; // di
  __int64 v4; // rax
  HANDLE *v5; // rbx
  _UNICODE_STRING DosPath; // xmm0
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v4 = sub_180076A28(0LL, a2);
  v5 = (HANDLE *)v4;
  if ( v4 )
    DosPath = *(_UNICODE_STRING *)(v4 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  String1 = DosPath;
  if ( DosPath.Length > 6u )
  {
    if ( DosPath.Length - 2 != String2->Length )
      goto LABEL_7;
    String1.Length = DosPath.Length - 2;
    goto LABEL_6;
  }
  if ( DosPath.Length == String2->Length )
LABEL_6:
    v3 = RtlEqualUnicodeString(&String1, String2, 1u) != 0;
LABEL_7:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    {
      ZwClose(v5[1]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  else
  {
    RtlLeaveCriticalSection(&stru_18015BE80);
  }
  return v3;
}
