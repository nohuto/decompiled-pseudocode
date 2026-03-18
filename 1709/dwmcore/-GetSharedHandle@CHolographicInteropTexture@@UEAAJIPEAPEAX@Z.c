/*
 * XREFs of ?GetSharedHandle@CHolographicInteropTexture@@UEAAJIPEAPEAX@Z @ 0x1801BE950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTexture::GetSharedHandle(RTL_SRWLOCK *this, unsigned int a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v5; // rbp
  unsigned int v7; // edi

  *a3 = 0LL;
  v3 = this + 28;
  v5 = a2;
  v7 = -2147467259;
  AcquireSRWLockShared(this + 28);
  if ( (unsigned int)v5 < LODWORD(this[8].Ptr) )
  {
    v7 = 0;
    *a3 = (void *)*((_QWORD *)this[5].Ptr + 12 * v5 + 1);
  }
  ReleaseSRWLockShared(v3);
  return v7;
}
