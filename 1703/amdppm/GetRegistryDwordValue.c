/*
 * XREFs of GetRegistryDwordValue @ 0x1C00265DC
 * Callers:
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C0026600 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault(a1, a2, a3, a4);
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
