/*
 * XREFs of ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x180073540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  int v3; // edx

  v3 = Block[2];
  *(_QWORD *)Block = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  if ( v3 )
  {
    if ( (int)Block[3] >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1802BAD70 + 32LL))(qword_1802BAD70);
    Block[2] = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
