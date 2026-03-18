/*
 * XREFs of ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@XZ @ 0x18011C52C
 * Callers:
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x1801D8220 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct ID3D11ShaderResourceView *__fastcall CDrawListBitmap::GetShaderResourceView(CDrawListBitmap *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    return (struct ID3D11ShaderResourceView *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  else
    return 0LL;
}
