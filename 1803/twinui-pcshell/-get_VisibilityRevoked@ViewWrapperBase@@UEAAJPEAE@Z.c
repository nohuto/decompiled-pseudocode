/*
 * XREFs of ?get_VisibilityRevoked@ViewWrapperBase@@UEAAJPEAE@Z @ 0x1801E7DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::get_VisibilityRevoked(ViewWrapperBase *this, bool *a2)
{
  RTL_SRWLOCK *v4; // rdi
  bool v5; // al

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 19) + 296LL);
  AcquireSRWLockShared(v4);
  v5 = (*((_BYTE *)this + 80) & 0x18) != 0 && (*((_BYTE *)this + 80) & 0x20) == 0;
  *a2 = v5;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
