/*
 * XREFs of LdrGetProcedureAddress @ 0x180082090
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddress(__int64 a1, unsigned __int16 *a2, int a3, __int64 *a4)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, 0, retaddr);
}
