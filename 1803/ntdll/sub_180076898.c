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

bool __fastcall sub_180076898(unsigned __int16 *a1, __int64 a2)
{
  bool v3; // di
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  struct _UNICODE_STRING DosPath; // xmm0
  struct _UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v4 = sub_180076A28(0LL, a2);
  v5 = v4;
  if ( v4 )
    DosPath = *(struct _UNICODE_STRING *)(v4 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  v8 = DosPath;
  if ( DosPath.Length > 6u )
  {
    if ( DosPath.Length - 2 != *a1 )
      goto LABEL_7;
    v8.Length = DosPath.Length - 2;
    goto LABEL_6;
  }
  if ( DosPath.Length == *a1 )
LABEL_6:
    v3 = RtlEqualUnicodeString(&v8.Length, a1, 1) != 0;
LABEL_7:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    {
      ZwClose(*(_QWORD *)(v5 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  else
  {
    RtlLeaveCriticalSection((__int64)&unk_18015BE80);
  }
  return v3;
}
