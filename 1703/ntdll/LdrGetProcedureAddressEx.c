/*
 * XREFs of LdrGetProcedureAddressEx @ 0x18006F800
 * Callers:
 *     sub_18006F46C @ 0x18006F46C (sub_18006F46C.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(
        unsigned __int64 a1,
        const void **a2,
        unsigned int a3,
        __int64 *a4,
        char a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
