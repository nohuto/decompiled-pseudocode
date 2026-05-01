/*
 * XREFs of ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802434C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18013CEE4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180243280 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802433D4 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802767A4 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::UnsubscribeFromServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // r14
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+80h] [rbp+50h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  v15[1] = -2LL;
  v19 = 0LL;
  v18 = 0LL;
  v3 = 0LL;
  v15[0] = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 328);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v19, (char *)this + 400);
  v5 = *((_DWORD *)this + 50);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v18, (char *)this + 272);
  v6 = *((_DWORD *)this + 51);
  v7 = *((_QWORD *)this + 36);
  if ( v7 )
  {
    v17 = *((_QWORD *)this + 36);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v17);
    v17 = 0LL;
    v3 = v7;
    v15[0] = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  v8 = *((_DWORD *)this + 55);
  *((_QWORD *)this + 24) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 50);
  *((_DWORD *)this + 50) = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 26) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  *((_DWORD *)this + 55) = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( v18 && v6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 48LL))(v18, v6);
  if ( v19 && v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 48LL))(v19, v5);
  v9 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)((char *)this - 48));
  v11 = v9;
  if ( v9 >= 0 )
  {
    v13 = *((_QWORD *)this + 26);
    if ( v13 )
      UnregisterScaleChangeEvent(v13, v10);
    SmartCookie::Unregister((TouchKeyboardExperienceManager *)((char *)this + 480));
    if ( v3 && v8 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v8);
    v9 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)((char *)this - 48));
    v11 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      goto LABEL_22;
    }
    v12 = 1161LL;
  }
  else
  {
    v12 = 1147LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v11;
}
