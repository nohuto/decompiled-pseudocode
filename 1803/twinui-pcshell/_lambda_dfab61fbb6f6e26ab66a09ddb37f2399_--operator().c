/*
 * XREFs of _lambda_dfab61fbb6f6e26ab66a09ddb37f2399_::operator() @ 0x1801A3250
 * Callers:
 *     ?SetLocalOnly@TaskFlowImmersiveShellBroker@@UEAAJE@Z @ 0x1801A6AA0 (-SetLocalOnly@TaskFlowImmersiveShellBroker@@UEAAJE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_dfab61fbb6f6e26ab66a09ddb37f2399_::operator()(_BYTE **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)*a1 + 50) == 1 )
  {
    v3 = *((_QWORD *)*a1 + 32);
    v8 = v3;
    if ( v3
      && ((*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3),
          LOBYTE(v4) = *a1[1],
          v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, v4),
          v2 = v5,
          v5 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C8,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v2 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  else
  {
    v2 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C3,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
  }
  return v2;
}
