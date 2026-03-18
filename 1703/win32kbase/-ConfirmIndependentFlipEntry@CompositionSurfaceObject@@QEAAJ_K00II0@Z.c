/*
 * XREFs of ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C0152B90
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0005E24 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00112A0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C0151290 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::ConfirmIndependentFlipEntry(
        CompositionSurfaceObject *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  int v11; // ebx

  v11 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 32));
  if ( v11 >= 0 )
  {
    CCompositionSurface::ConfirmIndependentFlipEntry(
      (CompositionSurfaceObject *)((char *)this + 24),
      a2,
      a3,
      a4,
      a5,
      a6,
      a7);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)v11;
}
