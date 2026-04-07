/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x180074654
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800749C0 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180038F50 (-Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003EE58 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18004AF84 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x18007493C (--_GCAnimationClockCoordinator@@QEAAPEAXI@Z.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180074A00 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180074A40 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x180074A80 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x180074AC0 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x180074B40 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x180089378 (--1CContactManager@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x18009ABDC (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800A8D68 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, __int64 a2)
{
  __int64 v2; // rdi
  CBaseObject **v4; // rsi
  CAnimationClockCoordinator *v5; // rcx
  void *v6; // rdi
  struct _RTL_GENERIC_TABLE *v7; // rcx
  CTransitionVisualController *v8; // rcx
  void *v9; // rdi
  struct _RTL_GENERIC_TABLE *v10; // rcx
  CWindowList *v11; // rcx
  __int64 v12; // rdx
  CBaseObject *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CTextCache *v17; // rcx
  CIconicBitmapRegistry *v18; // rcx
  CImmersiveIconicBitmapRegistry *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  CBaseObject **v22; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 140);
  *(_QWORD *)this = &CDesktopManager::`vftable';
  if ( (_DWORD)v2 )
  {
    v22 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 536, a2, &v22);
    if ( v22 )
    {
      v4 = v22;
      do
      {
        CBaseObject::Release(*v4++);
        --v2;
      }
      while ( v2 );
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v22);
    }
  }
  v5 = (CAnimationClockCoordinator *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    CAnimationClockCoordinator::`scalar deleting destructor'(v5, a2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 28);
  if ( v6 )
  {
    CAnimationScheduler::~CAnimationScheduler(*((CAnimationScheduler **)this + 28));
    WPF::Free(v7, v6);
    *((_QWORD *)this + 28) = 0LL;
  }
  v8 = (CTransitionVisualController *)*((_QWORD *)this + 29);
  if ( v8 )
  {
    CTransitionVisualController::`scalar deleting destructor'(v8, a2);
    *((_QWORD *)this + 29) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 22);
  if ( v9 )
  {
    CContactManager::~CContactManager(*((CContactManager **)this + 22));
    WPF::Free(v10, v9);
    *((_QWORD *)this + 22) = 0LL;
  }
  v11 = (CWindowList *)*((_QWORD *)this + 56);
  if ( v11 )
  {
    CWindowList::`vector deleting destructor'(v11, 1u);
    *((_QWORD *)this + 56) = 0LL;
  }
  if ( *((_QWORD *)this + 60) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 60) = 0LL;
  }
  CDesktopManager::ReleaseDesktopRenderTarget(this);
  v13 = (CBaseObject *)*((_QWORD *)this + 59);
  if ( v13 )
    CBaseObject::Release(v13);
  v14 = *((_QWORD *)this + 25);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *((_QWORD *)this + 26);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *((_QWORD *)this + 27);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = (CTextCache *)*((_QWORD *)this + 31);
  if ( v17 )
  {
    CTextCache::`scalar deleting destructor'(v17, 1u);
    *((_QWORD *)this + 31) = 0LL;
  }
  v18 = (CIconicBitmapRegistry *)*((_QWORD *)this + 32);
  if ( v18 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v18, 1u);
    *((_QWORD *)this + 32) = 0LL;
  }
  v19 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 33);
  if ( v19 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v19, 1u);
    *((_QWORD *)this + 33) = 0LL;
  }
  CDesktopManager::UnloadTheme(this, v12);
  v20 = *((_QWORD *)this + 4);
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 160LL))(v20, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v21 = *((_QWORD *)this + 34);
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    *((_QWORD *)this + 34) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 712);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 536);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 96);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
