/*
 * XREFs of ?GetColorSpace@CRenderTargetBitmap@@UEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180016450
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetColorSpace(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 2);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  return result;
}
