/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B8BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetMultiplaneOverlayPresentInfo(
        CHwFullScreenRenderTarget *this,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  signed int v12; // eax

  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 24) + 32LL))((char *)this - 192) )
  {
    LOBYTE(v11) = a2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const void *, unsigned int, struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *))(**((_QWORD **)this + 5) + 200LL))(
            *((_QWORD *)this + 5),
            v11,
            a3,
            a4,
            a5,
            a6);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x196u);
  }
  return v10;
}
