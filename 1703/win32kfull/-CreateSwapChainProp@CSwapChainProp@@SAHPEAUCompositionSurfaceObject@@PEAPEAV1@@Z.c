/*
 * XREFs of ?CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0209740
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C02099AC (UserSetWindowedSwapChain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z @ 0x1C0209804 (-Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall CSwapChainProp::CreateSwapChainProp(struct CompositionSurfaceObject *a1, struct CSwapChainProp **a2)
{
  unsigned int v2; // edi
  struct CSwapChainProp *v5; // rax
  struct CSwapChainProp *v6; // rbx

  v2 = 0;
  *a2 = 0LL;
  v5 = (struct CSwapChainProp *)Win32AllocPoolZInit(32LL, 1668772693LL);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x20uLL);
    *(_QWORD *)v6 = &CSwapChainProp::`vftable';
    if ( (unsigned int)CSwapChainProp::Init(v6, a1) )
    {
      *a2 = v6;
      return 1;
    }
    else
    {
      (**(void (__fastcall ***)(struct CSwapChainProp *))v6)(v6);
    }
  }
  return v2;
}
