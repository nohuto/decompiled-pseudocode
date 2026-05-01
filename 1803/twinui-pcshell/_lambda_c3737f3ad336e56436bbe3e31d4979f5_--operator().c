/*
 * XREFs of _lambda_c3737f3ad336e56436bbe3e31d4979f5_::operator() @ 0x18014FA0C
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_c3737f3ad336e56436bbe3e31d4979f5___::Invoke @ 0x180150480 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_c3737f3ad336e56436bbe3e31d4979f.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c3737f3ad336e56436bbe3e31d4979f5_::operator()(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (**a2)(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v8) < 0
    || (**(_BYTE **)(a1 + 8) = 1,
        v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, *(_QWORD *)a1),
        v5 = v4,
        v4 >= 0) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v5;
}
