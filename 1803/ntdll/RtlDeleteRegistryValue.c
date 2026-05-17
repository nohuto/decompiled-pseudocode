/*
 * XREFs of RtlDeleteRegistryValue @ 0x18008ABF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x18009C4B0 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlDeleteRegistryValue(int a1, __int64 a2, const WCHAR *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = sub_18000AF44(a1, a2, 1, &v8);
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
