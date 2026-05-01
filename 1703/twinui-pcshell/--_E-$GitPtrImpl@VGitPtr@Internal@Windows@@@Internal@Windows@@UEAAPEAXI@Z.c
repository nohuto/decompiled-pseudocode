/*
 * XREFs of ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x180070950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180244F80 + 32LL))(qword_180244F80);
    Block[2] = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
