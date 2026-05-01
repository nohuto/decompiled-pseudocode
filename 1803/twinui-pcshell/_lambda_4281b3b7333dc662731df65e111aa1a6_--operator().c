/*
 * XREFs of _lambda_4281b3b7333dc662731df65e111aa1a6_::operator() @ 0x18013A87C
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_4281b3b7333dc662731df65e111aa1a6_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x180139110 (--$LambdaEnumWindowsProc@V_lambda_4281b3b7333dc662731df65e111aa1a6_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18013E4E4 (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_4281b3b7333dc662731df65e111aa1a6_::operator()(__int64 a1, HWND a2)
{
  unsigned __int64 v4; // r15
  int *v5; // rax
  __int64 v6; // rbx
  CWinRTApplicationView *v7; // rbx
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned int v14; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+90h] [rbp+50h] BYREF
  CWinRTApplicationView *v16; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0LL;
  v5 = *(int **)a1;
  if ( **(int **)a1 < 0 )
    return *v5 >= 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( v4 >= *(_QWORD *)(v6 + 536) )
      return *v5 >= 0;
    v7 = *(CWinRTApplicationView **)(*(_QWORD *)(v6 + 528) + 8 * v4);
    v16 = v7;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v16);
    if ( IsEqualByHwnd(a2, v7) )
      break;
LABEL_12:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
    ++v4;
    v5 = *(int **)a1;
    if ( **(int **)a1 < 0 )
      return *v5 >= 0;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(***(_QWORD ***)(a1 + 16) + 24LL))(
         **(_QWORD **)(a1 + 16),
         &v14);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      173LL,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_11:
    **(_DWORD **)a1 = (*(__int64 (__fastcall **)(_QWORD, CWinRTApplicationView *))(***(_QWORD ***)(a1 + 16) + 40LL))(
                        **(_QWORD **)(a1 + 16),
                        v7);
    goto LABEL_12;
  }
  v9 = 0;
  if ( !v14 )
    goto LABEL_11;
  while ( 1 )
  {
    v15 = 0LL;
    v10 = **(_QWORD **)(a1 + 16);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v15);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v10 + 32LL))(
            v10,
            v9,
            &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
            &v15);
    if ( v11 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      178LL,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_10:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v15);
    if ( ++v9 >= v14 )
      goto LABEL_11;
  }
  if ( !(unsigned int)SHIsSameObject((struct IUnknown *)v7, v15) )
    goto LABEL_10;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v15);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  return 1LL;
}
