/*
 * XREFs of sub_1402E93E0 @ 0x1402E93E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E93E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 1936) )
  {
    *(_QWORD *)(a3 + 1960) = 272LL;
    result = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 1968) = a1;
    *(_QWORD *)(a3 + 1952) = 0LL;
    *(_QWORD *)(a3 + 1944) = a3 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a3 + 1936) = 1;
  }
  return result;
}
