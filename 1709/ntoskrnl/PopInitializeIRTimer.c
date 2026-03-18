/*
 * XREFs of PopInitializeIRTimer @ 0x140139D2C
 * Callers:
 *     PopNetInitialize @ 0x140831B60 (PopNetInitialize.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14013033C (KeInitializeIRTimer.c)
 *     PopInitializeWorkItem @ 0x1405B8080 (PopInitializeWorkItem.c)
 */

__int64 __fastcall PopInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int16 a6, int a7)
{
  LOWORD(a7) = 8;
  HIWORD(a7) = a6;
  KeInitializeIRTimer(a1, a2, 0LL, (unsigned __int8 *)&a7, 2);
  return PopInitializeWorkItem(a1 + 136, a4, 0LL);
}
