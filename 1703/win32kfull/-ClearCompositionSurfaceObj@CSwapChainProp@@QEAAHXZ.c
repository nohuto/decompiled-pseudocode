/*
 * XREFs of ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0209704
 * Callers:
 *     ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C02097E0 (-Delete@CSwapChainProp@@UEAAXXZ.c)
 *     UserRemoveWindowedSwapChain @ 0x1C02098D0 (UserRemoveWindowedSwapChain.c)
 *     UserSetWindowedSwapChain @ 0x1C02099AC (UserSetWindowedSwapChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::ClearCompositionSurfaceObj(CSwapChainProp *this)
{
  unsigned int v2; // ebx
  CompositionObject *v3; // rcx

  v2 = 0;
  v3 = (CompositionObject *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    CompositionObject::Release(v3);
    *((_QWORD *)this + 2) = 0LL;
    return 1;
  }
  return v2;
}
