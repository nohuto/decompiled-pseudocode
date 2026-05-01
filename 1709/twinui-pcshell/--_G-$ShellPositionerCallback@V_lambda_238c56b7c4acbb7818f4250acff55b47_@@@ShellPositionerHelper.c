/*
 * XREFs of ??_G?$ShellPositionerCallback@V_lambda_238c56b7c4acbb7818f4250acff55b47_@@@ShellPositionerHelpers@@UEAAPEAXI@Z @ 0x180081930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall ShellPositionerHelpers::ShellPositionerCallback<_lambda_238c56b7c4acbb7818f4250acff55b47_>::`scalar deleting destructor'(
        _DWORD *Block,
        char a2)
{
  __int64 v3; // rcx

  Block[13] = -1073741823;
  v3 = *((_QWORD *)Block + 5);
  if ( v3 )
  {
    *((_QWORD *)Block + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
