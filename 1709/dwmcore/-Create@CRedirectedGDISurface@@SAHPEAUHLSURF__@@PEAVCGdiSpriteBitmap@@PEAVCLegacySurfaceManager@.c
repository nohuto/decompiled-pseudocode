/*
 * XREFs of ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18007F070
 * Callers:
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x18009E360 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x18007F3EC (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRedirectedGDISurface::Create(
        HLSURF a1,
        struct CGdiSpriteBitmap *a2,
        struct CLegacySurfaceManager *a3,
        struct CRedirectedGDISurface **a4)
{
  volatile signed __int32 *v8; // rax
  CMILRefCountBase *v9; // rbx
  signed int v10; // eax
  unsigned int v11; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (volatile signed __int32 *)WPF::ProcessHeapImpl::AllocClear(0x30uLL);
  v9 = (CMILRefCountBase *)v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_QWORD *)v8 + 2) = a3;
  *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v8 = &CRedirectedGDISurface::`vftable';
  *((_DWORD *)v8 + 2) = 0;
  _InterlockedIncrement(v8 + 2);
  v10 = CRedirectedGDISurface::Initialize((CRedirectedGDISurface *)v8, a1, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1Bu);
    CMILRefCountBase::Release(v9);
  }
  else
  {
    *a4 = v9;
  }
  return v11;
}
