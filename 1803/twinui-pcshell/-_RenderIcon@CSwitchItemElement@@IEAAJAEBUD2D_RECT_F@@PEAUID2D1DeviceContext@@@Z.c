/*
 * XREFs of ?_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1802894D0
 * Callers:
 *     _lambda_a818a4d1196700db3f726f95e02b7ab7_::operator() @ 0x1802881E0 (_lambda_a818a4d1196700db3f726f95e02b7ab7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwitchItemElement::_RenderIcon(
        CSwitchItemElement *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1DeviceContext *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 32LL))(*((_QWORD *)this + 73));
  v11 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, __int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 40LL))(
           a3,
           v5,
           0LL,
           &v10);
    v7 = v6;
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(struct ID2D1DeviceContext *, __int64, const struct D2D_RECT_F *))(*(_QWORD *)a3 + 208LL))(
        a3,
        v10,
        a2);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F2,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  else
  {
    v7 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v7;
}
