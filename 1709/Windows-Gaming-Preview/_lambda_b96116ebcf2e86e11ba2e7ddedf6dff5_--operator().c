/*
 * XREFs of _lambda_b96116ebcf2e86e11ba2e7ddedf6dff5_::operator() @ 0x18002ADDC
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_b96116ebcf2e86e11ba2e7ddedf6dff5____Windows::Internal::CNoResult_::Run @ 0x18002F9A0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_b96116ebcf2e86e.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x180036FAC (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b96116ebcf2e86e11ba2e7ddedf6dff5_::operator()(_QWORD *a1, HSTRING a2)
{
  HSTRING v3; // rbp
  HSTRING v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING v12; // [rsp+60h] [rbp+8h] BYREF
  HSTRING v13; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+70h] [rbp+18h]

  v13 = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v12 = v3;
  v4 = (HSTRING)a1[3];
  WindowsDeleteString(0LL);
  v13 = v4;
  v5 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 176LL);
  EnterCriticalSection(v5);
  v14 = v5;
  v6 = *a1;
  v7 = 0;
  if ( !*(_QWORD *)(v6 + 288) || !*(_QWORD *)(v6 + 296) )
  {
    v9 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    goto LABEL_8;
  }
  v8 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
         *(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)(v6 + 288),
         (const struct Microsoft::WRL::Wrappers::HString *)&v12,
         (const struct Microsoft::WRL::Wrappers::HString *)&v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x60B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v8);
LABEL_8:
    if ( v5 )
      LeaveCriticalSection(v5);
    v7 = v9;
    goto LABEL_11;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
LABEL_11:
  WindowsDeleteString(v4);
  WindowsDeleteString(v3);
  return v7;
}
