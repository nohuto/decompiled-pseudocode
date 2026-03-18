/*
 * XREFs of ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C004DF6C
 * Callers:
 *     NtFlipObjectQueryEndpointConnected @ 0x1C004F2E0 (NtFlipObjectQueryEndpointConnected.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall FlipManagerObject::IsEndpointConnected(FlipManagerObject *this, unsigned __int8 a2, bool *a3)
{
  int v6; // ebx

  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( v6 >= 0 )
  {
    *a3 = *((_QWORD *)this + (a2 ^ 1LL) + 8) != 0LL;
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 32));
  }
  return (unsigned int)v6;
}
