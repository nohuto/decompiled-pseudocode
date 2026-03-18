/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x1800C671C
 * Callers:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800374DC (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x18007616C (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18007632C (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ReleaseInterfaceNoNULL<CBitmapRealization>(CBitmapRealization *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)CBitmapRealization::Release )
      CBitmapRealization::Release(a1);
    else
      v1();
  }
}
