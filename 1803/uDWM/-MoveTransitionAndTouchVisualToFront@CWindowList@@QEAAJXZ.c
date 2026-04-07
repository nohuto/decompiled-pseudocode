/*
 * XREFs of ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002DB70
 * Callers:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x180027234 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800273D0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180025B30 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::MoveTransitionAndTouchVisualToFront(CWindowList *this)
{
  CDesktopManager *v1; // rbx
  int v2; // esi
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rbx
  __int64 v7; // rdi
  CVisual *v8; // rcx
  int v9; // eax
  CVisual *v10; // rcx
  void (*v11)(void); // rax
  __int64 v12; // rax
  PVOID v13; // rax
  CVisual *v14; // rdi
  void (__fastcall *v15)(CVisual *, double); // rax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+30h] [rbp-68h]
  __int128 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  char v21; // [rsp+58h] [rbp-40h]

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v5 = 1;
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 116), 1u);
    v1 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v6 = *((_QWORD *)v1 + 24);
  if ( v6 )
  {
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( *(_DWORD *)(v6 + 64) && *(_BYTE *)(v6 + 120) )
      v5 = 0;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v5 )
    {
      v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
      if ( v7 )
      {
        v8 = *(CVisual **)(v7 + 8);
        if ( v8 )
        {
          v9 = CVisual::MoveToFront(v8, 0);
          v10 = *(CVisual **)(v7 + 8);
          v2 = v9;
          v11 = *(void (**)(void))(*(_QWORD *)v10 + 88LL);
          if ( (char *)v11 == (char *)CVisual::SetOpacity )
            CVisual::SetOpacity(v10, 1.0);
          else
            v11();
          if ( v2 >= 0 )
          {
            v12 = *(_QWORD *)(v7 + 96);
            Buffer[1] = 0LL;
            v20 = -1LL;
            v18 = 0LL;
            v19 = 0LL;
            Buffer[0] = v12;
            v21 = 0;
            v13 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
            if ( v13 )
            {
              v14 = (CVisual *)*((_QWORD *)v13 + 5);
              if ( v14 )
              {
                CVisual::MoveToFront(*((CVisual **)v13 + 5), 0);
                v15 = *(void (__fastcall **)(CVisual *, double))(*(_QWORD *)v14 + 88LL);
                if ( v15 == CVisual::SetOpacity )
                  CVisual::SetOpacity(v14, 1.0);
                else
                  ((void (__fastcall *)(CVisual *))v15)(v14);
              }
            }
          }
        }
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 116), 0xFFFFFFFF) == 1 )
    {
      *(_QWORD *)v6 = &CAnimationEngine::`vftable';
      DynArrayImpl<0>::~DynArrayImpl<0>(v6 + 72);
      DynArrayImpl<0>::~DynArrayImpl<0>(v6 + 40);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
    }
  }
  return (unsigned int)v2;
}
