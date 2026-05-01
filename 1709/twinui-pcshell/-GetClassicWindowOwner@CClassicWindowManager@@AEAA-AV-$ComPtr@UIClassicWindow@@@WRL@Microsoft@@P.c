/*
 * XREFs of ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180036D8C
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180036160 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180036EA0 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180037690 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 * Callees:
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct IClassicWindow **__fastcall CClassicWindowManager::GetClassicWindowOwner(
        CClassicWindowManager *this,
        struct IClassicWindow **a2,
        HWND a3)
{
  HWND i; // rcx
  struct IClassicWindow *v7; // rdx
  struct IClassicWindow *v8; // rsi
  struct IClassicWindow *v9; // rcx
  HWND Window; // rax
  HWND v11; // rdi
  struct IClassicWindow *v13; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  *a2 = 0LL;
  for ( i = a3; ; i = v11 )
  {
    Window = GetWindow(i, 4u);
    v11 = Window;
    if ( !Window || Window == a3 || *a2 )
      break;
    if ( !IsWindowVisible(Window) )
      continue;
    v13 = 0LL;
    if ( (int)CClassicWindowManager::_FindClassicWindow(this, v11, &v13, &v14) >= 0
      && (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v13 + 128LL))(v13) )
    {
      v7 = v13;
      if ( *a2 == v13 )
        goto LABEL_13;
      v8 = v13;
      if ( v13 )
      {
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v13 + 8LL))(v13);
        v7 = v13;
      }
      v9 = *a2;
      *a2 = v8;
      if ( !v9 )
        goto LABEL_13;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v7 = v13;
LABEL_13:
    if ( v7 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return a2;
}
