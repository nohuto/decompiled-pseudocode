/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180110390
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_ @ 0x18010FCD8 (_lambda_379fb6251cfae0942258739af0295e77_--__lambda_379fb6251cfae0942258739af0295e77_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_379fb6251cfae0942258739af0295e77_>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_((__int64)(Block + 4));
  Block[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
