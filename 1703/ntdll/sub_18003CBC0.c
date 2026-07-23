/*
 * XREFs of sub_18003CBC0 @ 0x18003CBC0
 * Callers:
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     sub_1800D6F80 @ 0x1800D6F80 (sub_1800D6F80.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x18003BA70 (RtlGetNtSystemRoot.c)
 *     sub_18003CC2C @ 0x18003CC2C (sub_18003CC2C.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_18003CBC0(_WORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const WCHAR *NtSystemRoot; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *a1 = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeString(&DestinationString, NtSystemRoot);
  sub_18003CC2C(a1, &DestinationString);
  sub_18003CC2C(a1, &stru_180110370);
  if ( a2 )
    return (unsigned int)sub_18003CC2C(a1, a2);
  return v2;
}
