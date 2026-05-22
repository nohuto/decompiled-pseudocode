/*
 * XREFs of ?GetProperties@MPCSharedWorldInputTarget@@UEAAJPEAPEAVPropertyMap@Input@@@Z @ 0x1800891B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSharedWorldInputTarget::GetProperties(
        MPCSharedWorldInputTarget *this,
        struct Input::PropertyMap **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  if ( !v2 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v10 = 0LL;
  v4 = (**v2)(v2, &GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78, &v10);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180089256LL);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, struct Input::PropertyMap **))(*(_QWORD *)v10 + 32LL))(v10, a2);
  v6 = v10;
  v7 = v5;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v7;
}
