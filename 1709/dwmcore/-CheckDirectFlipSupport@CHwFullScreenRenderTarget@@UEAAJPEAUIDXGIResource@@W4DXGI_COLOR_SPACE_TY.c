/*
 * XREFs of ?CheckDirectFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@PEA_N@Z @ 0x1801B8510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckDirectFlipSupport(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2,
        __int64 a3,
        const struct tagRECT *a4,
        bool *a5)
{
  __m128i *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // xmm0_8
  signed int v8; // eax
  unsigned int v9; // ebx
  _QWORD v11[2]; // [rsp+40h] [rbp-28h] BYREF

  *a5 = 0;
  v5 = (__m128i *)*((_QWORD *)this + 3);
  v6 = *((_QWORD *)this + 5);
  v7 = _mm_srli_si128(v5[5], 8).m128i_u64[0];
  v11[0] = v5[5].m128i_i64[0];
  v11[1] = v7;
  v8 = (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *, __int64, const struct tagRECT *, _QWORD *, bool *))(*(_QWORD *)v6 + 88LL))(
         v6,
         a2,
         a3,
         a4,
         v11,
         a5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xE6u);
  return v9;
}
