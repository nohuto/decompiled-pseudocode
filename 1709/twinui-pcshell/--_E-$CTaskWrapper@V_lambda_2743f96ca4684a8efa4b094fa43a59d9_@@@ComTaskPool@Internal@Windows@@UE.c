/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_2743f96ca4684a8efa4b094fa43a59d9_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800CFF70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2743f96ca4684a8efa4b094fa43a59d9_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)Block[3];
  if ( v4 )
    DeleteObject(v4);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
