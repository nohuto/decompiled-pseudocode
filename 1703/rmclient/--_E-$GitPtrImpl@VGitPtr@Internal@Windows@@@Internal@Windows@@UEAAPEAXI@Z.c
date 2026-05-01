/*
 * XREFs of ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x18000AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000728C (--3@YAXPEAX@Z.c)
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x18000A108 (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 */

_DWORD *__fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  bool v2; // zf

  v2 = Block[2] == 0;
  *(_QWORD *)Block = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  if ( !v2 )
    Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
