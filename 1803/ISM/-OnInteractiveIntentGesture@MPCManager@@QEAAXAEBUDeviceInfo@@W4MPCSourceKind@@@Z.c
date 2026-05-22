/*
 * XREFs of ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005288C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z @ 0x18003BA6C (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180093E20 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCManager::OnInteractiveIntentGesture(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rdi
  __int64 *j; // rbx
  int v7; // eax
  __int64 **v8; // rax
  __int64 *v9; // rcx
  __int64 *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(__int64 **)(a1 + 64);
  j = (__int64 *)*v3;
  while ( j != v3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)j[5] + 24LL))(j[5], a2, a3);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v7);
    if ( !*((_BYTE *)j + 25) )
    {
      v8 = (__int64 **)j[2];
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v9 = *v8;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
          j = v9;
      }
    }
  }
}
