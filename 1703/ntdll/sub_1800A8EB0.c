/*
 * XREFs of sub_1800A8EB0 @ 0x1800A8EB0
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A8F00 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x1800A9010 (KiUserCallbackDispatcher.c)
 * Callees:
 *     __misaligned_access @ 0x180084010 (__misaligned_access.c)
 */

__int64 __fastcall sub_1800A8EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rax

  return v4(a1, a2, a3, a4);
}
