/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_41fef8c72f572c123401c5ddda9f27d3_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18017B710
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_41fef8c72f572c123401c5ddda9f27d3_::__lambda_41fef8c72f572c123401c5ddda9f27d3_ @ 0x18017AF20 (_lambda_41fef8c72f572c123401c5ddda9f27d3_--__lambda_41fef8c72f572c123401c5ddda9f27d3_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_41fef8c72f572c123401c5ddda9f27d3_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  lambda_41fef8c72f572c123401c5ddda9f27d3_::__lambda_41fef8c72f572c123401c5ddda9f27d3_(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
