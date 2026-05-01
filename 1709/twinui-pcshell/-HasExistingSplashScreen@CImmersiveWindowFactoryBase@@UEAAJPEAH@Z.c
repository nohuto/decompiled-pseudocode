/*
 * XREFs of ?HasExistingSplashScreen@CImmersiveWindowFactoryBase@@UEAAJPEAH@Z @ 0x1801DFD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::HasExistingSplashScreen(CImmersiveWindowFactoryBase *this, int *a2)
{
  *a2 = *((_QWORD *)this + 12) != 0LL;
  return 0LL;
}
