/*
 * XREFs of RtlApplyRXact @ 0x1800DFB20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180080090 (RtlAbortRXact.c)
 *     sub_1800800D0 @ 0x1800800D0 (sub_1800800D0.c)
 *     ZwSetValueKey @ 0x18009B6B0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009C4B0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x18009C6F0 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 *a1)
{
  __int64 result; // rax
  int v3; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey();
  if ( (int)result >= 0 )
  {
    v3 = ZwFlushKey();
    if ( v3 < 0 )
    {
      ZwDeleteValueKey();
      return (unsigned int)v3;
    }
    v3 = sub_1800800D0(a1);
    ZwDeleteValueKey();
    if ( v3 < 0 )
      return (unsigned int)v3;
    RtlAbortRXact((__int64)a1);
    return 0LL;
  }
  return result;
}
