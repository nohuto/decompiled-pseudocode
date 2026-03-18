/*
 * XREFs of ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D39E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D4154 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDeviceTexture(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  signed int v6; // eax
  unsigned int v7; // ebx
  signed int v8; // eax

  v6 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 144));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x10Fu);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*((_QWORD *)this + 30) + 144LL) + 144LL))(
           *((_QWORD *)this + 30) + 144LL,
           a2,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x110u);
  }
  return v7;
}
