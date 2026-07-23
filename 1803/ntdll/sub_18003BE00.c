/*
 * XREFs of sub_18003BE00 @ 0x18003BE00
 * Callers:
 *     sub_18003BAE0 @ 0x18003BAE0 (sub_18003BAE0.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     sub_1800CCA84 @ 0x1800CCA84 (sub_1800CCA84.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18003BE6C @ 0x18003BE6C (sub_18003BE6C.c)
 *     RtlGetNtSystemRoot @ 0x18003FAD0 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall sub_18003BE00(_WORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const WCHAR *NtSystemRoot; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *a1 = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeString(&DestinationString, NtSystemRoot);
  sub_18003BE6C(a1, &DestinationString);
  sub_18003BE6C(a1, &stru_180110350);
  if ( a2 )
    return (unsigned int)sub_18003BE6C(a1, a2);
  return v2;
}
