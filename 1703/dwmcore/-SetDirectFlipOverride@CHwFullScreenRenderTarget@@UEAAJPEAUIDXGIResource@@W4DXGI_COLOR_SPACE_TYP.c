/*
 * XREFs of ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@@Z @ 0x1801A1040
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18001FC90 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetDirectFlipOverride(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __m128i *v8; // rax
  unsigned __int64 v9; // xmm0_8
  int v10; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    v8 = (__m128i *)*((_QWORD *)this + 3);
    v9 = _mm_srli_si128(v8[5], 8).m128i_u64[0];
    v12[0] = v8[5].m128i_i64[0];
    v12[1] = v9;
    v10 = (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *, __int64, const struct tagRECT *, _QWORD *))(*(_QWORD *)v6 + 96LL))(
            v6,
            a2,
            a3,
            a4,
            v12);
    v5 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1FDu);
    else
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 22, (__int64)a2);
  }
  return v5;
}
