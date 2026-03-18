/*
 * XREFs of ViGenericSetSecurity @ 0x1407807F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericSetSecurity(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(
           a1,
           a2,
           (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvIRP_MJ_SET_SECURITY,
           0x15u);
}
