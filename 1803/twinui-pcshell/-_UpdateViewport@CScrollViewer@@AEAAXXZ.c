/*
 * XREFs of ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x1802A336C
 * Callers:
 *     ?UpdateViewport@CScrollViewer@@UEAAXXZ @ 0x1802A2DF0 (-UpdateViewport@CScrollViewer@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x1802A35E0 (-v_LayoutChildren@CScrollViewer@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z @ 0x1802A1F08 (--$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1802A2F10 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 */

void __fastcall CScrollViewer::_UpdateViewport(CScrollViewer *this)
{
  char *v1; // rsi
  DOUBLE v3; // xmm6_8
  __int64 v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  char v7; // di
  _QWORD *v8; // rax
  int v9; // eax
  char v10; // di
  DOUBLE v11; // xmm0_8
  int v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  __m128i v14; // [rsp+40h] [rbp-40h] BYREF
  __m128i v15; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v1 = (char *)this + 208;
  v3 = (*(double (__fastcall **)(char *))(*((_QWORD *)this + 26) + 56LL))((char *)this + 208);
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 31) + 32LL))(*((_QWORD *)this + 31), &v15);
  v4 = *(_QWORD *)this;
  LOBYTE(v12) = 1;
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(v4 + 384))(this, &v13);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, CScrollViewer *, __m128i *, int *))(*(_QWORD *)*v5 + 64LL))(
         *v5,
         2LL,
         this,
         &v15,
         &v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      366LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v6);
LABEL_3:
    v7 = 1;
    goto LABEL_4;
  }
  if ( (_BYTE)v12 )
    goto LABEL_3;
  v7 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD))(**((_QWORD **)this + 29) + 40LL))(
      *((_QWORD *)this + 29),
      &v15,
      0LL,
      0LL);
  if ( *((_QWORD *)this + 30) )
  {
    v14 = v15;
    v14.m128i_i32[0] = _mm_cvtsi128_si32(v15) - *((_DWORD *)this + 68);
    v14.m128i_i32[1] = v15.m128i_i32[1] - *((_DWORD *)this + 70);
    v14.m128i_i32[2] = *((_DWORD *)this + 69) + v15.m128i_i32[2];
    v14.m128i_i32[3] = *((_DWORD *)this + 71) + v15.m128i_i32[3];
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)this + 384LL))(this, &v13);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, CScrollViewer *, __m128i *, int *))(*(_QWORD *)*v8 + 56LL))(
           *v8,
           4LL,
           this,
           &v14,
           &v12);
    if ( v9 >= 0 )
    {
      if ( !(_BYTE)v12 )
      {
        v10 = 0;
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        if ( v10 )
          (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 24LL))(
            *((_QWORD *)this + 30),
            &v14,
            0LL,
            0LL);
        goto LABEL_12;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        381LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
        (const char *)(unsigned int)v9);
    }
    v10 = 1;
    goto LABEL_10;
  }
LABEL_12:
  v11 = (*(double (__fastcall **)(char *))(*(_QWORD *)v1 + 56LL))(v1);
  ElementHelpers::SendUiaPropertyEvent<double>((__int64)this, 30056, v3, v11);
  CScrollViewer::_ApplyScroll(this, *((_DWORD *)this + 64), 1);
}
