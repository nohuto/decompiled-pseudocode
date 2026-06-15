/*
 * XREFs of ?GetSubmix@CProcessSubmixProxy@@UEAAJPEAPEAUISubmix@@@Z @ 0x180093D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::GetSubmix(CProcessSubmixProxy *this, struct ISubmix **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, struct ISubmix **); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  struct ISubmix *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISubmix *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct ISubmix **))*((_QWORD *)this + 5);
  v9 = 0LL;
  v4 = (**v2)(v2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9;
    if ( v9 )
    {
      *a2 = v9;
      (*(void (__fastcall **)(struct ISubmix *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      *a2 = 0LL;
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (__int64)"internal\\sdk\\inc\\wil/resultmacros.h",
      (const char *)(unsigned int)v4);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB5F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v5);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return v5;
}
