/*
 * XREFs of sub_18009E680 @ 0x18009E680
 * Callers:
 *     KiUserApcDispatcher @ 0x18009E6D0 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x18009E7E0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     __misaligned_access @ 0x18007D790 (__misaligned_access.c)
 */

__int64 __fastcall sub_18009E680(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rax

  return v4(a1, a2, a3, a4);
}
