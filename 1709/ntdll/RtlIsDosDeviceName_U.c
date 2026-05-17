/*
 * XREFs of RtlIsDosDeviceName_U @ 0x180035B10
 * Callers:
 *     BaseIsThisAConsoleName @ 0x18010EA80 (BaseIsThisAConsoleName.c)
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x180033BC0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx((__int64)v5, a1) < 0 )
    return 0LL;
  else
    return RtlpIsDosDeviceName_Ustr((__int64)v5, v1, v2, v3);
}
