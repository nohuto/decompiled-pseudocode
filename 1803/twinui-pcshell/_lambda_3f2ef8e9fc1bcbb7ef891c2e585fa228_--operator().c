/*
 * XREFs of _lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228_::operator() @ 0x180141344
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228___::Invoke @ 0x180141FD0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa22.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = *(_QWORD *)(*a1 + 200LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
         v4,
         5LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD))(*(_QWORD *)a2 + 24LL))(
             a2,
             v11,
             a1 + 1,
             a1[3]);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v7 = 236LL;
    }
    else
    {
      v7 = 234LL;
    }
  }
  else
  {
    v7 = 231LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
