/*
 * XREFs of ??1?$ComPtr@UID3D11DepthStencilState@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3690
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>(void *a1)
{
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(a1);
}
