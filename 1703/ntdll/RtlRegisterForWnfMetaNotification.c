/*
 * XREFs of RtlRegisterForWnfMetaNotification @ 0x180087280
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180087110 (RtlWaitForWnfMetaNotification.c)
 * Callees:
 *     sub_1800198E4 @ 0x1800198E4 (sub_1800198E4.c)
 */

__int64 __fastcall RtlRegisterForWnfMetaNotification(PVOID *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  *a1 = 0LL;
  if ( !a3 || (a3 & 0x11) != 0 )
    return 3221225485LL;
  else
    return sub_1800198E4(a1, a2, -1, a4, a5, 0LL, 0, 1, a3);
}
