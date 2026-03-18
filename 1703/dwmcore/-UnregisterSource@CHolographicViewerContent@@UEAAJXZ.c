/*
 * XREFs of ?UnregisterSource@CHolographicViewerContent@@UEAAJXZ @ 0x1801A58F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSourceLocked@CHolographicViewerContent@@AEAAJXZ @ 0x1801A592C (-UnregisterSourceLocked@CHolographicViewerContent@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicViewerContent::UnregisterSource(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v2; // rdi

  v1 = this + 10;
  v2 = this;
  AcquireSRWLockExclusive(this + 10);
  LODWORD(v2) = CHolographicViewerContent::UnregisterSourceLocked((CHolographicViewerContent *)&v2[-7]);
  ReleaseSRWLockExclusive(v1);
  return (unsigned int)v2;
}
