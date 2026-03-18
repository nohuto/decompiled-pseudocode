/*
 * XREFs of ??4?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCRenderingEffect@@@Z @ 0x18001A3E8
 * Callers:
 *     ?SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z @ 0x18001A2EC (-SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C2E84 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 (__fastcall ****__fastcall Microsoft::WRL::ComPtr<CRenderingEffect>::operator=(
        __int64 (__fastcall ****a1)(_QWORD),
        __int64 (__fastcall ***a2)(_QWORD)))(_QWORD)
{
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v5);
  }
  return a1;
}
