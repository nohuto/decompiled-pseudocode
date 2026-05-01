/*
 * XREFs of _lambda_4724f0c1a94bf07b6b72cce17a0d0b5c_::operator() @ 0x18002BB10
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_4724f0c1a94bf07b6b72cce17a0d0b5c____Windows::Internal::CNoResult_::Run @ 0x1800309D0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_4724f0c1a94bf07.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x180037E04 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_4724f0c1a94bf07b6b72cce17a0d0b5c_::operator()(_QWORD *a1, HSTRING a2)
{
  HSTRING v3; // rbp
  HSTRING v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // esi
  __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING v13; // [rsp+60h] [rbp+8h] BYREF
  HSTRING v14; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+70h] [rbp+18h]

  v14 = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v13 = v3;
  v4 = (HSTRING)a1[3];
  WindowsDeleteString(0LL);
  v14 = v4;
  v5 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 168LL);
  EnterCriticalSection(v5);
  v15 = v5;
  v6 = *a1;
  v7 = 0;
  if ( !*(_QWORD *)(v6 + 280) || !*(_QWORD *)(v6 + 288) )
  {
    v9 = -2147024891;
    v10 = 2147942405LL;
    goto LABEL_8;
  }
  v8 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
         *(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)(v6 + 280),
         (const struct Microsoft::WRL::Wrappers::HString *)&v13,
         (const struct Microsoft::WRL::Wrappers::HString *)&v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FB,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v10);
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
