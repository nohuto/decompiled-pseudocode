/*
 * XREFs of _lambda_4961db4a7d0ddaf4082e4af01c6297c2_::operator() @ 0x18009CA7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4961db4a7d0ddaf4082e4af01c6297c2__&___ptr64_::Run @ 0x18009CEB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4961db4a7d0ddaf4082e4af01c6297c2__-___ptr64.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4961db4a7d0ddaf4082e4af01c6297c2_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 144LL))(v1, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 7990LL;
  }
  else
  {
    v4 = 7989LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v3;
}
