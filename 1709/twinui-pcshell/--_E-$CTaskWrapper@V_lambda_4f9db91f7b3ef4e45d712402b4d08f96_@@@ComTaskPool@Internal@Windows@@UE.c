/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_4f9db91f7b3ef4e45d712402b4d08f96_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180117E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_4f9db91f7b3ef4e45d712402b4d08f96_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)Block[4];
  if ( v4 )
  {
    CoTaskMemFree(v4);
    Block[4] = 0LL;
  }
  Block[5] = 0LL;
  Block[6] = 0LL;
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
