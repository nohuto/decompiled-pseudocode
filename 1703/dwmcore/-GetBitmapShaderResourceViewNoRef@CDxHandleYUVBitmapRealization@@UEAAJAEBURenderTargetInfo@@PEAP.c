/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B6B50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B73E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetBitmapShaderResourceViewNoRef(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID3D11ShaderResourceView **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  *a3 = 0LL;
  v6 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 104));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x11Eu);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct ID3D11ShaderResourceView **))(*(_QWORD *)(*((_QWORD *)this + 31) + 104LL) + 120LL))(
           *((_QWORD *)this + 31) + 104LL,
           a2,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x121u);
  }
  return v7;
}
