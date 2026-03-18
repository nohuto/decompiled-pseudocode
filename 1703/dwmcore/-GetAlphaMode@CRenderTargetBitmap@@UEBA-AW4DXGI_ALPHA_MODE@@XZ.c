/*
 * XREFs of ?GetAlphaMode@CRenderTargetBitmap@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180016480
 * Callers:
 *     ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x180016710 (-IsOpaque@CRenderTargetImageSource@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetAlphaMode(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 2);
  result = 3LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  return result;
}
