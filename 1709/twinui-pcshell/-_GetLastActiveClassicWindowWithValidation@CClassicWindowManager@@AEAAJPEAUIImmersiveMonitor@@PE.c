/*
 * XREFs of ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180038CC8
 * Callers:
 *     ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x180037CF0 (-GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z.c)
 *     ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x180037D80 (-GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAP.c)
 * Callees:
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180038A8C (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IClassicWindow **a3)
{
  struct IClassicWindow *v6; // rbx
  int v7; // esi
  struct IClassicWindow *v8; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  struct IClassicWindow *v12; // [rsp+68h] [rbp+20h] BYREF

  v10[1] = -2LL;
  v6 = 0LL;
  v12 = 0LL;
  *a3 = 0LL;
  while ( 1 )
  {
    if ( v6 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    CClassicWindowManager::_GetLastActiveClassicWindow(this, a2, &v12);
    v6 = v12;
    v7 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD *, int *))(*(_QWORD *)v12 + 40LL))(v12, v10, &v11);
    if ( v7 < 0 )
      break;
    if ( v11 )
    {
      v8 = v6;
      v6 = 0LL;
      *a3 = v8;
      break;
    }
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 10) + 72LL))((char *)this + 80, v10[0]);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
