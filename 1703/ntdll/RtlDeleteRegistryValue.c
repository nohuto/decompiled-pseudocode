/*
 * XREFs of RtlDeleteRegistryValue @ 0x18008F5B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1800A6CB0 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlDeleteRegistryValue(int a1, _WORD *a2, const WCHAR *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = sub_180056CCC(a1, a2, 1, &v8);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v6 = ZwDeleteValueKey(v8, &DestinationString);
    if ( (a1 & 0x40000000) == 0 )
      ZwClose(v8);
    return v6;
  }
  return result;
}
