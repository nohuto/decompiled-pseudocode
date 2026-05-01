/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801775F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_::__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_ @ 0x180176110 (_lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_--__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_::__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
