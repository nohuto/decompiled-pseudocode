/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x1802AA434
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1802AA038 (--$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMul.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801DB938 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall MultitaskingViewDragVisual::RuntimeClassInitialize(
        MultitaskingViewDragVisual *this,
        struct ISwitchThumbnailFactory *a2,
        struct IMultitaskingViewElement *a3,
        struct IMultitaskingViewElement *a4,
        const struct Geometry::CSize *a5,
        double a6)
{
  __int64 v10; // rbx
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  int v13; // eax
  _DWORD *v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // eax
  unsigned __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  int v24[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  int v26[2]; // [rsp+48h] [rbp-38h] BYREF
  int v27[2]; // [rsp+50h] [rbp-30h] BYREF
  int v28; // [rsp+58h] [rbp-28h] BYREF
  int v29; // [rsp+5Ch] [rbp-24h]
  int v30; // [rsp+60h] [rbp-20h]
  int v31; // [rsp+64h] [rbp-1Ch]
  __int64 v32; // [rsp+68h] [rbp-18h] BYREF
  int v33; // [rsp+70h] [rbp-10h]
  int v34; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v10 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, unsigned __int64 *))(*(_QWORD *)a3 + 40LL))(
                     a3,
                     &v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  if ( v10 )
  {
    *(_QWORD *)v26 = 0LL;
    v23 = 0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)a3 + 40LL))(
                      a3,
                      &v32);
    v11 = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, unsigned __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL))(
            a2,
            *v12,
            v23,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    if ( (v11 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
        (const char *)v11);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
      return v11;
    }
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v13 = (**(__int64 (__fastcall ***)(struct IMultitaskingViewElement *, GUID *, __int64 *))a4)(
            a4,
            &GUID_f8242c35_7f82_4b56_b5c8_37345206289d,
            &v25);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
        (const char *)(unsigned int)v13);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      goto LABEL_18;
    }
    v14 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 32LL))(v25, &v32);
    v15 = -*((_DWORD *)a5 + 1);
    v16 = v14[2] - *v14;
    v17 = v14[3] - v14[1];
    LODWORD(v14) = *(_DWORD *)a5;
    *(_QWORD *)v24 = 0LL;
    v28 = -(int)v14;
    v30 = v16 - (_DWORD)v14;
    v29 = v15;
    v31 = v17 + v15;
    v23 = __PAIR64__(v17, v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    v18 = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, unsigned __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL))(
            a2,
            *(_QWORD *)v26,
            v23,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            v24);
    v11 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(**(_QWORD **)v24 + 24LL))(
              *(_QWORD *)v24,
              &v28,
              0LL,
              0LL);
      v11 = v18;
      if ( v18 >= 0 )
      {
        *(_QWORD *)v27 = 0LL;
        v20 = v25;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)v27);
        v32 = 0LL;
        v33 = v30 - v28;
        v34 = v31 - v29;
        v21 = (*(__int64 (__fastcall **)(__int64, struct ISwitchThumbnailFactory *, _QWORD, __int64 *, int *))(*(_QWORD *)v20 + 24LL))(
                v20,
                a2,
                *(_QWORD *)v24,
                &v32,
                v27);
        v11 = v21;
        if ( v21 >= 0 )
        {
          *((_QWORD *)this + 6) = *(_QWORD *)a5;
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 3, (__int64 *)v26);
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 4, (__int64 *)v24);
          LODWORD(v23) = v30 - v28;
          HIDWORD(v23) = v31 - v29;
          *((_QWORD *)this + 7) = v23;
          Microsoft::WRL::ComPtr<IUnknown>::operator=((CWinRTApplicationView **)this + 5, (CWinRTApplicationView **)v27);
          *((double *)this + 10) = a6;
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a4);
          v11 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
            (const char *)(unsigned int)v21);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)v27);
        goto LABEL_16;
      }
      v19 = 69LL;
    }
    else
    {
      v19 = 68LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)v18);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    goto LABEL_17;
  }
  v11 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
    (const char *)0x8007139FLL);
  return v11;
}
