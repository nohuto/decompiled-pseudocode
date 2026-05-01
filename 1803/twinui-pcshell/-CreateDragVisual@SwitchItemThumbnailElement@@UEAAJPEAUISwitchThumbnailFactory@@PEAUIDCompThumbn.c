/*
 * XREFs of ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x18029D070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x18029D458 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x18029D4A4 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::CreateDragVisual(
        SwitchItemThumbnailElement *this,
        struct ISwitchThumbnailFactory *a2,
        struct IDCompThumbnail *a3,
        struct tagRECT *a4,
        struct IUnknown **a5)
{
  __int64 v9; // rbx
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 OuterBorderInfo; // rsi
  __int64 InnerBorderInfo; // rax
  double v18; // xmm2_8
  unsigned __int64 v19; // xmm0_8
  __int64 *v21; // [rsp+50h] [rbp-31h] BYREF
  int v22[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v23[12]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v24[12]; // [rsp+6Ch] [rbp-15h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v21 = 0LL;
  *a5 = 0LL;
  v9 = *((_QWORD *)this + 38);
  v22[0] = a4->right - a4->left;
  v22[1] = a4->bottom - a4->top;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
  v11 = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, int *, _QWORD, GUID *, __int64 **))(*(_QWORD *)a2 + 64LL))(
          a2,
          a3,
          *v10,
          0x40000000LL,
          v22,
          0LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          &v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 362LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_10;
  }
  v14 = (__int64)v21;
  v15 = *v21;
  OuterBorderInfo = SwitchItemThumbnailElement::GetOuterBorderInfo((char *)this - 272, v23);
  InnerBorderInfo = SwitchItemThumbnailElement::GetInnerBorderInfo((char *)this - 272, v24);
  (*(void (__fastcall **)(__int64, __int64, __int64))(v15 + 208))(v14, InnerBorderInfo, OuterBorderInfo);
  v18 = *((double *)this - 5) - 1.0;
  rc = *a4;
  v19 = _mm_srli_si128((__m128i)rc, 8).m128i_u64[0];
  InflateRect(&rc, (int)((double)((int)v19 - rc.left) * v18 * 0.5), (int)((double)(HIDWORD(v19) - rc.top) * v18 * 0.5));
  v11 = (*(__int64 (__fastcall **)(__int64 *, struct tagRECT *, _QWORD, _QWORD))(*v21 + 24))(v21, &rc, 0LL, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 367LL;
    goto LABEL_9;
  }
  v11 = (*(__int64 (__fastcall **)(__int64 *, struct tagRECT *, __int64))(*v21 + 24))(v21, a4, 3LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 368LL;
    goto LABEL_9;
  }
  v11 = (*(__int64 (__fastcall **)(__int64 *, GUID *, struct IUnknown **))*v21)(
          v21,
          &GUID_00000000_0000_0000_c000_000000000046,
          a5);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 370LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return v12;
}
