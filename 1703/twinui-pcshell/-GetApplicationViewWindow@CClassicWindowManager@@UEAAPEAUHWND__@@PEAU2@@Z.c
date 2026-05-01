/*
 * XREFs of ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x1800366E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetApplicationViewWindow(CClassicWindowManager *this, HWND a2)
{
  HWND Window; // rbx
  __int64 v4; // rdi
  struct IClassicWindow *v5; // rcx
  struct IClassicWindow *v7; // [rsp+48h] [rbp+10h] BYREF

  Window = a2;
  v4 = 0LL;
  while ( Window )
  {
    if ( v4 )
      break;
    v7 = 0LL;
    if ( (int)CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)((char *)this - 56), Window, &v7, 0LL) >= 0
      && (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 128LL))(v7) )
    {
      v4 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
    }
    Window = GetWindow(Window, 4u);
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return v4;
}
