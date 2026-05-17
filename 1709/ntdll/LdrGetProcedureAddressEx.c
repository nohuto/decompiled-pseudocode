/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180015D80
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x180015A3C (LdrpGetShimEngineInterface.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(int a1, int a2, int a3, int a4, int a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
