/*
 * XREFs of sub_18000159C @ 0x18000159C
 * Callers:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800DA4EC @ 0x1800DA4EC (sub_1800DA4EC.c)
 *     sub_1800DC094 @ 0x1800DC094 (sub_1800DC094.c)
 * Callees:
 *     sub_180001600 @ 0x180001600 (sub_180001600.c)
 *     sub_180001694 @ 0x180001694 (sub_180001694.c)
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 */

__int64 __fastcall sub_18000159C(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    if ( ((a2 & 4) == 0 || (unsigned __int8)sub_180001694() == 1)
      && ((a2 & 1) == 0 || (unsigned __int8)sub_1800F5B0C(a1) == 1) )
    {
      *a3 = 1;
      return sub_180001600(a1, a2);
    }
    result = 3221225485LL;
  }
  else
  {
    result = 0LL;
  }
  *a3 = 0;
  return result;
}
