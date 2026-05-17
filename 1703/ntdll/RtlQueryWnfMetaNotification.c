/*
 * XREFs of RtlQueryWnfMetaNotification @ 0x180088F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryWnfStateNameInformation @ 0x1800A7DD0 (ZwQueryWnfStateNameInformation.c)
 */

__int64 __fastcall RtlQueryWnfMetaNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = a3;
  return ZwQueryWnfStateNameInformation(&v5, a2, a4, a1, 4);
}
