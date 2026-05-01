/*
 * XREFs of ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1802A2B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1802A2F10 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1802A32F4 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall CScrollViewer::ScrollIntoView(CScrollViewer *this, struct IMultitaskingViewElement *a2)
{
  __int64 (__fastcall *v4)(__m128i *, _BYTE *); // rdi
  __m128i *v5; // rbx
  int *v6; // rax
  __m128i v7; // xmm0
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 VisibleRect; // rax
  __int64 v13; // r8
  int v14; // edx
  _BYTE v15[8]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-38h] BYREF
  __m128i v17; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-20h] BYREF

  v4 = (__int64 (__fastcall *)(__m128i *, _BYTE *))Geometry::CRect::GetVerticalSegment;
  if ( (*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 96LL))(this) )
    v4 = (__int64 (__fastcall *)(__m128i *, _BYTE *))Geometry::CRect::GetHorizontalSegment;
  v5 = (__m128i *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, _BYTE *))(*(_QWORD *)a2 + 96LL))(
                    a2,
                    v18);
  v6 = (int *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this - 26) + 120LL))((char *)this - 208, v16);
  v17 = *v5;
  v7 = v17;
  v8 = *v6;
  v9 = -v6[1];
  v17.m128i_i32[3] -= v6[1];
  v10 = -v8;
  v17.m128i_i32[2] += v10;
  v17.m128i_i32[1] += v9;
  v17.m128i_i32[0] = v10 + _mm_cvtsi128_si32(v7);
  v11 = *(_QWORD *)v4(&v17, v15);
  VisibleRect = CScrollViewer::_GetVisibleRect((char *)this - 208);
  v13 = *(_QWORD *)v4((__m128i *)VisibleRect, v15);
  if ( (int)v11 < (int)v13 || SHIDWORD(v11) > SHIDWORD(v13) )
  {
    if ( SHIDWORD(v11) <= SHIDWORD(v13) )
    {
      if ( (int)v11 >= (int)v13 )
        return;
      v14 = v13 + *((_DWORD *)this + 12) - v11;
    }
    else
    {
      v14 = HIDWORD(v13) + *((_DWORD *)this + 12) - HIDWORD(v11);
    }
    CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), v14, 0);
  }
}
