/*
 * XREFs of PopPepStartActivity @ 0x140078E00
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400788E8 (PopPepTryPowerDownDevice.c)
 *     PopPepWork @ 0x1400789D0 (PopPepWork.c)
 *     PopPepComponentGetWork @ 0x140079188 (PopPepComponentGetWork.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))off_1402EDC88[17 * a4])(a1, a2, a6);
  **(_DWORD **)(a3 + 8 * v7) &= ~2u;
  **(_DWORD **)(a3 + 8 * v7) &= ~8u;
  **(_DWORD **)(a3 + 8 * v7) |= 4u;
  return result;
}
