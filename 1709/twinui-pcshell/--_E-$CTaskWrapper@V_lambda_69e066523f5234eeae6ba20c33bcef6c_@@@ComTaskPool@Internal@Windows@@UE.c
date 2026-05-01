/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_69e066523f5234eeae6ba20c33bcef6c_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801DC430
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_69e066523f5234eeae6ba20c33bcef6c_::__lambda_69e066523f5234eeae6ba20c33bcef6c_ @ 0x1801DBC6C (_lambda_69e066523f5234eeae6ba20c33bcef6c_--__lambda_69e066523f5234eeae6ba20c33bcef6c_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_69e066523f5234eeae6ba20c33bcef6c_>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  lambda_69e066523f5234eeae6ba20c33bcef6c_::__lambda_69e066523f5234eeae6ba20c33bcef6c_((__int64)(Block + 4));
  Block[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
