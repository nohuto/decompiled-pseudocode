/*
 * XREFs of ?ProcessCreate@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x180139CDC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18001B418 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F34 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::ProcessCreate(
        CPlaneCaptureRenderTargetEngine *this,
        struct CResourceTable *a2,
        const struct MILCMD_PLANECAPTURERENDERTARGET_CREATE *a3)
{
  enum DXGI_COLOR_SPACE_TYPE v4; // ecx
  char v5; // al
  __int64 v6; // r10
  int v7; // r9d
  bool v8; // cf
  __int64 v9; // r10
  __int64 v10; // rax
  signed int v11; // eax
  unsigned int v12; // ebx

  *((_DWORD *)this + 76) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 77) = *((_DWORD *)a3 + 3);
  *((_QWORD *)this + 43) = *((_QWORD *)a3 + 2);
  *((_DWORD *)this + 78) = *((_DWORD *)a3 + 6);
  v4 = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 80) = v4;
  *((_DWORD *)this + 88) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 89) = *((_DWORD *)a3 + 9);
  v5 = IsDXGIColorSpaceHDR(v4);
  *(_BYTE *)(v6 + 212) = v5 == 0;
  v8 = (unsigned int)HasAlphaChannel(v7) != 0;
  v10 = *(_QWORD *)(v9 + 16);
  *(_DWORD *)(v9 + 316) = v8 ? 1 : 3;
  v11 = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(v10 + 72), (struct CRenderTarget *)v9);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x34u);
  return v12;
}
