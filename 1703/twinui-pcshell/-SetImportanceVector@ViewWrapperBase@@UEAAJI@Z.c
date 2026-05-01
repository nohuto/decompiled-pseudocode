/*
 * XREFs of ?SetImportanceVector@ViewWrapperBase@@UEAAJI@Z @ 0x180116960
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetImportanceVector(RTL_SRWLOCK **this, int a2)
{
  __int16 v2; // di
  __int16 v4; // cx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h]

  v2 = a2;
  v7 = a2;
  ViewEventDispatcher::AcquireLockExclusive(this[16], &SRWLock);
  if ( (~(*((_DWORD *)this + 102) >> 2) & 1) != 0 )
    v4 = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)*((_WORD *)this + 150)) & 0xF;
  else
    v4 = v7;
  if ( (~(*((_DWORD *)this + 102) >> 3) & 1) != 0 )
    v4 ^= ((unsigned __int8)v4 ^ (unsigned __int8)*((_WORD *)this + 150)) & 0x31;
  LOWORD(v7) = (v4 ^ *((_WORD *)this + 150)) & 0xC0 ^ v4;
  if ( v7 != *((_DWORD *)this + 75) )
  {
    *((_DWORD *)this + 75) = v7;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(this - 3));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
