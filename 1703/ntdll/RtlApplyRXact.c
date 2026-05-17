/*
 * XREFs of RtlApplyRXact @ 0x1800E5090
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180087C90 (RtlAbortRXact.c)
 *     sub_180087CD0 @ 0x180087CD0 (sub_180087CD0.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A6CB0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A6EF0 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey();
  if ( (int)result >= 0 )
  {
    v3 = ZwFlushKey();
    if ( v3 < 0 || (v3 = sub_180087CD0(a1), v3 < 0) )
    {
      ZwDeleteValueKey();
      return (unsigned int)v3;
    }
    else
    {
      ZwDeleteValueKey();
      RtlAbortRXact(a1);
      return 0LL;
    }
  }
  return result;
}
