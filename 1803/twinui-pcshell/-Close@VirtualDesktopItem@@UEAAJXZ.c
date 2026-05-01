/*
 * XREFs of ?Close@VirtualDesktopItem@@UEAAJXZ @ 0x180287370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopItem::Close(VirtualDesktopItem *this)
{
  __int64 v1; // rbx
  int v3; // ebx
  __int64 v4; // rbx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v1 + 64LL))(
         v1,
         *((_QWORD *)this + 3),
         6LL,
         &v10);
  if ( v3 == -2147316575 )
  {
    v4 = *((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 64LL))(
           v4,
           *((_QWORD *)this + 3),
           5LL,
           &v10);
  }
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 51LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitem.cpp",
      (const char *)v5);
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 88LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3),
         v10);
  v3 = v7;
  if ( v7 < 0 )
  {
    v5 = (unsigned int)v7;
    v6 = 52LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return (unsigned int)v3;
}
