/*
 * XREFs of ExecutePccCommand @ 0x1C002CAF8
 * Callers:
 *     ExecutePccWrite @ 0x1C000BA10 (ExecutePccWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutePccCommand(char a1, __int64 a2)
{
  LOBYTE(a2) = a1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1C00118E8 + 104))(*(_QWORD *)(qword_1C00118E8 + 56), a2);
}
