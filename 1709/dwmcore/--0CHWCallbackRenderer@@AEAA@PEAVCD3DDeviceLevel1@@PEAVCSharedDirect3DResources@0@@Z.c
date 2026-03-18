/*
 * XREFs of ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x18001D0E0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x180046348 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

CHWCallbackRenderer *__fastcall CHWCallbackRenderer::CHWCallbackRenderer(
        CHWCallbackRenderer *this,
        struct CD3DDeviceLevel1 *a2,
        struct CHWCallbackRenderer::CSharedDirect3DResources *a3)
{
  _QWORD *v4; // rbx
  _OWORD *v5; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = -1;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 19) = 1065353216;
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v4 = (_QWORD *)((char *)this + 88);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v5 = operator new(0x10uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v4 = v5;
  *v5 = 0LL;
  *(_QWORD *)*v4 = v4;
  return this;
}
