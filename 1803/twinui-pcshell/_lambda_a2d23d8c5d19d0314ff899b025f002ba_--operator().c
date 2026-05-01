/*
 * XREFs of _lambda_a2d23d8c5d19d0314ff899b025f002ba_::operator() @ 0x18007DD20
 * Callers:
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18007AC60 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a2d23d8c5d19d0314ff899b025f002ba_::operator()(_QWORD **a1)
{
  int v2; // ebx
  __int64 v3; // rbx
  int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v10; // [rsp+60h] [rbp+20h] BYREF
  int v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)**a1 + 48LL))(**a1, &v10);
  if ( v2 < 0 )
  {
    v6 = 262LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v2,
      v8);
    return (unsigned int)v2;
  }
  if ( !v10 )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)**a1 + 40LL))(**a1, &v13);
  if ( v2 < 0 )
  {
    v6 = 266LL;
    goto LABEL_10;
  }
  v12 = 0LL;
  v3 = a1[1][9];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, SID *, GUID *))(*(_QWORD *)v3 + 72LL))(
         v3,
         v13,
         &SID_EdgeUi,
         &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
  v2 = v4;
  if ( v4 < 0 )
  {
    v7 = 268LL;
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 80LL))(v12, &v11);
    v2 = v4;
    if ( v4 >= 0 )
    {
      *(_BYTE *)a1[2] = v11 != -1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      return 0LL;
    }
    v7 = 270LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
    (const char *)(unsigned int)v4,
    (int)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)v2;
}
