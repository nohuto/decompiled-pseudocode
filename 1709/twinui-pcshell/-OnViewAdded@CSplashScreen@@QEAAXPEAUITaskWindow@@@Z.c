/*
 * XREFs of ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180072024
 * Callers:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18005B550 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 * Callees:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18007297C (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     ??$emplace_back@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x180072E04 (--$emplace_back@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@@@WRL@M.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnViewAdded(CSplashScreen *this, struct ITaskWindow *a2)
{
  const char *v4; // r9
  __int64 v5; // rdx
  struct ITaskWindow *v6; // rcx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct ITaskWindow *v9; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v9 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::emplace_back<Microsoft::WRL::ComPtr<ITaskWindow>>(
      (char *)this + 104,
      &v9);
    if ( v9 )
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( *((_BYTE *)this + 136) && !*((_BYTE *)this + 137) )
    {
      v9 = 0LL;
      if ( (*(int (__fastcall **)(struct ITaskWindow *, GUID *, struct ITaskWindow **))(*(_QWORD *)a2 + 40LL))(
             a2,
             &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67,
             &v9) >= 0 )
      {
        CSplashScreen::_get_ImageLocationInternal(this, &v7);
        (*(void (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)v9 + 48LL))(v9, &v7);
        LOBYTE(v5) = 1;
        (*(void (__fastcall **)(struct ITaskWindow *, __int64))(*(_QWORD *)v9 + 56LL))(v9, v5);
      }
      v6 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x37,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
      v4);
  }
}
