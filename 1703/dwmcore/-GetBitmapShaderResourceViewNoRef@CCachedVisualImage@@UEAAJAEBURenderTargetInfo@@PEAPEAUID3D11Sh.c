/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180165590
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 *     ??$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z @ 0x18004B1C0 (--$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapShaderResourceViewNoRef(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct ID3D11ShaderResourceView **a3)
{
  int v5; // eax
  CDxHandleYUVBitmapRealization *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  CDxHandleYUVBitmapRealization *v10; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmap((__int64)this - 80, *(_QWORD *)a2, *((_DWORD *)a2 + 2), &v10);
  v6 = v10;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FCF20, 1u, v5, 0x7E9u);
  }
  else if ( v10 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD *, const struct RenderTargetInfo *, struct ID3D11ShaderResourceView **))(*((_QWORD *)v10 + 13) + 120LL))(
           (_QWORD *)v10 + 13,
           a2,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801FCF20, 1u, v8, 0x7F2u);
  }
  ReleaseInterfaceNoNULL<CRenderTargetBitmap>(v6);
  return v7;
}
