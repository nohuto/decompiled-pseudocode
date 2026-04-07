/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x180077EA0
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x180078210 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180043780 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x180078114 (--_GCAnimationClockCoordinator@@QEAAPEAXI@Z.c)
 *     ??_GCAnimationScheduler@@QEAAPEAXI@Z @ 0x180078184 (--_GCAnimationScheduler@@QEAAPEAXI@Z.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180078250 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180078290 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x1800782D0 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x180078310 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x180078390 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x18007F888 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x180088DC4 (--1CContactManager@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800A1698 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
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
  CTextCache *v12; // rcx
  CIconicBitmapRegistry *v13; // rcx
  CImmersiveIconicBitmapRegistry *v14; // rcx
  CBaseObject *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  CBaseObject **v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 130);
  *(_QWORD *)this = &CDesktopManager::`vftable';
  if ( (_DWORD)v2 )
  {
    v19 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 496, a2, &v19);
    if ( v19 )
    {
      v4 = v19;
      do
      {
        CBaseObject::Release(*v4++);
        --v2;
      }
      while ( v2 );
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v19);
    }
  }
  v5 = (CAnimationClockCoordinator *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    CAnimationClockCoordinator::`scalar deleting destructor'(v5, a2);
    *((_QWORD *)this + 19) = 0LL;
  }
  v6 = (CAnimationScheduler *)*((_QWORD *)this + 22);
  if ( v6 )
  {
    CAnimationScheduler::`scalar deleting destructor'(v6, a2);
    *((_QWORD *)this + 22) = 0LL;
  }
  v7 = (CTransitionVisualController *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    CTransitionVisualController::`scalar deleting destructor'(v7, a2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v8 = *((_QWORD *)this + 18);
  if ( v8 )
  {
    CContactManager::~CContactManager(*((CContactManager **)this + 18));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8);
    *((_QWORD *)this + 18) = 0LL;
  }
  v9 = (CWindowList *)*((_QWORD *)this + 51);
  if ( v9 )
  {
    CWindowList::`vector deleting destructor'(v9, 1u);
    *((_QWORD *)this + 51) = 0LL;
  }
  if ( *((_QWORD *)this + 55) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 55) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 54);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = *((_QWORD *)this + 21);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = (CTextCache *)*((_QWORD *)this + 25);
  if ( v12 )
  {
    CTextCache::`scalar deleting destructor'(v12, 1u);
    *((_QWORD *)this + 25) = 0LL;
  }
  v13 = (CIconicBitmapRegistry *)*((_QWORD *)this + 26);
  if ( v13 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v13, 1u);
    *((_QWORD *)this + 26) = 0LL;
  }
  v14 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 27);
  if ( v14 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v14, 1u);
    *((_QWORD *)this + 27) = 0LL;
  }
  v15 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v15 )
    CBaseObject::Release(v15);
  v16 = *((_QWORD *)this + 9);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    *((_QWORD *)this + 9) = 0LL;
  }
  CAccent::CleanupAccentStatics();
  CDesktopManager::UnloadTheme(this);
  v17 = *((_QWORD *)this + 4);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
    *((_QWORD *)this + 4) = 0LL;
  }
  v18 = *((_QWORD *)this + 28);
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    *((_QWORD *)this + 28) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 672);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 496);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
