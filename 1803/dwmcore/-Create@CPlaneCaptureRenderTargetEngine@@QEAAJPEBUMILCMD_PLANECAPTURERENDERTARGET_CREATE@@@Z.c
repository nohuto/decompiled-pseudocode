/*
 * XREFs of ?Create@CPlaneCaptureRenderTargetEngine@@QEAAJPEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x18015B638
 * Callers:
 *     ?ProcessCreate@CPlaneCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x18015C0C8 (-ProcessCreate@CPlaneCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDER.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B694C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::Create(
        CPlaneCaptureRenderTargetEngine *this,
        const struct MILCMD_PLANECAPTURERENDERTARGET_CREATE *a2)
{
  enum DXGI_COLOR_SPACE_TYPE v3; // ecx
  char v4; // al
  __int64 v5; // r9
  int v6; // r8d
  int v7; // eax
  _DWORD *v8; // r9
  int v9; // eax
  unsigned int v10; // ebx

  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 3);
  *((_QWORD *)this + 50) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 6);
  v3 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 94) = v3;
  *((_DWORD *)this + 102) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 103) = *((_DWORD *)a2 + 9);
  v4 = IsDXGIColorSpaceHDR(v3);
  *(_BYTE *)(v5 + 268) = v4 == 0;
  v7 = HasAlphaChannel(v6);
  v8[93] = v7 != 0 ? 1 : 3;
  v9 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 40LL))(v8);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x35u);
  return v10;
}
