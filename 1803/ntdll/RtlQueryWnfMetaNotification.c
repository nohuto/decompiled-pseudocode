/*
 * XREFs of RtlQueryWnfMetaNotification @ 0x1800824B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x18009D630 (ZwQueryWnfStateNameInformation.c)
 */

__int64 __fastcall RtlQueryWnfMetaNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = a3;
  return ZwQueryWnfStateNameInformation(&v5, a2, a4, a1, 4);
}
