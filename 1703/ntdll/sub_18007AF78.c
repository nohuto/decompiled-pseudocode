/*
 * XREFs of sub_18007AF78 @ 0x18007AF78
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x18007ADF0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

bool __fastcall sub_18007AF78(unsigned __int16 *a1, __int64 a2)
{
  bool v3; // di
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  struct _UNICODE_STRING DosPath; // xmm0
  struct _UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v4 = sub_18007B108(0LL, a2);
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
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
  }
  return v3;
}
