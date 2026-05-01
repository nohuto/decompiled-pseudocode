/*
 * XREFs of ?ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802BC520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802BDA74 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SurfaceHubPositioner::ControlGained(__int64 a1, __int64 a2)
{
  char result; // al
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v7; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 440)
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          334LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)0x8000FFFFLL),
        (result = *(_BYTE *)(a1 + 440)) != 0) )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
    (*(void (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)a2 + 32LL))(
      a2,
      0LL,
      &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
      &v7);
    v5 = SurfaceHubPositioner::_SetDefaultLayout((SurfaceHubPositioner *)(a1 - 112), v7, 1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        342LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v5);
    return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  }
  return result;
}
