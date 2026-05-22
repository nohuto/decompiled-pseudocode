/*
 * XREFs of ?OnProxyCreated@InputServiceProxy@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800ADFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::OnProxyCreated(InputServiceProxy *this, struct IMessageProxy *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 24);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v6 = (**(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
         v2);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xD1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\inputservice\\lib\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\inputservice\\lib\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x1800AE059LL);
  }
  return 0LL;
}
