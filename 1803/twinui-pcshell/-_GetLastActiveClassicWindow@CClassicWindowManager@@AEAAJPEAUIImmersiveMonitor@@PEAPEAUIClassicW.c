/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x1800061F8
 * Callers:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18000614C (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x18011A150 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsUnownedNonTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x180007E50 (-IsUnownedNonTrayWindow@CClassicWindow@@UEBA_NXZ.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18000AC18 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IClassicWindow **a3)
{
  struct IUnknown *v3; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  CClassicWindow *v8; // rdi
  bool v9; // bl
  HWND v10; // rax
  bool v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  bool (__fastcall *v15)(CClassicWindow *__hidden); // rax
  bool IsUnownedNonTrayWindow; // al
  HWND v18; // rax
  HWND v19; // rdx
  int v20; // [rsp+30h] [rbp-28h] BYREF
  CClassicWindow *v21; // [rsp+38h] [rbp-20h] BYREF
  _QWORD *v22; // [rsp+40h] [rbp-18h]
  __int64 v23; // [rsp+48h] [rbp-10h]
  struct IUnknown *v24; // [rsp+A0h] [rbp+48h] BYREF
  struct IImmersiveMonitor *v25; // [rsp+A8h] [rbp+50h]
  struct IClassicWindow **v26; // [rsp+B0h] [rbp+58h]
  unsigned int v27; // [rsp+B8h] [rbp+60h]

  v26 = a3;
  v25 = a2;
  v23 = -2LL;
  v3 = (struct IUnknown *)a2;
  *a3 = 0LL;
  v27 = -2147024809;
  v5 = *((_QWORD *)this + 25);
  v6 = v5;
  v7 = 0LL;
  if ( !v5 )
    return v27;
  while ( 1 )
  {
    v8 = *(CClassicWindow **)(*((_QWORD *)this + 24) + 8 * v7);
    v21 = v8;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v21);
    v9 = 1;
    if ( v3 )
    {
      v24 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v24);
      if ( (*(int (__fastcall **)(CClassicWindow *, struct IUnknown **))(*(_QWORD *)v8 + 80LL))(v8, &v24) >= 0
        && !(unsigned int)SHIsSameObject(v3, v24)
        && (*(int (__fastcall **)(_QWORD, struct IUnknown *, int *))(**((_QWORD **)this + 33) + 80LL))(
             *((_QWORD *)this + 33),
             v24,
             &v20) >= 0 )
      {
        v9 = v20 == 0;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v24);
      if ( !v9 )
        goto LABEL_25;
    }
    v10 = (HWND)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v8 + 24LL))(v8);
    v11 = v9;
    if ( IsIconic(v10) )
      v11 = 0;
    if ( v11 )
    {
      v12 = (_QWORD *)*((_QWORD *)this + 35);
      v22 = v12;
      if ( v12 )
      {
        LODWORD(v24) = 0;
        v13 = *v12;
        v14 = (*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v8 + 24LL))(v8);
        if ( (*(int (__fastcall **)(_QWORD *, __int64, _QWORD, struct IUnknown **))(v13 + 48))(v22, v14, 0LL, &v24) >= 0
          && (_DWORD)v24 == 1 )
        {
          v11 = 0;
        }
      }
      if ( v11 )
        break;
    }
LABEL_19:
    v3 = (struct IUnknown *)v25;
LABEL_25:
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v21);
    if ( ++v7 >= v5 )
      goto LABEL_15;
  }
  v15 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)v8 + 152LL);
  if ( v15 == CClassicWindow::IsUnownedNonTrayWindow )
    IsUnownedNonTrayWindow = CClassicWindow::IsUnownedNonTrayWindow(v8);
  else
    IsUnownedNonTrayWindow = v15(v8);
  if ( IsUnownedNonTrayWindow )
  {
    v18 = (HWND)(*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v8 + 24LL))(v8);
    if ( !CApplicationManagerUtility::IsValidAndVisibleWindow(v18, v19) )
    {
      v6 = v7;
      goto LABEL_19;
    }
  }
  v21 = 0LL;
  *v26 = v8;
  v27 = 0;
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v21);
LABEL_15:
  if ( v6 != v5 )
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 23) + 16LL))((char *)this + 184, v6);
  return v27;
}
