/*
 * XREFs of ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1801C60D8
 * Callers:
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801C5C50 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?ReadTexture@CColorKeyBitmap@@QEAAXXZ @ 0x180217064 (-ReadTexture@CColorKeyBitmap@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DebugInspectSysMemSurface(void *a1, int a2, int a3, enum DXGI_FORMAT a4, unsigned int a5)
{
  DebugInspectSysMemSurface_NoOpt((_DWORD)a1, a2, a3, a4, a5);
}
