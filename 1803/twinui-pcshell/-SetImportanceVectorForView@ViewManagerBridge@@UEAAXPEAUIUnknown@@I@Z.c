/*
 * XREFs of ?SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z @ 0x180055DE0
 * Callers:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18004F258 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180052F70 (-SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800531D0 (-SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Sh.c)
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1800535E0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetImportanceVectorForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        unsigned int a3)
{
  const wchar_t *v4; // rax
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v11 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v11);
    v4 = L"ResourceImportanceVector";
    v9 = L"ResourceImportanceVector";
    v5 = 0;
    do
    {
      ++v4;
      ++v5;
    }
    while ( *v4 );
    v8 = v5 | 0x80000000;
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v11 + 688LL))(v11, &v8, a3);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFF,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6,
        -2);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
}
