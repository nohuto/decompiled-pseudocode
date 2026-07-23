/*
 * XREFs of sub_18004FB50 @ 0x18004FB50
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     sub_1800D3C0C @ 0x1800D3C0C (sub_1800D3C0C.c)
 *     sub_1800D5854 @ 0x1800D5854 (sub_1800D5854.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_18004FBB8 @ 0x18004FBB8 (sub_18004FBB8.c)
 *     sub_18004FC4C @ 0x18004FC4C (sub_18004FC4C.c)
 *     sub_1800F2DE4 @ 0x1800F2DE4 (sub_1800F2DE4.c)
 */

__int64 __fastcall sub_18004FB50(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax

  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    if ( ((a2 & 4) == 0 || (unsigned __int8)sub_18004FC4C(a1) == 1)
      && ((a2 & 1) == 0 || (unsigned __int8)sub_1800F2DE4(a1) == 1) )
    {
      *a3 = 1;
      return sub_18004FBB8(a1, a2);
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
