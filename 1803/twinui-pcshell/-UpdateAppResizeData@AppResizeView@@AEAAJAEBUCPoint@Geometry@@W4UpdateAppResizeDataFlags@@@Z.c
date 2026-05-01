/*
 * XREFs of ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x1802E0860
 * Callers:
 *     ?OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802DF980 (-OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1802DF9F0 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 *     ?OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1802DFA70 (-OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1802DF520 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x1802E0A48 (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 */

__int64 __fastcall AppResizeView::UpdateAppResizeData(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  int v7; // eax
  unsigned int v8; // esi
  char v10; // cl
  int inited; // eax
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // eax
  bool v15; // cc
  int v16; // ebp
  __int64 v17; // rcx
  int updated; // eax
  unsigned int v19; // edi
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h] BYREF
  int v22; // [rsp+48h] [rbp-40h]
  _DWORD v23[6]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = 2;
  if ( (a3 & 2) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64));
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  v10 = 1;
  if ( (a3 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 48LL))(*(_QWORD *)(a1 + 64));
    inited = AppResizeView::InitAppResizeData((AppResizeView *)a1, (const struct Geometry::CPoint *)a2);
    v12 = inited;
    if ( inited < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CF,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)inited);
      return v12;
    }
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 108) - 1;
    if ( v13 >= *(_DWORD *)a2 )
      v13 = *(_DWORD *)a2;
    if ( *(_DWORD *)(a1 + 100) > v13 )
      v13 = *(_DWORD *)(a1 + 100);
    v14 = *(_DWORD *)(a1 + 112) - 1;
    v15 = v14 < *(_DWORD *)(a2 + 4);
    LODWORD(v20) = v13;
    if ( !v15 )
      v14 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a1 + 104) > v14 )
      v14 = *(_DWORD *)(a1 + 104);
    HIDWORD(v20) = v14;
    v16 = a3 & 4;
    if ( v16 )
      goto LABEL_20;
    if ( v13 == *(_DWORD *)(a1 + 140) && v14 == *(_DWORD *)(a1 + 144) )
      v10 = 0;
    if ( v10 )
    {
LABEL_20:
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 64) + 32LL))(*(_QWORD *)(a1 + 64), v23);
      v17 = *(_QWORD *)(a1 + 64);
      v22 = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      (*(void (__fastcall **)(__int64, __int64 *, __m128i *))(*(_QWORD *)v17 + 24LL))(v17, &v20, &si128);
      if ( v16 || si128.m128i_i32[0] != v23[0] || ((si128.m128i_i32[0] - 2) & 0xFFFFFFFD) == 0 )
        v3 = 3;
      updated = AppResizeView::UpdateDropFeedback(
                  a1,
                  v23[0],
                  si128.m128i_u32[0],
                  &v20,
                  (v23[0] != si128.m128i_i32[0] ? 4 : 0) | (unsigned int)v3);
      v19 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
          (const char *)(unsigned int)updated);
        return v19;
      }
      *(_QWORD *)(a1 + 140) = v20;
    }
  }
  return 0LL;
}
