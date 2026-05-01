/*
 * XREFs of MapScenarioToErrorCodeForView @ 0x1801DD1F0
 * Callers:
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1801DBE80 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MapScenarioToErrorCodeForView(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = -2144927437;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        v3 = -2144927438;
    }
    else
    {
      v3 = -2144927439;
    }
  }
  else
  {
    v3 = -2144927440;
  }
  v9 = 0LL;
  v5 = MsgStringCreateShared(L"ValidationError", 0xFFFFFFFFLL, &v9);
  v6 = retaddr;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 672LL))(a1, v9, v3);
    v6 = retaddr;
    if ( v5 >= 0 )
      goto LABEL_12;
    v7 = 149LL;
  }
  else
  {
    v7 = 147LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v6,
    v7,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v5);
LABEL_12:
  if ( v9 )
    MsgRelease(v9);
}
