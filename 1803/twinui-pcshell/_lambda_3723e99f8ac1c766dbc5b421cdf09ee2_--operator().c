/*
 * XREFs of _lambda_3723e99f8ac1c766dbc5b421cdf09ee2_::operator() @ 0x1802B3A80
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___::Run @ 0x1802B3F60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3723e99f8ac1c766dbc5b421cdf09ee2_::operator()(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // edi
  __int64 v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 24LL))(*a1, &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v9 = 0LL;
      v6 = *a1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
             v6,
             i,
             &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
             &v9) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, a1[2], *((unsigned int *)a1 + 2));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
