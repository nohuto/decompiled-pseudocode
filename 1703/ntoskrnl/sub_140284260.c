/*
 * XREFs of sub_140284260 @ 0x140284260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140284260(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 1728) )
  {
    *(_QWORD *)(a3 + 1752) = 272LL;
    result = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 1760) = a1;
    *(_QWORD *)(a3 + 1744) = 0LL;
    *(_QWORD *)(a3 + 1736) = a3 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a3 + 1728) = 1;
  }
  return result;
}
