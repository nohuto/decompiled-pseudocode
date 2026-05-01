/*
 * XREFs of ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x180037D80
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180038CC8 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicWindowForActivation(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        HWND *a3)
{
  CClassicWindowManager *v5; // r14
  int LastActiveClassicWindowWithValidation; // edi
  struct IClassicWindow *v7; // rbx
  int v9; // [rsp+50h] [rbp+8h] BYREF
  struct IClassicWindow *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v5 = (CClassicWindowManager *)((char *)this - 80);
  while ( 1 )
  {
    v10 = 0LL;
    LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
                                              v5,
                                              a2,
                                              &v10);
    v7 = v10;
    if ( LastActiveClassicWindowWithValidation >= 0 )
      LastActiveClassicWindowWithValidation = (*(__int64 (__fastcall **)(struct IClassicWindow *, HWND *, int *))(*(_QWORD *)v10 + 40LL))(
                                                v10,
                                                a3,
                                                &v9);
    if ( v7 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( LastActiveClassicWindowWithValidation < 0 )
      break;
    if ( v9 )
      return (unsigned int)LastActiveClassicWindowWithValidation;
  }
  *a3 = 0LL;
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
