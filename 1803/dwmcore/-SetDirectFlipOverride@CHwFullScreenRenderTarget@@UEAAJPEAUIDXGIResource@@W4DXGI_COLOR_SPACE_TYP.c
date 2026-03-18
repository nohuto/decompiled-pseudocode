/*
 * XREFs of ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBUtagRECT@@@Z @ 0x1801F2280
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800C2B58 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rax
  unsigned __int64 v11; // xmm0_8
  int v12; // eax
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = *((_QWORD *)this + 4);
  v8 = 0;
  if ( v7 )
  {
    v10 = *((_QWORD *)this + 3);
    v11 = _mm_srli_si128(*(__m128i *)(v10 + 104), 8).m128i_u64[0];
    v14[0] = *(_QWORD *)(v10 + 104);
    v14[1] = v11;
    v12 = (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *, __int64, __int64, const void *, const struct tagRECT *, _QWORD *))(*(_QWORD *)v7 + 104LL))(
            v7,
            a2,
            a3,
            a4,
            a5,
            a6,
            v14);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x14Au);
    else
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 46, (__int64)a2);
  }
  return v8;
}
