/*
 * XREFs of RtlWriteRegistryValue @ 0x18008F620
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1800EB540 (RtlSetPortableOperatingSystem.c)
 *     sub_1800EB6C0 @ 0x1800EB6C0 (sub_1800EB6C0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlWriteRegistryValue(int a1, _WORD *a2, const WCHAR *a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  result = sub_180056CCC(a1, a2, 1, &v11);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v10 = ZwSetValueKey(v11, &DestinationString, 0LL, a4 & 0xFFFFFF, a5, a6);
    if ( (a1 & 0x40000000) == 0 )
      ZwClose(v11);
    return v10;
  }
  return result;
}
