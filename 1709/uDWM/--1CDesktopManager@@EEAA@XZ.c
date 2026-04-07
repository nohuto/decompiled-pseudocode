/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x18006D8B4
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x18006DC70 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003BB78 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x18006DB70 (--_GCAnimationClockCoordinator@@QEAAPEAXI@Z.c)
 *     ??_GCAnimationScheduler@@QEAAPEAXI@Z @ 0x18006DBE0 (--_GCAnimationScheduler@@QEAAPEAXI@Z.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x18006DCB0 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x18006DCF0 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x18006DD30 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x18006DD70 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x18006DDF0 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x180075920 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x180080270 (--1CContactManager@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18009FE18 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, __int64 a2)
{
  __int64 v2; // rdi
  CBaseObject **v4; // rsi
  CAnimationClockCoordinator *v5; // rcx
  CAnimationScheduler *v6; // rcx
  CTransitionVisualController *v7; // rcx
  __int64 v8; // rdi
  CWindowList *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  CTextCache *v14; // rcx
  CIconicBitmapRegistry *v15; // rcx
  CImmersiveIconicBitmapRegistry *v16; // rcx
  CBaseObject *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  CBaseObject **v21; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 142);
  *(_QWORD *)this = &CDesktopManager::`vftable';
  if ( (_DWORD)v2 )
  {
    v21 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 544, a2, &v21);
    if ( v21 )
    {
      v4 = v21;
      do
      {
        CBaseObject::Release(*v4++);
        --v2;
      }
      while ( v2 );
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v21);
    }
  }
  v5 = (CAnimationClockCoordinator *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    CAnimationClockCoordinator::`scalar deleting destructor'(v5, a2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v6 = (CAnimationScheduler *)*((_QWORD *)this + 28);
  if ( v6 )
  {
    CAnimationScheduler::`scalar deleting destructor'(v6, a2);
    *((_QWORD *)this + 28) = 0LL;
  }
  v7 = (CTransitionVisualController *)*((_QWORD *)this + 29);
  if ( v7 )
  {
    CTransitionVisualController::`scalar deleting destructor'(v7, a2);
    *((_QWORD *)this + 29) = 0LL;
  }
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
  {
    CContactManager::~CContactManager(*((CContactManager **)this + 22));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8);
    *((_QWORD *)this + 22) = 0LL;
  }
  v9 = (CWindowList *)*((_QWORD *)this + 57);
  if ( v9 )
  {
    CWindowList::`vector deleting destructor'(v9, 1u);
    *((_QWORD *)this + 57) = 0LL;
  }
  if ( *((_QWORD *)this + 61) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 61) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = *((_QWORD *)this + 25);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 26);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 27);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (CTextCache *)*((_QWORD *)this + 31);
  if ( v14 )
  {
    CTextCache::`scalar deleting destructor'(v14, 1u);
    *((_QWORD *)this + 31) = 0LL;
  }
  v15 = (CIconicBitmapRegistry *)*((_QWORD *)this + 32);
  if ( v15 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v15, 1u);
    *((_QWORD *)this + 32) = 0LL;
  }
  v16 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 33);
  if ( v16 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v16, 1u);
    *((_QWORD *)this + 33) = 0LL;
  }
  v17 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v17 )
    CBaseObject::Release(v17);
  v18 = *((_QWORD *)this + 9);
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    *((_QWORD *)this + 9) = 0LL;
  }
  CAccent::CleanupAccentStatics();
  CDesktopManager::UnloadTheme(this);
  v19 = *((_QWORD *)this + 4);
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 160LL))(v19, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v20 = *((_QWORD *)this + 34);
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    *((_QWORD *)this + 34) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 720);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 544);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 96);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
