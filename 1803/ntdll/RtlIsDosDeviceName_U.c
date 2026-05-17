/*
 * XREFs of RtlIsDosDeviceName_U @ 0x18003FA40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E0C0 @ 0x18003E0C0 (sub_18003E0C0.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx((__int64)v2, a1) < 0 )
    return 0LL;
  else
    return sub_18003E0C0((__int64)v2);
}
