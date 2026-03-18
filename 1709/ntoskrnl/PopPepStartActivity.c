/*
 * XREFs of PopPepStartActivity @ 0x14001AFB0
 * Callers:
 *     PopPepComponentGetWork @ 0x14001B338 (PopPepComponentGetWork.c)
 *     PopPepWork @ 0x1400FD200 (PopPepWork.c)
 *     PopPepTryPowerDownDevice @ 0x1401258AC (PopPepTryPowerDownDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopPepStartActivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 result; // rax

  v7 = a4;
  _InterlockedDecrement(a5);
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))off_1402B53F8[17 * a4])(a1, a2, a6);
  **(_DWORD **)(a3 + 8 * v7) &= ~2u;
  **(_DWORD **)(a3 + 8 * v7) &= ~8u;
  **(_DWORD **)(a3 + 8 * v7) |= 4u;
  return result;
}
