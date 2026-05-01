/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_7f972278ece14cb52f7272136f7cbede_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180179F40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6d9923a1ae258a03f662b6b89cb315c5_::__lambda_6d9923a1ae258a03f662b6b89cb315c5_ @ 0x180179A04 (_lambda_6d9923a1ae258a03f662b6b89cb315c5_--__lambda_6d9923a1ae258a03f662b6b89cb315c5_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7f972278ece14cb52f7272136f7cbede_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  lambda_6d9923a1ae258a03f662b6b89cb315c5_::__lambda_6d9923a1ae258a03f662b6b89cb315c5_(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
