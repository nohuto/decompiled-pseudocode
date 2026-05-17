/*
 * XREFs of RtlIsDosDeviceName_U @ 0x18003C300
 * Callers:
 *     sub_18010BB44 @ 0x18010BB44 (sub_18010BB44.c)
 * Callees:
 *     sub_18003EF60 @ 0x18003EF60 (sub_18003EF60.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx(v2, a1) < 0 )
    return 0LL;
  else
    return sub_18003EF60(v2);
}
