/*
 * XREFs of ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBUtagRECT@@@Z @ 0x1801B8AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800BC4E8 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetDirectFlipOverride(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        const struct tagRECT *a6)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __m128i *v10; // rax
  unsigned __int64 v11; // xmm0_8
  signed int v12; // eax
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = *((_QWORD *)this + 5);
  v8 = 0;
  if ( v7 )
  {
    v10 = (__m128i *)*((_QWORD *)this + 3);
    v11 = _mm_srli_si128(v10[5], 8).m128i_u64[0];
    v14[0] = v10[5].m128i_i64[0];
    v14[1] = v11;
    v12 = (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *, __int64, __int64, const void *, const struct tagRECT *, _QWORD *))(*(_QWORD *)v7 + 96LL))(
            v7,
            a2,
            a3,
            a4,
            a5,
            a6,
            v14);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x104u);
    else
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 44, (__int64)a2);
  }
  return v8;
}
